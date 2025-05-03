// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, xor1, xor2;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        xor1 = arr[0];
        for (int i = 1; i < n; i++)
        {
            xor1 ^= arr[i];
        }
        if (xor1 == 0)
            cout << 0 << endl;
        else
        {   
            xor2 = xor1^arr[0];
            for (int i = 1; i < n; i++)
            {
                xor2^=arr[i]^=xor1;
            }
            if(xor2==0)cout<<xor1<<endl;
            else cout<<-1<<endl;
        }
    }
    return 0;
}