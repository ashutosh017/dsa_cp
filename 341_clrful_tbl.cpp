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
    	int n,k;cin>>n>>k;
        vi l(k+1,INT_MAX),r(k+1),present(k+1,0);
    	vi a(n);rep(i,n)cin>>a[i],present[a[i]]=1;
        // forn(i,1,k){
        //     rep(j,n){
        //         if(i<=a[j]){
        //             l[i]=min(l[i],j+1);
        //             r[i]=max(r[i],j+1);
        //         }
        //     }
        // }
        
        
        forn(i,1,k){
            rep(j,n){
                if(i<=a[j]){l[i]=j;break;}
            }
        }
        forn(i,1,k){
            ford(j,n-1,0){
                if(i<=a[j]){r[i]=j;break;}
            }
        }
        
        forn(i,1,k)if(present[i])cout<<2*(r[i]-l[i]+1)<<' ';
            else cout<<0<<' ';
        cout<<nline;
        
        
        
    	
    	

    }    
}