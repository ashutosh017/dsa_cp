#include <bits/stdc++.h>
using namespace std;
void sortArr(int *arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = *arr[i];
                *arr[i] = *arr[j];
                *arr[j] = temp;
            }
        }
    }
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = i; j < n; j++)
        //     {
        //         if (arr[i] > arr[j])
        //         {
        //             int temp = arr[i];
        //             arr[i] = arr[j];
        //             arr[j] = temp;
        //         }
        //     }
        // }
        sort(arr,arr+n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
        if (n == x)
            cout << arr[0] - 1 << endl;
        else if (x == 1)
            cout << arr[n - 1] - 1 << endl;
        else
            cout << arr[n - x] - 1 << endl;
    }
    return 0;
}
