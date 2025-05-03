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

// void f(int &cnt, int &sum, int n){
// 	if(sum==n){
// 		cnt++;
// 		cnt%=mod;
// 		return;
// 	}
// 	if(sum>n)return;
// 	forn(i,1,6){
// 		sum+=i;
// 		f(cnt,sum,n);
// 		sum-=i;
// 	}
// }
// void sol1(){
// 	int cnt=0,sum=0;  
// 	f(cnt,sum,n);
// 	cout<<cnt<<nline;
// }

vi dp(1e6+5,0);
int rec(int sum){
	if(dp[sum])return dp[sum];
	if(sum==n){
		return 1;
	}
	int ans = 0;
	forn(i,1,6){
		if(sum+i<=n){
			sum+=i;
			(ans+=rec(sum))%=mod;
			sum-=i;
		}
	}
	dp[sum]=ans;
	return ans;
}

void sol2(){
	cout<<rec(0);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // sol1();
    cin>>n;
    sol2();
    
}