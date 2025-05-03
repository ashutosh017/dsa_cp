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
#define mod 998244353
#define int ll


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vll fact(2e5+5,1);
    forn(i,1,2e5){
    	fact[i] = i*fact[i-1];
    	fact[i]%=mod;
    }
    
    int t;cin>>t;while(t--){
    	string s; cin>>s;
    	int n = s.size();
    	ll ans =1,cnt=1,diff=1;
    	rep(i,n-1){
    		if(s[i]!=s[i+1])diff++;
    		if(s[i]==s[i+1]){
    			cnt++;
    		}else{
    			(ans*=cnt)%=mod;
    			cnt = 1;
    		}
    	}
 		(ans*=cnt)%=mod;

    	cout<<n-diff<<' '<<(fact[n-diff]*ans)%mod<<nline;
    	
    }    
}

/*

A = [1,2,3]
B = [3,4,5]

what we are doing:
	|A|!*|B|!
what actually have to do:
	(|A|+|B|)!
	
*/