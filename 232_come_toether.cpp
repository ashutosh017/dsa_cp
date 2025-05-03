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
    	ll xa,ya,xb,yb,xc,yc;cin>>xa>>ya>>xb>>yb>>xc>>yc;
    	ll ans=1;
    	if((xa>=xb&&xa>=xc)||(xa<=xb&&xa<=xb))ans+=abs(xa-min(xb,xc));
    	if((ya>=yb&&ya>=yc)||(ya<=yb&&ya<=yb))ans+=abs(ya-min(yb,yc));
    	cout<<ans<<nline;
    	
    }    
}