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
        int x=0,y=0,n,k,l,r;
        cin>>n>>k;
        rep(i,n){
            cin>>l>>r;
            if(l==k)x=1;
            if(r==k)y=1;
        }
        if(x&&y)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}