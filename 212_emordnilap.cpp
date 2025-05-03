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
#define nline '\n'

const int M = 1e9 +7;
const int N = 1e5+5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vll fact(N);fact[0]=1;
    forn(i,1,N-1){
        fact[i] = fact[i-1]*i;
        fact[i]%=M;
    }
    int t;cin>>t;while(t--){
    	int n;cin>>n;
        ll ans = 1ll*n*(n-1);
        ans%=M;
        ans=(ans*fact[n])%M;
        cout<<ans<<nline;
    }    
}