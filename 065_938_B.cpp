#include <bits/stdc++.h>
using namespace std;

// Values
#define ll long long
#define nline '\n'
#define mod 1000000007

// Loops
#define forn(i, a, b) for(ll i=a;i<=b;i++)
#define ford(i,a,b) for(ll i=a;i>=b;i--)
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
    	int n,c,d; cin>>n>>c>>d;
    	vi a(n*n); 
        for(int i =0; i<n*n; i++)cin>>a[i];
        sort(all(a));
    	vi v(n*n);
    	v[0]=a[0];
        // cout<<a[0]<<' ';    // for debugging
        rep(i,n-1){
            v[i+1]= v[i]+d;
            // cout<<v[i+1]<<' ';  // for debugging
        }
        // rep(i,n){
        //     rep(j,n){
        //         // v[((i+1)*n)+j] = v[((i+1)*n)+j-1]+c;
        //         v[(i+1)*(j+1) + n-1] = v[(i+1)*n+j-1]+c;
        //     }
        // }

        forn(i,1,n-1){
            forn(j,0,n-1){
                v[i*n+j]=v[(i-1)*n+j]+c;
                // cout<<v[i*n+j]<<' ';    // for debugging
            }
        }
        // cout<<nline;    // for debugging
        sort(all(v));
        // // n*=n;
        // int f=1;
        // rep(i,n)if(a[i]!=v[i]){f=0;break;}
        if(a==v)cout<<"YES\n";
        else cout<<"NO\n";

    }    
}