#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
#define ll long long
#define forn(i, a, b) for(int i=a;i<=b;i++)
#define ford(i,a,b) for(int i=a;i>=b;i--)
#define rep(i, n) forn(i, 0, n-1)
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(),x.end()
#define nline '\n'
int maximal_subSq(vi v){
    int n = v.size();
    int w = 1;
    rep(i,n)if(v[i]==w)w++;
    return w-1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;while(t--){
        int n,k;cin>>n>>k;
        vi v(n);rep(i,n)cin>>v[i];
        int w = maximal_subSq(v);
        int ans = (n-w-1+k)/k;
        cout<<ans<<nline;
    }
    return 0;
}