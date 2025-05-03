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
ll sumUptoN(ll n){
    return n==0?0:n+sumUptoN(n-1);
}
int main(){
    ll n;cin>>n;
    vector<ll> v1,v2;
    ll t = sumUptoN(n);
    if(t%2)cout<<"NO"<<endl;
    else{
        t/=2;
        cout<<"YES"<<endl;
        while(n){
            if((t-n)>=0){
                v1.push_back(n);
                t-=n;
            }else{
                v2.push_back(n);
            }
            n--;
        }
        cout<<v1.size()<<endl;
        for(ll i:v1)cout<<i<<" ";cout<<endl;
        cout<<v2.size()<<endl;
        for(ll i:v2)cout<<i<<" ";cout<<endl;
    }
    return 0;
}