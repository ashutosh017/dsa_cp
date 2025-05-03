#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
#define ll long long
#define forn(i, a, b) for(int i=a;i<=b;i++)
#define ford(i,a,b) for(int i=a;i>=b;i--)
#define rep(i, n) forn(i, 0, n-1)
#define fi first
#define se second
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(),x.end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;while(t--){
        ll n,m;cin>>n>>m;
        // n*=m;
        if(n<m)swap(n,m);
        ll size = n*m;
        vll v(size);for(auto &&i:v)cin>>i;
        sort(all(v));
        ll c1 = abs(v[1]-v[size-1]);
        ll c2 = abs(v[0]-v[size-2]);
        ll maxDiff = abs(v[0]-v[size-1]);
        ll res = (size-m)*maxDiff + (m-1)*max(c1,c2);
        // cout<<c1<<" "<<c2<<" "<<maxDiff<<" "<<res<<endl;
        cout<<res<<"\n";
    }
    return 0;
}