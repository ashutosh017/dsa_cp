#include <bits/stdc++.h>
using namespace std;

// Values
#define ll long long
#define nline '\n'
#define mod 1000000007

// Loops
#define forn(i, a, b) for(int i=a;i<=b;i++)
#define ford(i,a,b) for(int i=a;i>=b;i--)
#define forc(i,a,b) for(char i=a;i<=b;i++)
#define rep(i, n) forn(i, 0, n-1)

// Containers
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vb vector<bool>
#define pii pair<int, int>
#define pll pair<ll, ll>

// Methods
#define fi first
#define se second
#define pb push_back
#define ppb pop_back
#define ppf pop_front
#define all(x) x.begin(),x.end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
        int n,m;cin>>n>>m;
        vvi v(n,vi(m));
        rep(i,n)rep(j,m)cin>>v[i][j];

        rep(i,n)rep(j,m){
            int w,a,s,d;
            w=a=s=d=INT_MIN;
            if(j>0){
                a=v[i][j-1];
            }
            if(i>0){
                w=v[i-1][j];
            }
            if(j<m-1){
                d=v[i][j+1];
            }
            if(i<n-1){
                s=v[i+1][j];
            }
            if(v[i][j]>w && v[i][j]>a && v[i][j]>s && v[i][j]>d)
            v[i][j]=max(max(w,a),max(s,d));
        }
        rep(i,n)rep(j,m)cout<<v[i][j]<<" \n"[j==m-1];
    }    
}