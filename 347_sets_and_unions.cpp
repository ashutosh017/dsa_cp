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
        vector<set<int>> v(n);
        set<int> s;
        int ans =0;
        rep(i,n){
            int k;cin>>k;
            while(k--){
                int x;cin>>x;
                s.insert(x);
                v[i].insert(x);
            }
        }
        for(auto i:s){
            set<int> temp;
            rep(j,n){
                if(v[j].count(i)==0){
                    for(auto k:v[j])temp.insert(k);
                }
            }
            ans = max(ans, (int)temp.size());
        }
      
        cout<<ans<<nline;
    }    
}