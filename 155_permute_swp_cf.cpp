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

int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        int res = 0;
        forn(i,1,n){
            int x;cin>>x;
            res= __gcd(res,abs(x-i));
        }
        cout<<res<<endl;

    
    }
    return 0;
}