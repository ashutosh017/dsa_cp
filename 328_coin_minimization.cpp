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
	int n,x;cin>>n>>x;
	vi v(n); rep(i,n)cin>>v[i];
	vi dp(x+1,1e9);
	dp[0] = 0;
	sort(all(v));
	forn(i,1,x){
		rep(j,n){
			if(i-v[j]>=0){
				dp[i] = min(dp[i],dp[i-v[j]]+1);
			}
		}
	}
	
	// forn(i,1,x){
	// 	rep(j,n){
	// 		if(i-v[j]>=0){
	// 			dp[i] = min(dp[i],dp[i-v[j]]+1);
	// 		}
	// 		else break;
	// 	}
	// }
	cout<<(dp[x]==1e9?-1:dp[x])<<nline;
}