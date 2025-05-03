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
    int tt;cin>>tt;while(tt--){
    	int n,m;cin>>n>>m;
    	string s, t; cin>>s>>t;
    	int zz=0,oo=0,zz2= 0, oo2 = 0, z=0,o=0;
        rep(i,n-1){
            if(s[i]=='0'&&s[i+1]=='0'){
                zz = 1;
                break;
            }
        }
        rep(i,n-1){
            if(s[i]=='1'&&s[i+1]=='1'){
                oo = 1;
                break;
            }
        }
        rep(i,m-1){
            if(t[i]=='0'&&t[i+1]=='0'){
                zz2 = 1;
                break;
            }
        }
        rep(i,m-1){
            if(t[i]=='1'&&t[i+1]=='1'){
                oo2 = 1;
                break;
            }
        }
        int possible=0,f=0;        
    	if(t[0]==t[m-1]&& !zz2 && !oo2){
            if(t[0]=='0')z=1;
            else o = 1;
            f = 1;
        }
        
        if(zz && !oo && f)possible=o;
        if(!zz && oo && f)possible=z;
        if(!zz && !oo)possible=1;
        if(possible)cout<<"YES\n";
        else cout<<"NO\n";
    }    
}