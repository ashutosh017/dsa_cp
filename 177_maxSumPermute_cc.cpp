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
        ll n,q;cin>>n>>q;
        vi v(n+1);forn(i,1,n)cin>>v[i];
        sort(all(v));
        map<int, int> mp;
        rep(i,q){
          ll l,r;cin>>l>>r;
          forn(j,l,r)mp[j]++;
        }
        cout<<"************************\n";
        for(auto i:mp)cout<<i.fi<<" "<<i.se<<"\n";
        
    }
    
    // return 0;
}