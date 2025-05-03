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
    int n;cin>>n;
    vvi dp(n,vi(n,0));
    dp[0][0] = 1;
    
    rep(i,n){
    	string row;
    	cin>>row;
    	rep(j,n){
    		if(row[j]=='.'){
    			if(i>0){
    				(dp[i][j]+=dp[i-1][j])%=mod;
    				
    			}
    			if(j>0){
    				(dp[i][j]+=dp[i][j-1])%=mod;
    			}
    			
    		}
    		else{
    			dp[i][j] = 0;
    		}
    	}    	    	
    }
    cout<<dp[n-1][n-1]<<nline;
}