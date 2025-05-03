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

int n;
vi dp(100,-1);
int rec(int level){
	if(dp[level]!=-1)return dp[level];
	if(level==n){
		return 1;
	}
	int ans = 0;
	forn(i,1,3){
		if(level+i<=n){
			ans+=rec(level+i);
		}
	}
	dp[level]=ans;
	return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;cin>>t;while(t--){}    
    cin>>n;
    cout<<rec(0);
    
}