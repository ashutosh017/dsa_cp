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
int abs(int n){
    if(n<0)return -1*n;
    return n;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int a[5];
    	rep(i,5)cin>>a[i];
    	a[2] = a[0]-a[1]+1;
    	int ans = INT_MAX;
    	forn(i,3,4){
    		ans = min(ans,abs(a[1]-a[i]));
    		ans = min(ans,abs(a[2]-a[i]));    		
    	}
    	cout<<ans<<nline;
    }    
}

// 121701141

// 123456789  876543212
// 874787564  121701141
// 376543215  376543208

