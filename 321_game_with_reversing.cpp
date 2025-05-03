#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, a, b)  for(int i=a;i<=b;i++)
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
    int t;cin>>t;while(t--){
    	int n;cin>>n;
    	string s,t,rev;
    	cin>>s>>t;
    	rev = s;reverse(all(rev));
    	int ans1=0,ans2=0;
    	rep(i,n)ans1+=s[i]!=t[i],ans2+=rev[i]!=t[i];
        // ans1%2?ans1+=ans1-1:ans1+=ans1;
    	// rep(i,n)
        // ans2%2?ans2+=ans2:ans2+=ans2-1;
        ans1=ans1%2?2*ans1-1:2*ans1;
        ans2=ans2%2?2*ans2:ans2>0?2*ans2-1:2;
        
    	cout<<min(ans1,ans2)<<nline;
    	
    }    
}