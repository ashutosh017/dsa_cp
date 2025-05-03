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
    	int n,k;cin>>n>>k;
    	vi a(n),h(n);
    	rep(i,n)cin>>a[i];
    	rep(i,n)cin>>h[i];
    	int l = 0,r=0,sum=a[0],ans=a[0]<=k?1:0;
    	rep(i,n-1){
    		if(h[i]%h[i+1]==0){
    			sum+=a[i+1];
    			if(sum>k)sum-=a[l],l++;
    			r=i+1;
    		}
    		else{
                
                sum=a[i+1];
    			l=i+1,r=i+1;
    		}
            if(sum<=k)
                ans = max(ans,r-l+1);
            
    	} 
    	cout<<ans<<nline;   	
    }    
}