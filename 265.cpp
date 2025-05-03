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
    int n,m;cin>>n>>m;   
    vi v(n);rep(i,n)cin>>v[i];
    vll v2(n,0),v3(n,0);
    forn(i,1,n-1){
    	if(v[i]<v[i-1])v2[i]=v[i-1]-v[i];
    	if(v[i]>v[i-1])v3[i]=v[i]-v[i-1];
    	v2[i]+=v2[i-1];    	
    	v3[i]+=v3[i-1];
    }
    rep(i,m){
    	int a,b;
    	cin>>a>>b;
    	if(a<=b){
    		cout<<v2[b-1]-v2[a-1]<<nline;    		
    	}
    	else cout<<v3[a-1]-v3[b-1]<<nline;
    }
}