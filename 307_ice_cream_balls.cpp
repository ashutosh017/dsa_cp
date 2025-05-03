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

ll ncr(ll m){
	return m*(m-1)/2;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	ll n;cin>>n;
    	ll l = 0,r=2e9,m=0,ans=0;
    	while(l<=r){
    		m = (l+r)/2;
    		if(ncr(m)<=n)
    			ans = m, l = m+1;
    		else r = m-1;
    	}
    	ans+=n-ncr(ans);
    	cout<<ans<<nline;
    }    
}