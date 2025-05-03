#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
#define ll long long
#define forn(i, a, b) for(int i=a;i<=b;i++)
#define ford(i,a,b) for(int i=a;i>=b;i--)
#define rep(i, n) forn(i, 0, n-1)
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(),x.end()
#define nline '\n'
int ans(){
    int n;cin>>n;vi v(n);rep(i,n)cin>>v[i];
        forn(i,0,n){
            int cnt = 0;
            for(auto x: v)if(i<x)cnt++;
            if(cnt==i){
                return cnt;
            }
        }
        return -1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;while(t--){
        cout<<ans()<<nline;

    }
    return 0;
}