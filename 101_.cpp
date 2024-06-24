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

void solve(){
	int n;cin>>n;
	int ans=0;
	for(int i=1;i<=n;i++) ans+=(2*i-1)*i;
	cout<<ans<<' '<<2*n<<endl;
	for(int i=n;i>=1;i--){
		cout<<"1 "<<i<<' ';
		for(int j=1;j<=n;j++) cout<<j<<' ';cout<<endl;
		cout<<"2 "<<i<<' ';
		for(int j=1;j<=n;j++) cout<<j<<' ';cout<<endl;
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	solve();
    }    
}

// 1000000000 1000000000 1000000000 1000000000 