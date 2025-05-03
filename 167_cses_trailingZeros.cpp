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

ll count5s(ll n){
    int cnt=0;
    for(ll i = 5;i<=n;i*=5){
        cnt+=n/i;
    }
    return cnt;
}
int main(){
    ll n; cin>>n;
    cout<<count5s(n)<<endl;

    return 0;
}