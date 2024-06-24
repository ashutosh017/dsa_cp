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

class Graph{
    int V;
public:
    vector<list<int>> adj;
    Graph(int V);
    void addEdge(int v, int w);
    void BFS(int s);
};

Graph::Graph(int V){
    this->V = V;
    adj.resize(V);
}
void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
}
void Graph::BFS(int s){
    vector<bool> visited(V,false);
    list<int> queue;
    visited[s] = true;
    queue.push_back(s);
    while(!queue.empty()){
        s = queue.front();
        cout<<s<<" ";
        queue.pop_front();
        for(auto i: adj[s]){
            if(!visited[i]){
                visited[i] = true;
                queue.push_back(i);
            }
        }
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;cin>>t;while(t--){}    
    int V; cin>>V;
    Graph g(V);
    int n; cin>>n; // no. of edges;
    while(n--){
        int v,w; cin>>v>>w;
        g.addEdge(v,w);
    }
    g.BFS(g.adj[0].front());
    cout<<nline;

    for(auto i: g.adj){
        cout<<i.front()<<" -> ";
        for(auto j:i)cout<<j<<' ';
            cout<<nline;

    }
    // cout<<nline<<g.adj[0].front();

}