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
    	vi v(n); rep(i,n)cin>>v[i];
    	sort(all(v));
    	int MIN = INT_MAX, pos = -1;
    	if(n==2)cout<<v[0]<<' '<<v[1]<<nline;
    	else{
    		forn(i,1,n-1)if(MIN>abs(v[i]-v[i-1]))MIN = abs(v[i]-v[i-1]),pos=i;
    		forn(i,pos,n-1)cout<<v[i]<<' ';
    		forn(i,0,pos-1)cout<<v[i]<<' ';cout<<nline;
    	}
    
    	
    }    
}