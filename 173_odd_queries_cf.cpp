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
        ll n,q;cin>>n>>q; vll v(n+1),psv(n+1);
        forn(i,1,n)cin>>v[i];
        psv = v;
        forn(i,1,n)psv[i]+=psv[i-1];
        rep(i,q){
            ll l,r,k;
            cin>>l>>r>>k;
            // cout<<psv[n]<<endl;
            ll num = psv[n] - (psv[r]-psv[l-1]);
            // cout<<num<<endl;
            // cout<<num + k*(r-l+1)<<endl;
            if((num + k*(r-l+1))%2)
                cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
        
    }
    return 0;
}