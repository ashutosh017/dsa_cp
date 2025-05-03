#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, a, b) for(int i=a;i<=b;i++)
#define ford(i,a,b) for(int i=a;i>=b;i--)
#define rep(i, n) forn(i, 0, n-1)
#define fi first
#define se second
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(),x.end()
#define nline '\n'


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;    
    int mod = 1e9+7;
    vi dp(n+1,0);
    dp[0] = 1;
    forn(i,1,n){
        for(int j = 1;j<=6&&i-j>=0;j++){
            (dp[i]+=dp[i-j])%=mod;
        }
    }
    cout<<dp[n]<<nline;
    
}