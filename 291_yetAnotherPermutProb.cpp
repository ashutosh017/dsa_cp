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
        vi p(1e5+5,0);
    	int n;cin>>n;
    	forn(i,1,n){
    		int x = i;
    		if(!p[x]){
    			while(x<=n){
    				cout<<x<<' ';
    				p[x] = 1;
    				x*=2;
    			}
    		}
    	}
    	forn(i,1,n){
    		if(!p[i])cout<<i<<' ';
    	}
    	cout<<nline;
    }    
}