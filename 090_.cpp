#include <bits/stdc++.h>
using namespace std;

// Values
#define ll long long
#define nline '\n'
#define mod 1000000007

// Loops
#define forn(i, a, b) for(ll i=a;i<=b;i++)
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
    	ll a,b,r; cin>>a>>b>>r;
        if(a>b)swap(a,b);
        ll x =0;
        int f=1;
        ford(i,63,0){
            if((a&(1ll<<i)) != (b&(1ll<<i))){
                if(f)f=0;
                else if(!(a&(1ll<<i)) && x+(1ll<<i)<=r){
                    a^=(1ll<<i);
                    x+=(1ll<<i);
                    b^=(1ll<<i);
                }
            }
            
        }
        cout<<abs(a-b)<<nline;
    }    
}