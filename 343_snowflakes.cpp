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
    set<ll> dp;
    forn(i,2,1e3){
        ll val = 1+i;
        ll p = i*i;
        forn(j,2,20){
            val+=p;
            if(p>1e6)break;
            dp.insert(val);  
            p*=i;          
        }
    }
    
    int t;cin>>t;while(t--){
    	int n;cin>>n;
    	if(dp.count(n))cout<<"YES"<<nline;
    	else cout<<"NO"<<nline;
    	
    }    
}