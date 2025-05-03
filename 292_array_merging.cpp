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
        vi a(n),b(n);
        rep(i,n)cin>>a[i];
        rep(i,n)cin>>b[i];
        vi x(2*n+2,0),y(2*n+2,0);
        int cnt = 0;
        forn(i,1,n-1){
        	if(a[i]!=a[i-1]){
        		x[a[i-1]] = max(x[a[i-1]],i-cnt);
        		cnt=i;
        	}
        }
        x[a[n-1]] = max(x[a[n-1]],n-cnt);
        cnt = 0;
        forn(i,1,n-1){
        	if(b[i]!=b[i-1]){
        		y[b[i-1]] = max(y[b[i-1]],i-cnt);
        		cnt=i;
        	}
        }
        y[b[n-1]] = max(y[b[n-1]],n-cnt);
        int ans = 0;
        forn(i,1,2*n){
            // cout<<x[i]<<' '<<y[i]<<nline;
            ans = max(ans,x[i]+y[i]);
        }
        cout<<ans<<nline;
    }    
}