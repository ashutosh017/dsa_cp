#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
#define ll long long
#define forn(i, a, b) for(int i=a;i<=b;i++)
#define ford(i,a,b) for(int i=a;i>=b;i--)
#define rep(i, n) forn(i, 0, n-1)
#define fi first
#define se second
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(),x.end()
#define nline '\n'

int x = 0;
int height(int root, vector<bool> vis, vector<vector<int>> v, int cnt,int &d){
    vis[root] = true;
    cnt++;
    for(auto i:v[root]){
        if(!vis[i])
            d = max(cnt,d),
            height(i,vis,v,cnt,d);    
    }
}
vi dis;
int diameter(vector<vector<int>> v,int &d){
    int n = v.size();
    vector<bool> vis(n,false);
    int cnt = 0;
    forn(i,1,n-1){
        d = 0;
        height(i,vis,v,cnt,d);
        dis.pb(d);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<vi> v(n+1);
    rep(i,n-1){
        int a,b;cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    
    int d = 0;
    diameter(v,d);
    cout<<nline;
    sort(all(dis));
    int cnt = 0;
    forn(k,1,n){
        while(cnt<n && dis[cnt]<k)cnt++;
        cout<<min(n,cnt+1)<<' ';
    }
    cout<<nline;
    
}



/*
Failed test case:

10
7 10
1 2
1 9
10 1
4 8
10 5
7 6
3 7
9 4

Output
1 1 1 1 4 10 10 10 10 10 
Answer
1 1 1 2 5 8 10 10 10 10 

*/