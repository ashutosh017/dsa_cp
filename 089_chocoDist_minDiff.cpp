#include <bits/stdc++.h>
// #include <iostream>
using namespace std;
// int chocolateDist(int arr[],int n, int m){
//     sort(arr,arr+n);
//     int minDif = arr[m-1]-arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if((arr[i+(m-1)]-arr[i])<minDif){
//             minDif = arr[i+(m-1)]-arr[i];
//         }
//     }
//     return minDif;
// }

int findMinDiff(int arr[], int n, int m)
{
    sort(arr, arr + n);
    int minDiff = INT32_MAX;
    // int diff;
    for (int i = 0; i + m - 1 < n; i++)
    {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < minDiff)
            minDiff = diff;
    }
    return minDiff;
}
int main()
{
    /*
    Given an array of N integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that:

    -> Each student gets one packet.
    -> The difference between the number of chocolates in the packet with maximum chocolates and the packet with minimum        chocolates given to the students is minimum.
    */
    int n, m;
    cin >> n >> m;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout<<findMinDiff(v,n,m)<<endl;

    return 0;
}