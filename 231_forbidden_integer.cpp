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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n,k,x;cin>>n>>k>>x;
    	if(x!=1){
            cout<<"YES\n"<<n<<nline;
            forn(i,1,n)cout<<1<<' ';
            
        }
        else if(n%2 ==0 && k>=2){
            cout<<"YES"<<nline<<n/2<<nline;
            rep(i,n/2)cout<<2<<' ';            
        }
        else if(n%3==0 && k>=3){
            cout<<"YES"<<nline<<n/3<<nline;
            rep(i,n/3)cout<<3<<' '; 
        }
        else if(n%3 && k>=3){
            cout<<"YES"<<nline<<n/2<<nline;
            rep(i,n/2-1)cout<<2<<' ';
            cout<<3;
        }
        else cout<<"NO";
        cout<<nline;
    }    
}