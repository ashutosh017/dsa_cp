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
    // int t;cin>>t;while(t--){}    
    int n;cin>>n;
    vi v(n),w(n);
    map<int, int> map1,map2;
    rep(i,n){
        cin>>v[i];
        if(!map1[v[i]])
        map1[v[i]] = i+1;
    }
    w = v;
    sort(all(v));
    for(auto i:map1)cout<<i.fi<<' '<<i.se<<nline;
    rep(i,n-1){
        map2[v[i]]= map1[v[i+1]]-map1[v[i]];
        if(map2[v[i]]<0)map2[v[i]]=0;
    }
    rep(i,n-1){
        cout<<map2[w[i]]<<' ';
    }
    cout<<0<<nline;
    // wrong
}