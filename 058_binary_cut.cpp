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

        // problem A
        // int a,b; cin>>a>>b;
        // cout<<min(a,b)<<' '<<max(a,b)<<nline;

        // problem B
    	string s; cin>>s;
    	int cnt=1,cnt2=0;
    	int n = s.size();
    	rep(i,n-1){
            if(s[i]>s[i+1])cnt++;
            if(s[i]=='0' && s[i+1]=='1')cnt2++;
        }
        cnt2=max(0,cnt2-1);
    	cout<<cnt+cnt2<<nline;
    }    
}