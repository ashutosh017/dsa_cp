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
    // vll dp(34);
    // ll pw = 1;

    // rep(i,34){
    //     dp[i] = pw;
    //     pw*=2;
    // }
    int t;cin>>t;while(t--){
        // int n,k;cin>>n>>k;
        // int x = 0;
        // rep(i,34){
        //     if(n<dp[i]){break;}
        //     x =i;
        // }
        // x++;
        // x = min(x,k);
        // int ans = 1;
        // ans+=(x*(x+1))/2;
        // if(n>=dp[x-1])ans+=1;
        // cout<<ans<<nline;
        int n, k;
        cin >> n >> k;
        k = min(k, 30);
        cout << min(n, (1 << k) - 1) + 1 << "\n";
    }    
}