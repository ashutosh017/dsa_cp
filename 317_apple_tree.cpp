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


vvi g; vll cnt;

void dfs(int v, int p){
	if(g[v].size()==1 && g[v][0]==p)cnt[v]=1;
    else
	for(auto u:g[v]){
		if(u!=p){
            dfs(u,v);			
			cnt[v]+=cnt[u];
		}
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){   
        int n;cin>>n;
        g.assign(n,vi());
        cnt.assign(n,0);
        n--;
        while(n--){
        	int u,v;
        	cin>>u>>v;
        	--u,--v;
        	g[u].pb(v);
        	g[v].pb(u);
        }
        dfs(0,-1);
        int q;cin>>q;
        while(q--){
        	int x,y;cin>>x>>y;
        	--x,--y;
            ll res = cnt[x]*cnt[y];
        	cout<<res<<nline;
        }
    }
}