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

void solve(){
	string s;cin>>s;
    	int m;
    	cin>>m;
    	string l,r;
    	cin>>l>>r;
        int it = -1;
    	rep(i,m){
            int st = it;
    		for(char c = l[i]; c<=r[i];c++){
    			int temp = s.find(c,st+1);
    			if(temp==-1){
    				puts("YES");
    				return;
    			}
                it = max(it, temp);
    		}
    	}
    	puts("NO");
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	solve();
    }    
}