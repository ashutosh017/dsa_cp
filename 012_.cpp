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
    	string s;
    	int n; cin>>n>>s;
    	int x=INT_MAX,y=INT_MIN;
    	rep(i,n){
    		if(s[i]=='A'){
    			x=i;
    			break;
    		}
    	}
    	ford(i,n-1,0){
    		if(s[i]=='B'){
    			y=i;
    			break;
    		}
    	}
    	cout<<(x<y?y-x:0)<<nline;
    }    
}