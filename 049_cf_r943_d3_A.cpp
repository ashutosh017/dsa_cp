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


ll maximize(ll x){
	ll ans = INT_MIN,r=1;
	forn(i,1,x-1){
		if((__gcd(x,i)+i)>ans){
			ans = (__gcd(x,i)+i);
			r = i;
		}
	}
	return r;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    	// cout<<__gcd(100,98)+98<<' '<<__gcd(100,50)+50<<nline;
    
    int t;cin>>t;while(t--){
    	ll x; cin>>x;
    	cout<<maximize(x)<<nline;
    }    
}