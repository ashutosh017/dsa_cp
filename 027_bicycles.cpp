#include <bits/stdc++.h>
using namespace std;

// Values
#define ll long long
#define nline '\n'
#define mod 1000000007
#define INF 1e18

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
    	vector<pii> adj[n];
    	rep(i,m){
    		int u, v, w;
    		cin>>u>>v>>w;
    		--u,--v;
    		adj[u].emplace_back(v,w);
    		adj[v].emplace_back(u,w);
    	}
    	vi s(n);
    	for(int &i:s)cin>>i;

    	vector<vector<int64_t>> dist(n,vector<int64_t>(1001,INF));
    	vector<vector<bool>> vis(n,vector<bool>(1001,false));

    	dist[0][s[0]] = 0;

    	priority_queue<array<int64_t, 3>> q;
    	q.push({0,0,s[0]});

    	while(!q.empty()){
    		int u = q.top()[1], k = q.top()[2];
            // k = src tk pahuchne ke liye jo bike uthai h uski speed, and u is the src here
    		q.pop();
    		if(vis[u][k] || dist[u][k]==INF) continue;
    		vis[u][k] = true;
    		for(auto i: adj[u]){
    			int v = i.fi, w = i.se;
                // w = src aur v ke beech me jo road hai uski length
    			int c = min(s[v], k); // v se bike uthani h ya jo h usi ko leke nikalna hai

                // condition: v tk pahuchne ke liye c bike se jo time lga agr wo
                // jyada hai, u tk k bike se + u se v tk k bike se pahuchne ka distance usse
                // toh dist[v][c] ko change kr do aur queue me abhi tk ka shortest distance
                // jis node tk pahuche wo, and jis bike se pahuche wo dal do
    			if(dist[v][c] > dist[u][k] + 1ll * w * k ){
    				dist[v][c] = dist[u][k] + 1ll * w * k;
    				q.push({-dist[v][c], v, c}); 
                    // '-' is because priority queue by
                    // default holds highest element at top.
    			}
    		}

    	}
    	int64_t ans = INF; 
    	forn(i,1,1000){
    		ans = min(ans, dist[n-1][i]);
    	}
    	cout<<ans<<nline;
    }    
}