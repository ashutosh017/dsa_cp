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

int find(vvi v){
    int ans =0;
    int temp=0;
    rep(i,3){
        rep(j,3){
            temp=v[0][i];
            if(j!=i){
                temp+=v[1][j];
                rep(k,3){
                    if(k!=j && k!=i){
                        temp+=v[2][k];
                    }
                }
            }
            ans = max(ans,temp);
        }
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n; cin>>n;
    	vi a(n),b(n),c(n);
    	rep(i,n)cin>>a[i];
    	rep(i,n)cin>>b[i];
    	rep(i,n)cin>>c[i];
        unordered_map<int,int> ma,mb,mc;
        rep(i,n){
            ma[i]=a[i];
            mb[i]=b[i];
            mc[i]=c[i];
        }
    	vvi v(3,vi(3));
    	int x=0,y=0,z=0;
    	sort(all(a));
    	sort(all(b));
    	sort(all(c));
    	int j =0;
    	ford(i,n-1,n-3){
    		v[0][3]=a[i];
    		v[1][3]=b[i];
    		v[2][3]=c[i];
    		j++;
    	}
    	// for(auto i:v){
    	// 	for(auto jj:i)cout<<jj<<" ";
    	// 		cout<<nline;
    	// }
        cout<<find(v)<<nline;

    }    
}