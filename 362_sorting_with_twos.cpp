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


bool isOfPowTwo(int n){
	if(n==1) return true;
	if(n%2) return false;
	return isOfPowTwo(n/2);
	
	// if (n == 0)
    //     return false;
 
    // return (ceil(log2(n)) == floor(log2(n)));
	
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // forn(i,1,20)cout<<i<<" "<<isOfPowTwo(i)<<nline;
    int t;cin>>t;while(t--){
    	int n;cin>>n;
    	vi v(n+1); rep(i,n)cin>>v[i+1];
    	// 1 2 4 8 16
    	int f = 1;
    	forn(i,1,n-1){
    		if(v[i]>v[i+1]){
    			if(!isOfPowTwo(i)){
    				f=0;
    				break;
    			}
    		}
    	}
    	if(f)cout<<"YES\n";
    	else cout<<"NO\n";
    }    
}