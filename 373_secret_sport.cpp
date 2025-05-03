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
void solve(){
    int n; cin>>n;
    string s;cin>>s;
    cout<<s.back()<<nline;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	solve();
    }    
}

// AAAAAAAABBBAABBBBBAB
// A = 11, B = 9

// For X = 2, Y = 5 - A will be winner
// AA AA AA AA BB BAA BB BB BAB

// For X = 3, Y = 3 - B will be winner 
// AAA AAA AABBB AABBB BBAB

