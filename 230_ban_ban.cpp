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
    	int n;
    	cin>>n;
    	int ops = (n+1)/2;
    	cout<<ops<<nline;
        int l = 1,r=3*n;
        while(l<r){
            cout<<l<<" "<<r<<nline;
            l+=3;r-=3;
        }
    	// cout<<nline;
    	
    }    
}