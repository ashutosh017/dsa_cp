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
    	int n,k,a,b;cin>>n>>k>>a>>b;
    	vi x(n+1),y(n+1);
    	rep(i,n)cin>>x[i+1]>>y[i+1];
    	ll ans = llabs(x[a]-x[b])+llabs(y[a]-y[b]);
        ll mina = LLONG_MAX / 2, minb = LLONG_MAX / 2;
    	forn(i,1,k){
    		mina = min(mina, llabs(x[i]-x[a])+llabs(y[i]-y[a]));
    		minb = min(minb, llabs(x[i]-x[b])+llabs(y[i]-y[b]));
    	}
    	ans = min(ans,mina+minb);
    	cout<<ans<<nline;
    }    
}