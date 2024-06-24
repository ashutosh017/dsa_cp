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

int lcm(int a, int b){
  return (1ll*a*b)/__gcd(a,b);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n; cin>>n; vi v(n+1); rep(i,n)cin>>v[i+1];
      sort(all(v));
      ll l = 1;
      bool bad = false;
      forn(i,1,n){
        l = lcm(l,v[i]);
        if(l>v[n]){
          bad = true;
          break;
        }
      }
      if(bad)cout<<n<<nline;
      else{
        map<ll, int> dp;
        dp[1] = 0;
        forn(i,1,n){
          map<ll, int> dp2;
          for(auto [x,y]:dp){
            dp2[x] = y;
            dp2[lcm(x,v[i])] = max(dp2[lcm(x,v[i])],y+1);
          }
          dp = dp2;
        }
        forn(i,1,n){
          dp[v[i]] = 0;
        }
        int ans =0;
        for(auto [x,y]: dp){
          ans = max(ans, y);
        }
        cout<<ans<<nline;
      }
    }
}