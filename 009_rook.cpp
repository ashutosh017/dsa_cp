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
    	string s;cin>>s;
    	for(char i = 'a';i<='h';i++){
    		if(i!=s[0]){
    			cout<<i<<s[1]<<nline;
    		}
    	}
    	forn(i,1,8){
    		if(s[1]-'0'!=i){
    			cout<<s[0]<<i<<nline;
    		}
    	}
    }    
}