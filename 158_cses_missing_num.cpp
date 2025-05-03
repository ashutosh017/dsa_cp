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
int missingNumber (vi v,ll n){
    sort(all(v));
    forn(i,1,n)if(i!=v[i])return i;
}
int main(){
    ll n;cin>>n;
    vi v(n);
    forn(i,1,n-1)cin>>v[i];
    cout<<missingNumber(v,n)<<endl;

    return 0;
}