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
    int t;cin>>t;while(t--){
    	int n,m;
        cin>>n>>m;
    	vvi v(n,vi(m));
    	rep(i,n){
    		rep(j,m){
    			cin>>v[i][j];
    		}
    	}
    	// rep(i,n){
    	// 	rep(j,m){
    	// 		cout<<v[i][j]<<' ';
    	// 	}
    	// 	cout<<nline;
    	// }
        // rep(i,n){
        //     rep(j,n){
        //         cout<<"p("<<i+1<<','<<j+1<<"): ";
        //         rep(k,m){
        //             cout<<v[j][v[i][k]-1]<<' ';
        //         }
        //         cout<<nline;
        //     }
        //     cout<<nline;
        // }
        // cout<<nline;
        int ans =0;
        rep(i,n){
            ans = 0;
            rep(j,n){
                if(ans==m)break;
                int cnt=0;
                rep(k,m){
                    if(v[j][v[i][k]-1]==k+1)cnt++;
                    else break;
                }
                ans = max(ans,cnt);                
            }
            cout<<ans<<' ';
        }
        cout<<nline;
    }    
}