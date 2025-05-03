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
    	int n;cin>>n;
    	int p;
    	vi ans;
    	ans.pb(n);
    	rep(i,n){
    		if((n>>i)%2){
    			if(n==(1<<i)){
    				p = i;
    				break;
    			}
    			n-=(1<<i);
    			ans.pb(n);    			
    		}
    	}
    	while(p--){
    		n-=(1<<p);
    		ans.pb(n);
    	}
    	cout<<ans.size()<<nline;
    	for(auto i:ans)cout<<i<<' ';cout<<nline;
    	
    	
    }    
}