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

void n_permuts(vi v, vi ds, vi map){
    int n  = v.size();
    if(ds.size()==map.size()){
        for(auto i:ds)cout<<i<<' ';
            cout<<nline;
    }
    rep(i,n){
        if(!map[i]){
            map[i] = true;
            ds.pb(v[i]);
            n_permuts(v,ds,map); 
            ds.pop_back();           
            map[i] = false;
        }
    }    
    
}

void n_permuts2(int idx, vi v){
    int n  = v.size();
    if(idx==n){
        rep(i,n)cout<<v[i]<<' ';cout<<nline;
    }
    forn(i,idx,n-1){
        swap(v[idx],v[i]);
        n_permuts2(idx+1,v);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;    
    cin>>n;
    vi v(n);rep(i,n)cin>>v[i];
    vi ds;
    vi map(n,0);
    n_permuts(v,ds,map);
    cout<<"\n";
    n_permuts2(0,v);
    
    
    
}


