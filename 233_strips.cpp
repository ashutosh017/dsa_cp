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
int is_8RS(string s){
	int cnt=0;
	rep(i,8)if(s[i]=='R')cnt++;
	if(cnt==8)return 1;
	return 0;
	
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int f = 0;
    	rep(i,8){
    		string s;
    		cin>>s;
    		if(is_8RS(s))f=1;
    	}
    	if(f)cout<<'R'<<nline;
    	else cout<<'B'<<nline;
    }    
}