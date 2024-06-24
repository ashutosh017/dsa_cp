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

ll lcm(int x, int y){
	return 1ll*(x*y)/__gcd(x,y);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n; cin>>n; vi v(n); rep(i,n)cin>>v[i];
    	ll z = 1,tot_bet=0;
    	rep(i,n){
    		z = lcm(z,v[i]);
    	}
        rep(i,n){
            tot_bet+=z/v[i];
        }
    	if(tot_bet<z)rep(i,n)cout<<z/v[i]<<" \n"[i==n-1];
    	else cout<<-1<<nline;

    }    
}