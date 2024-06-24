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

void addEdge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
}
void adjecencyList(vector<int> adj[], int V){
	for(int i=0;i<V;i++){
		cout<<i<<" -> ";
		for(auto i: adj[i]){
			cout<<i<<' ';
		}
		cout<<'\n';
	}
}
void initGraph(int V, int edges[3][2], int noOfEdges){
	vector<int> adj[V];
	for(int i=0; i<noOfEdges; i++){
		addEdge(adj,edges[i][0],edges[i][1]);
	}
	adjecencyList(adj, V);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int V=3; 
    int edges[3][2] = {{0,1}, {1,2}, {2,3}};
    int noOfEdges = 3; // Size of the edges array
    initGraph(V,edges,noOfEdges);
}