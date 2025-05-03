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
    	int n,k;cin>>n>>k;
    	vi a(n),b(n);rep(i,n)cin>>a[i],a[i]+=i;
    	rep(i,n)cin>>b[i];
    	int ans = -1;
        int ev = -1;
    	rep(i,n)if(a[i]<=k&&b[i]>=ev)ans=i+1,ev=b[i];
    	cout<<ans<<nline;
        // rep(i,n)cout<<a[i]<<" ";cout<<nline;
    }    
}