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
    	map<int, int> v;
        rep(i,n){
            int x;cin>>x;
            v[x]++;
        }
        int f = 0;
        // int cnt = INT_MAX;
        int cnt = 0;
        for(auto i:v){
            // cnt = min(cnt,(int)i.se);
            cnt = max(cnt,(int)i.se);
        }
        // if(cnt==n/2 || cnt==n){
        if((cnt==(n+1)/2 || cnt==n) && v.size()<=2){
            f=1;
        }
        if(f)cout<<"YES\n"; else cout<<"NO\n";
        
        
    }    
}