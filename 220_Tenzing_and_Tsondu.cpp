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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n,m;cin>>n>>m;
    	ll a =0,b=0;
    	rep(i,n){
    		ll x;cin>>x;
    		a+=x;
    	}
    	rep(i,m){
    		ll x;cin>>x;
    		b+=x;
    	}
    	if(a>b)cout<<"Tsondu"<<nline;
    	else if(b>a)cout<<"Tenzing"<<nline;
    	else cout<<"Draw"<<nline;
    	
    }    
}