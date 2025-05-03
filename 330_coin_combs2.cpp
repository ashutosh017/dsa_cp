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
    int n,x;cin>>n>>x;
    vi v(n);rep(i,n)cin>>v[i];
    vvi dp(n+1,vi(x+1,0));
    dp[0][0] = 1;
    forn(i,1,n){
    	forn(j,0,x){
    		dp[i][j] = dp[i-1][j];
    		int left = j-v[i-1];
    		if(left>=0){
    			(dp[i][j]+=dp[i][left])%=mod;
    		}
    	}
    }
    cout<<dp[n][x]<<nline;
    
    
    // Reverse DP:-
    // vvi dp(x+1,vi(n,0));
    
}