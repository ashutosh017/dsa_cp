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

int fc = 0;

vi get3(vi v){
    int f=-1,s=-1,t=-1;
    fc++;
    int n = v.size();
    rep(i,n){
        if(f==-1 || v[i]>v[f]){
            t=s;
            s=f;
            f=i;
        }
        else if(s==-1 || v[i]>v[s]){
            t=s;
            s=i;
        }
        else if(t==-1 || v[i]>v[t]){
            t=i;
        }
    }
    return {f,s,t};
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
        fc=0;
    	int n; cin>>n;
    	vi a(n), b(n), c(n);
    	rep(i,n)cin>>a[i];
    	rep(i,n)cin>>b[i];
    	rep(i,n)cin>>c[i];


    	// sort(all(a));
    	// sort(all(b));
    	// sort(all(c));

    	vi x, y, z;
        x = get3(a);
        y = get3(b);
        z = get3(c);
    	// ford(i,n-1,n-3){
    	// 	x.pb(a[i]);
    	// 	y.pb(b[i]);
    	// 	z.pb(c[i]);
    	// }

        // rep(i,3){
        //     cout<<x[i]<<' '<<y[i]<<' '<<z[i]<<nline;
        // }
    	int ans =0;
    	for(auto i:x){
            for(auto j: y){
                for(auto k: z){
                    if(i!=j && i!=k && j!=k){
                        // cout<<i<<' '<<j<<' '<<k<<nline;
                        ans =max(ans, a[i]+b[j]+c[k]);
                    }
                }
            }
        }
        cout<<ans<<nline;
    }    
}
// 44 43 46 51 46 52