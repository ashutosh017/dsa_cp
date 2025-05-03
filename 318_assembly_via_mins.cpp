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
    	int n,m;
    	cin>>n;
    	m = n*(n-1)/2;
    	
    	vi b(m);
    	// map<int, int> mp;
    	// rep(i,m){
    	// 	int x;cin>>x;
    	// 	b[i] = x;
    	// 	mp[x]++;
    	// }
    	// int x;
    	// for(auto i:mp){
    	// 	if(i.se<n){
    	// 		a[n-i.se] = min(a[n-i.se],i.fi);
    	// 	}
    	// 	else x =i.fi;
    	// }
    	// a[n]= a[n-1];
    	// forn(i,1,n){
    	// 	if(a[i]==INT_MAX){
    	// 		a[i] = x;
    	// 	}
    	// 	cout<<a[i]<<' ';
    	// }
        
        rep(i,m)cin>>b[i];
        sort(all(b));
        for(int i = 0;i<m;i+=--n)cout<<b[i]<<' ';
        
    	cout<<b[m-1]<<nline;
    }    
}