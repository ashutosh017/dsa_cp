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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	int n, q; cin>>n>>q; 
  	vll v(n+1); rep(i,n)cin>>v[i];
  	rep(i,n-1)v[i+1]+=v[i];
    // rep(i,n)cout<<v[i]<<" \n"[i==n-1];
    v.pb(0);
    // cout<<v[n]<<nline;
  	while(q--){
  		int a,b; cin>>a>>b;
        a--,b--;
        // cout<<a;
  		a=a?--a:n;
        // cout<<a;
  		cout<<v[b]-v[a]<<nline;
  	}
}