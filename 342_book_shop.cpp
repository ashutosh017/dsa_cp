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
#define mod 1000000007

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;cin>>t;while(t--){}    
    int n,x;
    cin>>n>>x;
    vi price(n+1,0),pages(n+1,0);
    rep(i,n)cin>>price[i+1];
    rep(i,n)cin>>pages[i+1];
    vvi dp(n+1,vi(x+1,0));
    forn(i,1,n){
      forn(j,0,x){
        dp[i][j] = dp[i-1][j];
        int left = j-price[i];
        if(left>=0){
          dp[i][j] = max(dp[i-1][j],dp[i-1][left]+pages[i]);
        }        
      }
    }
    cout<<dp[n][x]<<nline;
}