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
#define SZ 200005

int n, m, k, x;
vector<int> adj[SZ];
vector<int> ans(SZ, -1);
 
int bfs(int src) {
	int top;
	queue<int> q;
	vector<int> d(n+1, -1);
	d[src] = 0;
	ans[src] = max(ans[src], d[src]);
	q.push(src);
 
	while(!q.empty()) {
		top = q.front();
		q.pop();
 
		for(int v: adj[top]) {
			if(d[v] == -1) {
				q.push(v);
				d[v] = d[top] + 1;
				ans[v] = max(ans[v], d[v]);
			}
		}
	}
	return top;
}
 
int main() {
	int u, v;
	
	cin >> n;
	for(int i = 0; i < n-1; i++) {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	int diam_end_1 = bfs(1);
	int diam_end_2 = bfs(diam_end_1);
	bfs(diam_end_2);
 
 
 	vi dist(n+1,0);
	for(int i = 1; i <=n ; i++) {
		// cout << ans[i] << " ";
		dist[ans[i]]++;
	}
	forn(i,1,n){
		dist[i]+=dist[i-1];
		if(dist[i-1]<n)
		cout<<dist[i-1]+1<<' ';
		else cout<<n<<' ';
	}
	
	// for(auto i:dist)cout<<i<<' ';
	
	
}