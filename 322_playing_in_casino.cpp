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

#define int ll
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n,m;cin>>n>>m;
    	vvi v(m,vi(n));
    	ll ans = 0;
    	rep(i,n)rep(j,m)cin>>v[j][i];
        rep(i,m)sort(all(v[i]));
        rep(i,m)rep(j,n)ans+=(j*v[i][j] - (n-1-j)*v[i][j]);
        
        // rep(i,m)rep(j,n)cout<<v[i][j]<<" \n"[j==n-1];
        
        // rep(i,m)rep(j,n)cout<<j*v[i][j] - (n-1-j)*v[i][j];
        
        
    	cout<<ans<<nline;
    }    
}

