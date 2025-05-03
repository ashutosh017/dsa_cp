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
    ll n,m,k;cin>>n>>m>>k;
    vll v1(n),v2(m);
    rep(i,n)cin>>v1[i];
    rep(i,m)cin>>v2[i];
    sort(all(v1));
    sort(all(v2));
    ll cnt=0;
    // rep(i,n)if(abs(v2[i]-v1[i])<=k)cnt++;
    ll i = 0,j=0;
    while(i<n&&j<m){
        if(abs(v1[i]-v2[j])<=k){
            cnt++;
            i++,j++;
        }
        else if((v1[i]-v2[j])>k){
            j++;
        }
        else i++;
    }
    cout<<cnt<<"\n";
    return 0;
}