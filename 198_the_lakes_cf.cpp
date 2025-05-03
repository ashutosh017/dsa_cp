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
int n, m;

int search(vector<vi> v, vector<vector<bool>> &v2, int i, int j)
{
    v2[i][j] = true;
    int ans = v[i][j];
    if (i != 1 && v[i - 1][j] != 0 && !v2[i - 1][j])
        ans += search(v, v2, i - 1, j);
    if (i != n && v[i + 1][j] != 0 && !v2[i + 1][j])
        ans += search(v, v2, i + 1, j);
    if (j != 1 && v[i][j - 1] != 0 && !v2[i][j - 1])
        ans += search(v, v2, i, j - 1);
    if (j != m && v[i][j + 1] != 0 && !v2[i][j + 1])
        ans += search(v, v2, i, j + 1);
    // cout<<ans<<nline;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<vi> v(n + 1, vi(m + 1, 0));
        vector<vector<bool>> visited(n + 1, vector<bool>(m + 1, false));
        
        
        forn(i, 1, n)
                forn(j, 1, m)
                    cin >>
            v[i][j];

        int ans = 0;
        forn(i, 1, n)
            forn(j, 1, m) if (v[i][j] != 0 && !visited[i][j])
                ans = max(ans, search(v, visited, i, j));

        cout << ans << nline;
    }
    return 0;
}