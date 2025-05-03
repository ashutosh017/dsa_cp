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
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(),x.end()

int main(){
    ll n,x=0;cin>>n;int a[n];rep(i,n)cin>>a[i];
    ll ax = 0;
    rep(i,n-1){
        if(a[i]>ax)ax=a[i];
        if(ax>a[i+1]){
            x+=(ax-a[i+1]);
        }
    }
    cout<<x<<endl;

    return 0;
}