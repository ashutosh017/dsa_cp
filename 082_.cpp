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
    	ll n,x,y; 
    	cin>>n>>x>>y;
    	ll red,blue,purple;
    	purple = n/lcm(x,y);
    	red = n/x - purple;
        blue = n/y - purple;

        ll tot_sum = n*(n+1)/2;

        ll sum_x = tot_sum - (n-red)*(n-red+1)/2;
        ll sum_y = blue*(blue+1)/2;
        cout<<sum_x-sum_y<<nline;
    }    
}