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

void setMin(ll &a, ll &b){
	if(a<b)a=b;
	else b = a;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	ll n;cin>>n;
    	ll Min = 0,Max = 0;
    	if(n%2||n<4)cout<<-1<<nline;
        else {
            Max = n/4;
            Min = n%6?n/6+1:n/6;
            cout<<Min<<' '<<Max<<nline;
        }
    	
    }    
}