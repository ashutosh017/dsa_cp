#include <bits/stdc++.h>
using namespace std;

// Values
#define ll long long
#define nline '\n'
#define mod 1000000007

// Loops
#define forn(i, a, b) for(int i=a;i<=b;i++)
#define ford(i,a,b) for(int i=a;i>=b;i--)
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
    int t;cin>>t;while(t--){
    	int n;cin>>n;
    	vll v(n); rep(i,n)cin>>v[i];
    	ll ans =1;
        ll _ = 1;
    	forn(i,2,57){
    		set<ll> s;
            _*=2;
    		rep(j,n){
    			ll x = v[j]%_;
    			s.insert(x);
    			if(s.size()==3)break;
    		}
    		if(s.size()==2){
    			ans = _;
    			break;
    		}
    	}
    	cout<<ans<<nline;
    }    
}

// 524288

// 562949953421312
