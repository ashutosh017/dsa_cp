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
    	int a, b, c;
		cin>>a>>b>>c;
    	int new_a = 2*b - c,new_b = (a+c)/2, new_c = 2*b-a;
    	if((new_a>=a&& new_a%a==0) || (new_b>=b&& (c-a)%2==0&&new_b%b==0) || (new_c>=c&& new_c%c==0)) cout<<"YES\n";
    	else cout<<"NO\n";
    }
}