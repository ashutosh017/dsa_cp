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
	    int n;cin>>n;
	    vi a(n+1),b(n+1);
	    vi g(n+1);
	    rep(i,n)cin>>a[i+1];
	    rep(i,n)cin>>b[i+1];
	    int mx = INT_MIN;
	    forn(i,1,n){
	    	mx = max(mx,a[i]-b[i]);
	    }
	    int cnt = 0;
	    forn(i,1,n){
	    	if(a[i]-b[i]==mx)cnt++;
	    }
	    cout<<cnt<<nline;
	    forn(i,1,n){
	    	if(a[i]-b[i]==mx)cout<<i<<' ';	    	
	    }
	    cout<<nline;
	    // forn(u,1,n){
	    // 	forn(v,u+1,n){
	    // 		if((a[u]-a[v])==(b[u]-b[v])){
	    // 			// g[u].pb(v);
	    // 			// g[v].pb(u);
	    // 			g[u]++;
	    // 			g[v]++;
	    			
	    // 		}
	    // 		else if((a[u]-a[v])>=(b[u]-b[v])){
	    // 			// g[u].pb(v);
	    // 			g[u]++;
	    			
	    // 		}
	    // 		else{
	    // 			// g[v].pb(u);	
	    // 			g[v]++;	    		
	    // 		}
	    // 	}
	    // }
	    
	    
	    
	    // forn(i,1,n){
	    // 	if(g[i].size()>0){
	    // 		cout<<i<<" -> ";
	    // 		for(auto j:g[i])cout<<j<<' ';
	    // 		cout<<nline;	    		
	    // 	}	    	
	    // }
	    
	    
	    // int cnt = 0;
	    // vi ans;
	    // forn(i,1,n){
	    // 	if(g[i]==n-1){
	    // 		cnt++;	    		
	    // 		ans.pb(i);
	    // 	}	    	
	    // }
	    // cout<<cnt<<nline;
	    // for(auto i:ans)cout<<i<<' ';cout<<nline;
	    
	    
    }    
    
    
}