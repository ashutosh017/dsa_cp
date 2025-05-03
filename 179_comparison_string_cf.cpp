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
        string s;cin>>s;
        ll a=1,b=1;
        rep(i,n-1){
            if(s[i]==s[i+1]){
                a++;
            }
            else{
                a=1;
            }
            if(a>b){
                b=a;
            }
        }
        cout<<b+1<<"\n";

    }
    return 0;
}