// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
int isBeautiful(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= i+1)
        return 1;
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (isBeautiful(arr, n))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}