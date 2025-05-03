#include <bits/stdc++.h>
// #include<iostream>
using namespace std;
#define ll long long
#define forn(i, a, b) for (int i = a; i <= b; i++)
#define ford(i, a, b) for (int i = a; i >= b; i--)
#define rep(i, n) forn(i, 0, n - 1)
#define fi first
#define se second
#define vi vector<int>
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(), x.end()

int main()
{
    ll n;
    cin >> n;
    while (n != 1)
    {
        if (n % 2)
        {
            cout << n << " ";
            n *= 3;
            n++;
        }
        else
        {
            cout << n << " ";
            n /= 2;
        }
    }
    cout<<n<<endl;

    return 0;
}