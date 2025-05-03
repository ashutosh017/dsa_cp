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

int n;

bool isPermutation(vll v){
	set<int> st;
	forn(i,1,n){
		st.insert(v[i]-v[i-1]);
	}
	return st.size()==n;
}


vll makePermutation(vll v){
	vll v2;
	forn(i,1,n){
		v2.pb(v[i]-v[i-1]);
	}
	return v2;
}


int sol(vll v){
	ll k = n*(n+1)/2;
	if(v[n-1]!=k){
		v[n] = k;
		v = makePermutation(v);
		if(!isPermutation(v)) return 0;
	}
	else{
		vll marked(n+1,0);
		map<ll, int> freq;	
		forn(i,1,n-1){
			freq[v[i]-v[i-1]]++;
		}
		int cnt=0;
		for(auto i:freq){
			if(i.fi>2*n)return 0;
			if(i.se>2)return 0;
			if(i.se==2)cnt++;
			if(cnt>2)return 0;			
		}
		
	}
	return 1;
	
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	cin>>n;
    	vll v(n+1,0);
    	forn(i,1,n-1){
    		cin>>v[i];
    	}
    	// cout<<sol(v)<<nline;
    	if(sol(v))cout<<"YES"<<nline;
    	else cout<<"NO"<<nline;
    	// cout<<"YES"<<nline;
    }    
}