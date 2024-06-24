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
    	int n;cin>>n;
    	// vll v(n);
    	// rep(i,n)cin>>v[i];
    	// int cnt_1=0,ans=INT_MIN;
    	// rep(i,31){
        //     cnt_1=0;
    	// 	rep(j,n){
    	// 		if((1<<i)&v[j]){
    	// 			cnt_1++;
    	// 		}
    	// 	}
    	// 	ans = max(ans,max(cnt_1, n-cnt_1));
    	// 	// if(ans==n)break;
    	// }
        
    	// cout<<ans<<nline;
        map<int, int> cnt;
        int ans = 0;
        rep(i,n){
            int x;
            cin>>x;
            if(!cnt[x]){
                ans++;
                cnt[((1<<31)-1)^x]++;
            }
            else{
                cnt[x]--;
            }

        }
        cout<<ans<<nline;
    }    
}