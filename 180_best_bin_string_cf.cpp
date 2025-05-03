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
        string s;cin>>s;
        if(s[0]=='?')s[0]='0';
        ll n = s.size();
        forn(i,1,n-1){
            if(s[i]=='?')s[i]=s[i-1];
        }
        cout<<s<<"\n";
    }
    return 0;
}