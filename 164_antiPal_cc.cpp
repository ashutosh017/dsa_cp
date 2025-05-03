#include <bits/stdc++.h>
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

// Time limit exceeded
int charCount(char c, string s)
{
    int x = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
            x++;
    }
    return x;
}
int isPal(string s)
{
    set<char> a;
    int n = s.size();
    int x = 0;
    rep(i, n) a.insert(s[i]);
    if (s.size() % 2 == 0)
    {
        rep(i, n)
        {
            if (charCount(s[i], s) % 2)
                return 0;
        }
    }
    else if (n % 2)
    {
        for (auto i : a)
        {
            if (charCount(i, s) % 2)
                x++;
            if (x > 1)
                return 0;
        }
    }
    return 1;
}
int ans(string s)
{
    int x = s.size();
    if (!isPal(s))
        return 0;
    if (x % 2 == 0)
        return 1;
    if (x % 2)
    {
        if (charCount(s[0], s) == x)
            return 2;
    }
    return 1;
}
int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << ans(s) << "\n";
    }
    return 0;
}
