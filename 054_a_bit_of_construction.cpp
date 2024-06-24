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
    int t;cin>>t;while(t--){
    	int n,k; cin>>n>>k;
    	vi v(n,0);
    	
    	if(n==1)v[0]=k;
    	else{
    		int msb = 0;
    		int x = k;
    		k/=2;
    		// while(k/=2 && msb++);
            while(k!=0)k/=2,msb++;
            // cout<<(1<<msb)<<' ';
    		v[0] = (1<<msb)-1;
    		v[1] = x-v[0];
    	}
    	rep(i,n)cout<<v[i]<<' ';cout<<nline;

    }    
}