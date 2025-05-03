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
#define mod 998244353

vi x(2e6,0),y(2e6,0);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vi a(n),b(n);
    rep(i,n)cin>>a[i];
    rep(i,n)cin>>b[i];
    rep(i,n)x[a[i]]=b[i];
    cin>>n;
    vi c(n),d(n);
    rep(i,n)cin>>c[i];
    rep(i,n)cin>>d[i];
    rep(i,n)y[c[i]]=d[i];
    ll ans = 1;
    forn(i,1,2e6){
        if(x[i]>y[i])ans=2*ans%mod;
        if(x[i]<y[i]){
            cout<<0<<nline;
            return 0;
        }
    }
    cout<<ans<<nline;
    
}