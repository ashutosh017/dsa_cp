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
        int n;cin>>n;
        vi v(n);rep(i,n)cin>>v[i];
        sort(all(v));
        // 2 2 3 3 4 5 5 
        int l=v[0],r=v[n-1],lc = 0,rc=0;
        rep(i,n){
            if(v[i]==l)lc++;
            if(v[i]==r)rc++;
        }
        // cout<<lc<<" "<<rc<<" "<<"\n";
        cout<<1LL*2*lc*rc<<"\n";

    }
    return 0;
}