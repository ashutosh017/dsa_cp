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
        int n, k;
        cin >> n >> k;
        string st;
        cin >> st;
        vi b(26, 0), s(26, 0);
        for (auto i : st)
        {
            if (i >= 'A' && i <= 'z')
                b[i - 'A']++;
            else
                s[i - 'a']++;
        }
        int ans = 0;
        rep(i, 26)
        {
            int pairs = min(s[i], b[i]);
            ans += pairs;
            s[i] -= pairs, b[i] -= pairs;
            int add = min(k, max(s[i], b[i]) / 2);
            k -= add, ans += add;
        }
        cout << ans << nline;
    }
    return 0;
}