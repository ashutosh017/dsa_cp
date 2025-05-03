// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
int showsTopper(int arr1[], int arr2[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (
            ((arr1[i] > arr1[n - 1] && arr1[i] > arr2[n - 1]) || (arr2[i] > arr2[n - 1] && arr2[i] > arr1[n - 1])) ||
            ((arr1[i] > arr1[n - 1] && arr2[i] > arr1[n - 1]) || (arr2[i] > arr2[n - 1] && arr1[i] > arr2[n - 1])))
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *arr1 = new int[n];
        int *arr2 = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        if (showsTopper(arr1, arr2, n))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}