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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n;cin>>n;
    	vi v(n+1);forn(i,1,n)cin>>v[i];
    	int idx1,idx2,idxn;
    	forn(i,1,n){
    		if(v[i]==1)idx1=i;
    		if(v[i]==2)idx2=i;
    		if(v[i]==n)idxn=i;
    	}
    	if(idxn<idx1 && idxn<idx2)cout<<idxn<<' '<<min(idx1,idx2);
    	else if(idxn>idx1 && idxn>idx2)cout<<idxn<<' '<<max(idx1,idx2);
    	else cout<<idx1<<' '<<idx2;
    	cout<<nline;
    	
    }    
}