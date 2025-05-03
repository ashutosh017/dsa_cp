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
        int n;cin>>n;
        // if(n%3==0)cout<<"Second\n";
        // else cout<<"First\n";
        vi v(n+1); rep(i,n)cin>>v[i+1];
        // ll mi = INT_MAX, mx= INT_MIN, ans = 0;
        // forn(i,1,n/2){
        //     int x = 1,y = 0;
        //     ll sum = 0;
        //     if(n%i==0){
        //         while(y<=n){
        //             sum = 0;
        //             forn(j,x,y+i){
        //                 sum+=v[j];
        //             }
        //             mi = min(mi, sum);
        //             mx = max(mx, sum);
        //             x+=i,y+=i;
        //             ans = max(ans,mx-mi); 
        //         }
                
        //     }
        // }
        // cout<<ans<<nline;
        
        ll sum = 0,x=0,mi = INT64_MAX, mx = INT64_MIN,ans =0;
        while(++x && x<n/2+1){
            if(n%x==0){
                forn(i,1,n){
                    sum+=v[i];
                    if(i%x==0){
                        mi = min(mi, sum);
                        mx = max(mx, sum);
                        sum=0;
                    }
                }
                // cout<<mx<<' '<<mi<<nline;
                ans= max(ans,mx-mi); 
                mi = INT64_MAX,mx = INT64_MIN;               
            }            
        }
        
        cout<<ans<<nline;
        // cout<<nline;
    }
}


// 962753772
// 2128952561