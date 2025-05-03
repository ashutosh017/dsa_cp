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
ll f(ll n, ll k){
    ll ans = 0;
    forn(i,k,n)ans+=(n-i+1);
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;cin>>t;while(t--){
    //     ll n,k,q;cin>>n>>k>>q;
    //     vll v(n),v2;rep(i,n)cin>>v[i];
    //     ll ans=0,sn=0;
    //     rep(i,n){
    //         if(v[i]<=q){
    //             v2.pb(v[i]);
    //             sn = v2.size();
    //         }
    //         else{
    //             if(v2.size()>=k){
    //                 ans+=f(sn,k);
    //             }
    //             v2.clear();
    //         }
    //     }
    //     // cout<<v2.size()<<"\n"<<sn<<"\n";
    //     if(v2.size()>=k){
    //         ans+=f(sn,k);
    //     }
    //     cout<<ans<<"\n";
    // }
    ll t;cin>>t;while(t--){
        ll n,k,q;cin>>n>>k>>q;
        vll v(n);rep(i,n)cin>>v[i];
        ll ans=0,cnt=0;
        rep(i,n){
            if(v[i]<=q){
                cnt++;
            }
            else{
                if(cnt>=k){
                    ans+=f(cnt,k);
                }
                cnt=0;
            }
        }
        if(cnt>=k){
            ans+=f(cnt,k);
        }
        cout<<ans<<"\n";
    }
    return 0;
}