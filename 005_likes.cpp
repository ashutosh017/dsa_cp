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
    	int n; cin>>n;
    	int likes=0, dislikes = 0;
    	rep(i,n){
    		int x;
    		cin>>x;
    		if(x>0)likes++;
    		else dislikes++;
    	}
    	forn(i,1,n){
    		if(i<=likes)cout<<i<<' ';
    		else{
    			cout<<2*likes-i<<' ';
    		}
    	}
    	cout<<nline;
    	forn(i,1,n){
    		if(i<=2*dislikes)cout<<i%2<<' ';
    		else cout<<i-2*dislikes<<' ';
    	}
    	cout<<nline;


    }    
}