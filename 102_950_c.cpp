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
    	int n;cin>>n;
    	vi a(n),b(n);
    	rep(i,n)cin>>a[i];
    	rep(i,n)cin>>b[i];
    	int m;cin>>m;
    	vi d(m);
    	rep(i,m)cin>>d[i];

    	map<int, int> m1,m2;
    	rep(i,n)if(a[i]!=b[i])m1[b[i]]++;
    	rep(i,m)m2[d[i]]++;

    	int f=0;
    	// rep(i,n)if(m1[b[i]]>m2[b[i]]){f=1;break;}
        for(auto i:m1)cout<<i.fi<<' '<<i.se<<nline;
            cout<<"***************"<<nline;
        for(auto i:m2)cout<<i.fi<<' '<<i.se<<nline;

        for(auto i:m1)if(i.se>m2[i.fi]){f=1;
            cout<<"I am breaking at: "<<i.fi<<' '<<i.se<<nline;
            break;}
    	if(f)cout<<"no"<<nline;
    	else cout<<"yes"<<nline;
    }    
}