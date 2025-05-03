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
    // C. Vasilije in Cacak
    int t;cin>>t;while(t--){
        ll n,k,x;cin>>n>>k>>x;
        ll Max_x = n*(n+1)/2 -((n-k)*(n-k+1))/2,
           Min_x = k*(k+1)/2;
           
           
        // cout<<Max_x<<' '<<Min_x<<nline;
        if(x<=Max_x&&x>=Min_x){
            cout<<"YES"<<nline;
        }
       else cout<<"NO"<<nline;
        
    }    
}