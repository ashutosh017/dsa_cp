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
    	ll n,k; cin>>n>>k;
    	vi v(n); rep(i,n)cin>>v[i];
    	int l=0,r=n-1,cnt=0;
        while(l<r && k){
            ll m = min(v[l],v[r]);
            if(k>=(2*m)){
                v[l]-=m;
                v[r]-=m;
                k-=(2*m);
            }else{
                if(k%2){
                    v[l]-=(k/2+1);
                }else{
                    v[l]-=(k/2);
                }
                v[r]-=(k/2);
                k=0;
            }
            if(v[l]==0)l++,cnt++;;
            if(v[r]==0)r--,cnt++;
           
        }
         if(l==r){
                if(v[l]<=k)cnt++;
            }
        cout<<cnt<<nline;
    }    
}