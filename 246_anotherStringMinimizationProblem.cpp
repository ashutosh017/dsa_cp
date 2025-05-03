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
    	int n,m;cin>>n>>m;vi v(n);
        string s(m,'B');
    	rep(i,n){
            int x,y;
            cin>>x;
            y = m-x;
            x--;
            s[min(x,y)]=='B'?s[min(x,y)]='A':s[max(x,y)]='A';
    	}
    	cout<<s<<nline;
    	
    	
    }    
}