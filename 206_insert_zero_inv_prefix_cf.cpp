#include <bits/stdc++.h>
// #include<iostream>
using namespace std;
#define ll long long
#define forn(i, a, b) for (int i = a; i <= b; i++)
#define ford(i, a, b) for (int i = a; i >= b; i--)
#define rep(i, n) forn(i, 0, n - 1)
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(), x.end()
#define nline '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n);
        rep(i, n) cin >> a[i];
        vi b(n);
        if (a[n - 1] == 1)
            cout << "NO" << nline;
        else
        {
            cout << "YES" << nline;
            rep(i, n)
            {
                // b.pb(a[i]);
                if (a[i] == 1)
                {
                    int j = i + 1;
                    while (j != n && a[j] != 0)
                    {
                        a[j]--, a[i]++, j++;
                    }
                }
            }
            reverse(all(a));
            for (auto i : a)
                cout << i << " ";
            cout << nline;
        }
    }
    return 0;
}