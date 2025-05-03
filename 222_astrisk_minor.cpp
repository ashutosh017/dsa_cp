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
    	string a,b;cin>>a>>b;
    	int n = a.size(),m = b.size(),f=0;
    	char c1,c2;
    	rep(i,n-1)rep(j,m-1)if(a[i]==b[j]&&a[i+1]==b[j+1])f=1,c1=a[i],c2=a[i+1];
    	if(f)cout<<"YES\n"<<'*'<<c1<<c2<<'*'<<nline;
    	else if(a[0]==b[0])cout<<"YES\n"<<a[0]<<'*'<<nline;
    	else if(a[n-1]==b[m-1])cout<<"YES\n"<<'*'<<a[n-1]<<nline;
    	else cout<<"NO"<<nline;    	
    }    
}