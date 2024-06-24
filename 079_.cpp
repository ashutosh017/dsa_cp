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
    	string s; cin>>s;
    	vi v(2,0);
    	for(auto i:s)v[i-'0']++;
    	// if(v[0]==v[1])cout<<0<<nline;
    	// else{
    	// 	int n=s.size();
    	// 	int cnt=0,cnt2=0;
        //     vi v0 = v,v1=v;
    	// 	ford(i,n-1,0){
        //         if(s[i]=='0');
    	// 		v0[s[i]-'0']--;
    	// 		cnt++;
    	// 		if(v0[0]==v[1])break;
    	// 	}
        //     ford(i,n-1,0){
        //         if(s[i]=='1')
        //         v1[s[i]-'0']--;
        //         cnt2++;
        //         if(v[0]==v1[1])break;
        //     }
    	// 	cout<<min(cnt,cnt2)<<nline;
    	// }
        // cout<<v[0]<<' '<<v[1]<<nline;
        int ans=0;
        for(auto i:s){
            if(v[!(i-'0')]){
                v[!(i-'0')]--;
                ans++;
            }
            else break;
        }
        cout<<s.size()-ans<<nline;
    }    
}