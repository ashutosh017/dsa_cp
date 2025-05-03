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
    	vi v(n+1); rep(i,n)cin>>v[i+1];
    	vi maxPrefSum(n+1);
    	int sum = 0;
    	forn(i,1,n){
    		sum+=v[i];
    		maxPrefSum[i] = max(maxPrefSum[i], sum);
            // cout<<maxPrefSum[i]<<" \n"[i==n-1];
    	}
    	int l =0,r=1,ans=0;
    	forn(i,1,n-1){
    		if(v[i]%2!=v[i+1]%2){
    			r=i+1;
    		}
    		else{
                // cout<<l<<' '<<r<<nline;
    			l = i+1;
    			r = l;
    		}
    		ans = max(ans,maxPrefSum[r]-maxPrefSum[l]);
    	}
        // cout<<l<<' '<<r<<nline;
        ans = max(ans,maxPrefSum[r]-maxPrefSum[l]);
    	cout<<ans<<nline;
        // cout<<t<<"-> "<<ans<<nline<<nline;
    }    
}
