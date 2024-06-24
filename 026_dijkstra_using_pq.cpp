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

class Graph{
	int V;
	list<pair<int, int>> *adj;
public:
	Graph(int V);
	void addEdge(int u, int v, int w);
	void dijkstra(int src);
};

Graph::Graph(int V){
	this->V = V;
	adj = new list<pair<int, int>>[V];
}

void Graph::addEdge(int u, int v, int w){
	adj[u].push_back(make_pair(v,w));
	adj[v].push_back(make_pair(u,w));
}

void Graph::dijkstra(int src){
	priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
	vector<int> dist(V, INT_MAX);

	pq.push(make_pair(0,src));
	dist[src] = 0;

	while(!pq.empty()){
		int u = pq.top().second;
		pq.pop();

		for(auto i:adj[u]){
			int v = i.first;
			int w = i.second;
			if(w+dist[u]<dist[v]){
				dist[v] = w + dist[u];
				pq.push(make_pair(dist[v],v));
			}
		}

	}
	cout<<"vertex\t\tdistance from the graph\n";
	for(int i = 0; i<V; i++){
		cout<<i<<"\t\t\t"<<dist[i]<<nline;
	}

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;cin>>t;while(t--){}
    int V; cin>>V;
    int n; cin>>n;
    Graph g(V);    
    rep(i,n){
    	int u,v,w; cin>>u>>v>>w;
    	g.addEdge(u,v,w);
    }
    g.dijkstra(0);
}