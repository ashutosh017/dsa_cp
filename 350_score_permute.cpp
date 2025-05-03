#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, a, b) for(int i=a;i<=b;i++)
#define ford(i,a,b) for(int i=a;i>=b;i--)
#define rep(i, n) forn(i, 0, n-1)
#define fi first
#define se second
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(),x.end()
#define nline '\n'
#define mod 1000000007

// #include <numeric>
ll lcm(ll x,ll y){
	return x*y/__gcd(x,y);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	ll n,x,y;cin>>n>>x>>y;
        ll common = n/lcm(x,y);
        ll s1 = n*(n+1)/2 - (n-n/x+common)*(n-n/x+common+1)/2;
        ll s2 = (n/y-common)*(n/y-common+1)/2;
        cout<<s1-s2<<nline;
    }    
}