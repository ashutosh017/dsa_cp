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
    vi dp(251,0);
    forn(i,1,250){
    	int x = 1;
    	forn(j,1,i){
    		x = j*j;
    		dp[i]+=x;
    	}
    	// cout<<dp[i]<<' ';
    }
    // cout<<nline;
    int t;cin>>t;while(t--){
    	int n;cin>>n;
    	int ans = 1;
        forn(i,0,n){
            int x = 0,Max = i*i,temp = n;
            forn(j,i+1,n){
                Max  = max(Max, j*temp);
                x+=(j*temp);
                temp--;
                // cout<<x<<' ';
            }
            // cout<<nline;
            ans = max(ans,dp[i]+x-Max);
        }
        cout<<ans<<nline;            
    }    
}