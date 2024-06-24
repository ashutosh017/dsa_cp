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

ll pow(int y){
    ll x=1;
    rep(i,y)(x*=2)%=mod;
    return x;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n,k; cin>>n>>k; vi v(n); rep(i,n)cin>>v[i];
    	ll max_sum=0, tot_sum=0, temp_sum=0;
        rep(i,n){
            tot_sum+=v[i];
            temp_sum+=v[i];
            if(temp_sum<0)temp_sum=0;
            if(temp_sum>max_sum)max_sum=temp_sum;
        }

        tot_sum = (tot_sum%mod + mod)%mod;
        max_sum = max_sum%mod;

        ll ans = (tot_sum + max_sum*pow(k) - max_sum + mod)%mod;

        cout<<ans<<nline;


    }    
}

// 1000000000 