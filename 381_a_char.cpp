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
    	int n,k; cin>>n>>k;
    	int f = -1;
    	rep(i,n+1){
    		if(i*(i-1)/2 + (n-i)*(n-i-1)/2 == k){
    			f=i;
    			break;
    		}
    	}
    	if(f!=-1){
    		cout<<"YES\n";
    		forn(i,1,f)cout<<1<<' ';
    		forn(i,f+1,n)cout<<-1<<' ';
    		cout<<nline;    		
    	}
    	else cout<<"NO\n";
    }    
}