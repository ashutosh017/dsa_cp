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
    int n;cin>>n;
    vi a(n);
    rep(i,n)cin>>a[i];
    map<int,int> b;
    int cnt = 1;
    rep(i,n-1){
    	if(a[i]!=a[i+1]){
    		b[a[i]] = max(b[a[i]],cnt);
            cnt = 0;
    	}cnt++;
    }
    b[a[n-1]] = max(b[a[n-1]],cnt);
    for(auto i:b)cout<<i.fi<<" -> "<<i.se<<nline;
    cout<<nline;   
}