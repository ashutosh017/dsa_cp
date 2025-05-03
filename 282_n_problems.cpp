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
vi t(1001),s(1001);
int x,k;
vi taken(1001,0);

vi dp(1001,-1);
bool check(int level){
	int timeTaken = 0, itemTaken=0;
	rep(i,level){
		if(taken[i]){
			timeTaken+=t[i];
			itemTaken++;
		}
	}
	timeTaken+=t[level],itemTaken++;
	if(timeTaken<=x&& itemTaken<=k)return 1;
	return 0;
	
}
int rec(int level){
	// if(dp[level]!=-1)return dp[level];
	if(level==n){
		return 0;
	}
	int ans = rec(level+1);
	if(check(level)){
		taken[level] = 1;
		ans = max(ans,s[level]+rec(level+1));
		taken[level] = 0;
	}
	// dp[level]=ans;
	return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;cin>>t;while(t--){}   
    cin>>n; 
    rep(i,n){
    	cin>>t[i]>>s[i];
    }
    cin>>x>>k;
    cout<<rec(0);
}
// t[] = 3 5 4 2 1
// s[] = 3 4 1 3 1
// x = 6, k = 2;