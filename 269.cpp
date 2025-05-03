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
int isSorted(vi v,int n){
    rep(i,n-1){
        if(v[i]>v[i+1]) return 0;
    }
    return 1;
}
int minOps(vi v, int n){
    int ans=INT_MAX;
    forn(i,1,n-1){
        ans = min(ans,(v[i]-v[i-1])/2+1);
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n;cin>>n;
    	vi v(n);
    	rep(i,n){
    		cin>>v[i];
    	}
    	if(isSorted(v,n))cout<<minOps(v,n)<<nline;
        else cout<<0<<nline;
        
    }    
}