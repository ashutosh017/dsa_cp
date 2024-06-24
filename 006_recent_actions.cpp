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
    	int n,m; cin>>n>>m;
    	int pos = n;
        vi v(n,-1),vis(n+m+5);
        rep(i,m){
            int x; cin>>x;
            if(!vis[x]&& pos>0){
                vis[x] = 1;
                v[pos-1] = i+1;
                pos--;
            }
        }
        rep(i,n)cout<<v[i]<<" \n"[i==n-1];

    }    
}