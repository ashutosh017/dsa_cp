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
    ll n,x;cin>>n>>x;
    vll v(n);rep(i,n)cin>>v[i];
    sort(all(v));
    ll i = 0,j=n-1,cnt=0;
    vector<bool> a(n,true);
    while(i<j){
        if((v[i]+v[j])>x){
            j--;
        }
        else{
            cnt++;
            a[i]=a[j]=false;
            i++,j--;
        }
    }
    rep(i,n){
        cnt+=a[i];
    }
   
    cout<<cnt<<"\n";
    return 0;
}