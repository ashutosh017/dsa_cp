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
    	ll a,b,c,d;cin>>a>>b>>c>>d;
        ll x = a*d,y = b*c;
    	if((a*d)==(b*c)){
            cout<<0<<nline;
        }
        else if((y!=0&&x%y==0)||(x!=0&&y%x==0)){
            cout<<1<<nline;
        }
        else cout<<2<<nline;
    }    
}