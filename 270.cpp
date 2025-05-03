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
    int n,q;cin>>n>>q;    
    vi v(n+1,0);
    forn(i,1,n)cin>>v[i];
    vi x(n+1,0);
    forn(i,3,n){
    	if(v[i-2]>=v[i-1]&& v[i-1]>=v[i]){
    		x[i]++;
    	}
    	x[i]+=x[i-1];
    }
    while(q--){
        int a,b;cin>>a>>b;
        if(b-a<=1)cout<<b-a+1<<nline;
        else
         cout<<b-a+1-(x[b]-x[a+1])<<nline;
    }
    
}