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
        int n,k;cin>>n>>k;
        int ans = 0;
        // Seq = _ _ _ _ _ 1st, 2nd, 3rd
        forn(i,n/2,n){
            int _1st = i,_2nd, _3rd = n;
            int f = 1;
            rep(i,k-2){
                _2nd = _1st;
                _1st = _3rd - _2nd;
                _3rd = _2nd;
                if(_1st>_2nd || min(_1st, _2nd)<0){f = 0;break;}
            }
            if(f)ans++;
        }
        cout<<ans<<nline;
    }    
}