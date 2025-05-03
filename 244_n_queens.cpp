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
vi queen(20,-1);
bool check(int row, int col){
	rep(i,row){
		int prow = i,pcol = queen[i];
		if(pcol==col|| abs(col-pcol)==abs(row-prow))
			return 0;		
	}
	return 1;
	
}
int rec(int level){
	if(level==n){
		return 1;
	}
	int ans = 0;
	rep(col,n){
		if(check(level, col)){
			queen[level] = col;
			ans+=rec(level+1);
			queen[level] = -1;			
		}
	}
	return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;cin>>t;while(t--){}    
    n = 8;
    cout<<rec(0);
}