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
int chk(ll x, ll y){
    if(x==y)return 1;
    if(x%3) return 0;
    return (chk(x/3,y)|| chk(2*x/3,y));

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;while(t--){
        ll x,y;cin>>x>>y;
        if(chk(x,y))cout<<"YES"<<"\n";
        else cout<<"NO"<<endl;       
    }
    return 0;
}