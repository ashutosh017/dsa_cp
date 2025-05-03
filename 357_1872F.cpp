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

int t,n,a[200005],c[200005],v[200005];
long long s[200005];
priority_queue<pair<long long,int>> q;
void solve(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		v[i]=s[i]=0;
	}
	for(int i=1;i<=n;i++){
		cin>>c[i];
		s[a[i]]+=c[i];
	}
	for(int i=1;i<=n;i++)
		q.push({-s[i],i}); // storing values in decreasing order
	while(q.size()){
		
		int u=q.top().second;
		// ll w = q.top().fi; 
		// cout<<w<<' '<<u<<nline;
		q.pop();
		if(v[u]) continue;
		v[u]=1;
		cout<<u<< " ";
		s[a[u]]-=c[u];
		q.push({-s[a[u]],a[u]});
	}
	cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	solve();
    }    
}