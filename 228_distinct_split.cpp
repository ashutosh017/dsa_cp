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
    	int n;string s;cin>>n>>s;
    	set<char> st;
    	int ans=0,sz=0,f=1;
    	rep(i,n){
    		sz = st.size();
    		st.insert(s[i]);
    		if(st.size()==sz&&f)ans = st.size(),st.clear(),f=0,i--;
    	}
    	ans+=st.size();
    	cout<<ans<<nline;
    	
    }    
}