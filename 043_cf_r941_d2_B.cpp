#include <bits/stdc++.h>
using namespace std;

// Values
#define ll long long
#define nline '\n'
#define mod 1000000007

// Loops
#define forn(i, a, b) for(ll i=a;i<=b;i++)
#define ford(i,a,b) for(ll i=a;i>=b;i--)
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
        // Taking inputs
    	int n, m; cin>>n>>m;
    	vector<vector<char>> v(n, vector<char>(m));
    	rep(i,n)rep(j,m)cin>>v[i][j];

        // Declaration
    	bool ans = true;
    	bool fc=true, fr=true, lc=true, lr=true;

        // Computation
    	forn(i,0,n-2)if(v[i][0]!=v[i+1][0])fc = false; // first col
    	forn(i,0,m-2)if(v[0][i]!=v[0][i+1])fr = false; // first row
    	forn(i,0,n-2)if(v[i][m-1]!=v[i+1][m-1])lc = false; // last col
    	forn(i,0,m-2)if(v[n-1][i]!=v[n-1][i+1])lr = false; // last row

        // Checking
    	if((fc && lc) && (v[0][0]!=v[0][m-1])) ans = false;
    	if((fr && lr) && (v[0][0]!=v[n-1][0])) ans = false;

        // Printing the answer
    	if(ans)cout<<"YES"<<nline;
    	else cout<<"NO"<<nline;
        
    }    
}