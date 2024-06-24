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
    string fb;
    int cur = 1;
    while(fb.size() < 100)
    {
        if(cur % 3 == 0) fb += "F";
        if(cur % 5 == 0) fb += "B";
        cur++;
    }    
    // cout<<fb<<nline;
    int t;cin>>t;while(t--){
    	int n; string s; cin>>n>>s;
    	cout<<(fb.find(s)!=string::npos?"YES\n":"NO\n");
    }    
}