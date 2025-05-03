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
    int t;cin>>t;while(t--){
    	int n,x;
    	cin>>n>>x;
    	vi v(n+1,0); rep(i,n)cin>>v[i+1];
    	int ans = 0;
    	rep(i,n)ans=max(ans,v[i+1]-v[i]);
    	ans = max(ans, 2*(x-v[n]));
    	cout<<ans<<nline;
    	
    }    
}