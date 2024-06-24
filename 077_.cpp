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
    	vi a(n), b(n);
    	rep(i,n)cin>>a[i];
    	rep(i,n)cin>>b[i];
    	int m; cin>>m;
    	unordered_map<int, int> d; 
    	rep(i,m){
    		int x; cin>>x;
    		d[x]=1;
    	}
    	int diff=0;
    	unordered_map<int,int>diff_v;
    	rep(i,n)if(a[i]!=b[i])diff++,diff_v[b[i]]=1;
    	if(diff>m){
    		cout<<"No\n";
    		continue;
    	}
    	int f=0;
    	for(auto i: diff_v){
    		if(d[i.fi]==0){
    			cout<<"No\n";
    			f=1;
                break;
    		}
    	}
    	if(f)continue;
        // unordered_map<int, int> b_v;
        // rep(i,n)b_v[b[i]]=1,b_v[a[i]]=1;
        // for(auto i: d){
        //     if(diff_v[i.fi]==0 && b_v[i.fi]==0){
        //         cout<<"No\n";
        //         f=1;
        //     }
        // }
        // if(f)continue;
        
    	cout<<"Yes\n";

    }    
}
