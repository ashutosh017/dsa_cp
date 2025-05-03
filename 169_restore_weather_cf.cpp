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
    ll t;cin>>t;while(t--){
        ll n,k;cin>>n>>k;
        vector<pair<ll, ll>> a(n);
        vll b(n),c(n);
        ll j = 0;
        for(auto &&i:a){
            cin>>i.fi;
            i.se = j;
            j++;
        }
        for(auto &&i:b){
            cin>>i;
        }
        sort(all(a));
        sort(all(b));
        // rep(i,n){
            // a[i].fi = b[i];
            
        // }
        j = 0;
        for(auto &&i:a){

            // cout<<i.fi<<" "<<i.se<<" "<<b[j]<<endl;
            a[j].fi = b[j];
            j++;
        }
        // j=0;
        // for(auto &&i:a){

        //     cout<<i.fi<<" "<<i.se<<endl;
        //     // a[j].fi = b[j];
        //     j++;
        // }
        // cout<<"\n";
        // for(auto &&i:b){

        //     cout<<i<<" ";
        // }
        // cout<<"\n";
        rep(i,n){
            c[a[i].se] = a[i].fi;
            // cout<<c[i]<<" ";
        }
        rep(i,n){
            cout<<c[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}