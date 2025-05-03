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
    vi sumArr(1001,0);
    rep(i,1001);
    
    int t;cin>>t;while(t--){
    	int x,y,n;
    	cin>>x>>y>>n;
    	n--;
    	int sum = n*(n+1)/2;
    	if(y-x<sum)cout<<-1<<nline;
    	else{
            int c = 0,d=0;
            vi v;
            while(c!=sum){
                v.pb(y-c);
                d++;
                c=d*(d+1)/2;
            }
            v.pb(x);
    		ford(i,n,0)cout<<v[i]<<' ';cout<<nline;
    		
    	}
    }    
}