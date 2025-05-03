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

ll n_sum(int n, vi v){
    sort(all(v),greater<int>());
    int sz = v.size();ll ans=0;
    for(int i=0;i<sz&&n;i++){
        n--;
        ans+=v[i];
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n;cin>>n;
        vi v[n+1];
    	rep(i,n){
    	    int a,b;cin>>a>>b;
    	    v[a].pb(b);
    	}
        ll ans =0;
        rep(i,n+1){
            if(v[i].size()>0)ans+=n_sum(i,v[i]);
        }
        cout<<ans<<nline;
    }    
}