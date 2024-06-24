#include <bits/stdc++.h>
using namespace std;

// Values
#define ll long long
#define nline '\n'
#define mod 1000000007

// Loops
#define forn(i, a, b) for(ll i=a;i<=b;i++)
#define ford(i,a,b) for(ll i=a;i>=b;i--)
#define forc(i,a,b) for(char i=a;i<=b;i++)
#define rep(i, n) forn(i, 0, n-1)

// Containers
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vb vector<bool>
#define pii pair<int, int>
#define pll pair<ll, ll>

// Methods
#define fi first
#define se second
#define pb push_back
#define ppb pop_back
#define ppf pop_front
#define all(x) x.begin(),x.end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n,m; cin>>n>>m;
    	list<pii> adj[n];
    	rep(i,m){
    		int u,v,w;
    		cin>>u>>v>>w;
    		u--,v--;
    		adj[u].pb({v,w});
    		adj[v].pb({u,w});	
    	}
    	vi s(n);
    	rep(i,n)cin>>s[i];
    	priority_queue<array<ll,3>>pq;
    	vll dist(n,INT_MAX);
    	pq.push({0,0,0});



    }    
}