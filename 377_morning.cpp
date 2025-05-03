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
    	string s; cin>>s;
    	int n = s.size();
    	vi v(10);
    	v[0] = 10;
    	forn(i,1,9)v[i] = i;
    	int ans = n+ v[s[0]-'0'];
    	rep(i,n-1){
    		ans+=abs(v[(s[i+1]-'0')]-v[(s[i]-'0')]);
    	}
    	cout<<ans-1<<nline;
    }    
}