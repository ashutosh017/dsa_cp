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
    	int k;cin>>k;
    	int ind=-1;
    	int Min = INT_MAX;
    	rep(i,n)if(v[i]<Min)Min=v[i],ind=i;
    	int j = 0;
    	if(k%v[ind]){
    		forn(i,ind+1,n-1){
    			if(v[i]>v[ind]&&v[i]<2*v[ind])j=i;
    		}
    	}
    	if(j){
    		forn(i,0,ind)cout<<k/v[ind]<<' ';
    		forn(i,ind+1,j)cout<<1<<' ';
    		forn(i,ind+1+j,n-1)cout<<0<<' ';
    		
    	}
    	else{
    		forn(i,0,ind)cout<<k/v[ind]<<' ';
    		forn(i,ind+1,n-1)cout<<0<<' ';
    	}
    	cout<<nline;
    	
    }    
}