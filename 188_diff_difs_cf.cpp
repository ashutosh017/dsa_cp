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
        int n,k;cin>>n>>k;
        int x=2;
        vi v(n);
        v[0] = 1;
        forn(i,1,n-1){
            if((k-v[i-1]-x)>=(n-i-1)){
                v[i] = v[i-1]+x;
                x++;
            }
            else{
                v[i] = v[i-1]+1;
            }
        }
        for(auto i:v)cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}