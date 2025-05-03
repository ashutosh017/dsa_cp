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
    	vi v(2*n+1,0);
    	rep(i, 2*n)cin>>v[i+1];
        sort(all(v));
        n*=2;
    	int sum1=0,sum2=0;
    	forn(i,1,n/2-1)sum1+=abs(v[i]-v[i+1]);
        forn(i,n/2+1,n-1)sum2+=abs(v[i]-v[i+1]);
        cout<<sum1+sum2<<nline;
        forn(i,1,n/2)cout<<v[i]<<' '<<v[i+n/2]<<nline;
    }    
}