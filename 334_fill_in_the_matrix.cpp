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
    	int n,m;cin>>n>>m;
    	if(m==1)cout<<0<<nline;
    	else cout<<min(n+1,m)<<nline;
    	// if(n>=m){
        //     rep(i,n-1)rep(j,m)cout<<(i+j)%m<<" \n"[j==m-1];
    	// 	rep(i,m)cout<<i<<" \n"[i==m-1];
    	// }
        // else rep(i,n)rep(j,m)cout<<(i+j)%m<<" \n"[j==m-1];
        
        
        int s =min(n,m-1);
        rep(i,s)rep(j,m)cout<<(i+j)%m<<" \n"[j==m-1];
        // rep(i,m)cout<<i<<" \n"[i==m-1];
        // else rep(i,n)rep(j,m)cout<<(i+j)%m<<" \n"[j==m-1];
        if(n>=m){
            forn(i,m-1,n-1)rep(j,m)cout<<j<<" \n"[j==m-1];
        }
        cout<<nline;
    }    
}