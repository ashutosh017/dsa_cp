#include <bits/stdc++.h>
using namespace std;

// Values
#define ll long long
#define nline '\n'
#define mod 1000000007

// Loops
#define forn(i, a, b) for(ll i=a;i<=b;i++)
#define ford(i,a,b) for(ll i=a;i>=b;i--)
#define forc(i,a,b) for(char i=a;i<=b;i++)
#define rep(i, n) forn(i, 0, n-1)

// Containers
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vb vector<bool>
#define pii pair<int, int>
#define pll pair<ll, ll>

// Methods
#define fi first
#define se second
#define pb push_back
#define ppb pop_back
#define ppf pop_front
#define all(x) x.begin(),x.end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n; cin>>n;
    	vi a(n), b(n+1);
    	rep(i,n)cin>>a[i];
    	rep(i,n+1)cin>>b[i];
    	int lb = b[n],x, f=0,temp=INT_MAX;
        ll ans=0;
    	rep(i,n){
    		ans+=(abs(a[i]-b[i]));
    		if(lb<=max(a[i],b[i]) && lb>=min(a[i],b[i]))f=1;
    		if(abs(lb-a[i])<=temp)x=a[i],temp=abs(lb-a[i]);
            if(abs(lb-b[i])<=temp)x=b[i],temp=abs(lb-b[i]);

    	}
        // cout<<temp<<nline;
    	if(f)ans+=f;
    	else ans+=abs(x-lb),ans++;
    	cout<<ans<<nline;
    }    
}