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
    	int r,c;
    	cin>>r>>c;
    	cout<<"? "<<1<<' '<<1<<endl;
    	int x;cin>>x;
    	cout<<"? "<<min(x+1,r)<<' '<<1<<endl;
    	int y;cin>>y;
    	cout<<"? "<<1<<' '<<min(x+1,c)<<endl;
    	int z;cin>>z;
    	if(y<=z)
    		cout<<"! "<<1+x<<' '<<1+y<<endl;
    	else
    		cout<<"! "<<1+z<<' '<<1+x<<endl;
    }    
}