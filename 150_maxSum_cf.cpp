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
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        rep(i, n)
        {
            cin >> v[i];
        }
        sort(all(v));
        vector<ll> v2(n);
        v2[0] = v[0];
        forn(i,1,n-1){
            v2[i] = v[i]+v2[i-1];
        }
        ll ans=0,s=0,si=-1,j=n-1-k;
        forn(i,1,k+1){
            ans = max(ans,v2[j]-s);
            j++,s= v2[i+=2];
        }
        // cout<<"\n";
        // for(auto i:v2)cout<<i<<" ";cout<<"\n";
        
        cout<<ans<<"\n";

        
    }
    return 0;
}

/* 
10 11 12 13 15 22
21 25 15 22
83

1 2 5 6 10
3 11 6 10
24
 */