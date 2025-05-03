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
#define int long long

const int N = 2e5+5;
vector<pii> adj[N];
vi vis(N,0);
int f = 1;
vi val(N,0);

void dfs(int a){
    //cout<<a<<" ";
    if(f==0){
        return;
    }
    vis[a] = true;
    for(auto i:adj[a]){
        if(f==0) return;
        int b = i.fi, d = i.se;
        if(!vis[b]){
            val[b] = val[a]+d;
            dfs(b);
        }
        else val[a]+d!=val[b]?f=0:f=1;
    }
}
signed main(){
    //cout<<"a0";
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
        int n,m; cin>>n>>m;
        rep(i,n)adj[i].clear();
        vis.clear(),val.clear();
        vis.resize(n,0),val.resize(n,0);
        f = 1;
        rep(i,m){
            int a,b,d;cin>>a>>b>>d;
            a--;
            b--;
            adj[b].pb({a,-d});
            adj[a].pb({b,d});

        }
        //cout<<"A";
        forn(i,0,n-1){
            if(!vis[i])dfs(i);
            //cout<<endl;
            
        }
        if(f)cout<<"YES"<<nline;
        else cout<<"NO"<<nline;
    }
        
}