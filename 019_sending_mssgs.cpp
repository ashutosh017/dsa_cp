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
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	ll n,f,a,b;
    	cin>>n>>f>>a>>b;
    	vll v(n);
    	rep(i,n)cin>>v[i];
    	ll time=min((v[0])*a,b);
    	forn(i,1,n-1){
    		time += min((v[i]-v[i-1])*a,b);
    	}
        // cout<<time;
    	if(time<f)cout<<"YES\n";
    	else cout<<"NO\n";
    }    
}

