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
    	vi v(n);rep(i,n)cin>>v[i];
	    sort(all(v));
	    if(v[0]==v[n-1])cout<<-1<<nline;
	    else{
	    	int cnt = 0;
	    	int i = 0;
	    	rep(i,n){
	    		if(v[i]==v[n-1])break;
	    		cnt++;
	    	}
	    	cout<<cnt<<' '<<n-cnt<<nline;
	    	rep(i,cnt)cout<<v[i]<<' ';
	    	cout<<nline;
	    	forn(i,cnt,n-1)cout<<v[i]<<' ';
	    	cout<<nline;
	    }
    }    
}