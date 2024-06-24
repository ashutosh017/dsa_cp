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

ll score(vector<int> p, vector<int> a, int x, int k){
	int n = p.size();
	ll mx =0, cur=0;
	vector<bool> vis(n,0);
	while(!vis[x] && k>0){
		vis[x] = true;
		mx = max(mx, cur+1ll*k*a[x]);
		cur+=a[x];
		x = p[x]-1;
		k--;
	}
	return mx;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n,k,pb,ps; cin>>n>>k>>pb>>ps;
    	vi p(n), a(n); 
    	rep(i,n)cin>>p[i];
    	rep(i,n)cin>>a[i];

    	ll A = score(p,a,pb-1, k), B=score(p,a,ps-1,k);
    	// if(A>B)cout<<"Bodya\n";
    	// else if(A<B)cout<<"Sasha\n";
    	// else cout<<"Draw";
    	cout<<(A>B?"Bodya":A<B?"Sasha":"Draw")<<nline;

    }    
}

