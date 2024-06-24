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
    	int n; cin>>n; vi v(n); rep(i,n)cin>>v[i];
    	int ans=INT_MIN;
        if(n==2)ans=min(v[0],v[1]);
    	rep(i,n-2){
    		// ans=max(ans,min(v[i],v[i+1]));
            vector<int> temp = {v[i],v[i+1],v[i+2]};
            sort(all(temp));
            ans=max(ans,temp[1]);
    	}
    	cout<<ans<<nline;
    }    
}














