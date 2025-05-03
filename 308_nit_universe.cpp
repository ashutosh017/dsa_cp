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
    	int x = 0,y = 0,ans = 0;
        rep(i,n){
            x = i;
            if(v[i])break;
        }
        ford(i,n-1,0){
            y = i;
            if(v[i])break;
        }
        forn(i,x,y){
            ans = 1;
            if(v[i]==0){
                ans=2;
                break;
            }
        }
        if(x==y)ans=v[x]>0;
        cout<<ans<<nline;
    }    
}