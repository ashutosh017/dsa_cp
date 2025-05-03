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
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(), x.end()

int chk(ll x, ll y){
    if(max(x,y)>2*min(x,y))return 0;
    return (x+y)%3==0;
}
int main()
{
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        // cout << abs(x - y) << endl;
        if (chk(x, y))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}