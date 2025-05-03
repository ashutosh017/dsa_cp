#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    int s = t;
    while (t--)
    {
        // cout<<"test case "<<s-t<<endl;
        long long int n, k, diff_cnt = 0;
        cin >> n >> k;
        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < (n % 1 ? (n + 1) / 2 : n / 2); i++)
        {
            for (int j = 0; j < (n % 1 && (i==n/2) ? n / 2 : n); j++)
            {
                if (arr[i][j] != arr[n - 1 - i][n - 1 - j])
                    diff_cnt++;
            }
        }
        if (2*diff_cnt == k)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}