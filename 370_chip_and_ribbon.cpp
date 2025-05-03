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
    	int n; cin>>n;
    	vi v(n); rep(i,n)cin>>v[i];
    	int mn= v[0]; ll ans=v[0]-1;
    	forn(i,1,n-1){
    		if(v[i]>mn){
    			ans+=v[i]-mn; 
                mn = v[i];
    		}
    		mn = min(mn, v[i]);
            // ans+=max(0,v[i]-v[i-1]);
    	}
    	cout<<ans<<nline;
    }    
}