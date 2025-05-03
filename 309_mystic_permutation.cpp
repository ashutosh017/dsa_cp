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
    	vi v(n+1); forn(i,1,n)cin>>v[i];
    	int remaining = 0;
    	// vb vis(n+1,0);
        vi v2(n+1);
    	forn(i,1,n){
    		v2[i] = i;            
    	}
        forn(i,1,n-1){
            if(v[i]==v2[i]){
                swap(v2[i],v2[i+1]);
            }
        }
        if(v[n]==v2[n])swap(v2[n],v2[n-1]);
        if(n==1)cout<<-1;
        else
        forn(i,1,n)cout<<v2[i]<<' ';
        cout<<nline;
    	
    	
    }    
}