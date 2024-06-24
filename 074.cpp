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
    	vector<pii> good, bad;
    	int wi = find(all(v),n)-v.begin();
        wi%=2;
    	for(int i = wi; i<n; i+=2){
    		good.pb({v[i],i});
    	}
    	for(int i = wi^1; i<n; i+=2){
    		bad.pb({v[i],i});
    	}
    	sort(all(good));
    	sort(all(bad));
    	reverse(all(good));
    	reverse(all(bad));
    	int cv=1;
    	vi ans(n);
        
        for(auto i:bad){
            ans[i.se]=cv++;
        }
        for(auto i:good){
            ans[i.se] = cv++;
        }
    	

    	rep(i,n)cout<<ans[i]<<" \n"[i==n-1];
    	

    }    
}

/*

flksfjkldjlk

*/
// 4 2 3 1
// 1 3 2 4
// 1 4 3 5 2 6
// 4 8 3 6 2 5 1 7