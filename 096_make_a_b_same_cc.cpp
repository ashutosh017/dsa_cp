#include <bits/stdc++.h>
using namespace std;
int count0(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count++;
    }
    return count;
}
int count1(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            count++;
    }
    return count;
}
int isSame(int a, int b)
{
    return a == b;
}
int isConvertible(int arr1[], int arr2[], int n)
{
    int zeros = count0(arr1, n);
    int ones = count1(arr1, n);
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == 0 && arr2[i] == 1)
        {
            if(i==0||i==n-1)return 0;
            if ( ones < 1)
                return 0;
        }
        else if (arr1[i] == 1 && arr2[i] == 0)
        {
            // if (zeros < 3)
                return 0;
        }
    }
    return 1;
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int *arr1, *arr2;
        arr1 = new int[n];
        arr2 = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        if(isConvertible(arr1,arr2,n))cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
