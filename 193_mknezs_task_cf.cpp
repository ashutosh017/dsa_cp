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
        ll n;cin>>n;
        if(n==3)cout<<"NO\n";
        else {
            cout<<"YES\n";
            if(n%2){
                ll b = -1*n/2,a = abs(b)-1;
                rep(i,n/2){
                    cout<<a<<" "<<b<<" ";
                }
                cout<<a<<"\n";
            }
            else{
                ll a = 1;
                rep(i,n){
                    cout<<a<<" ";
                    a*=-1;
                }
                cout<<"\n";
            }
        }
    }
    return 0;
}