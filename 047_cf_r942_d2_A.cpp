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
    	int n; cin>>n; vi v(n),w(n); rep(i,n)cin>>v[i]; rep(i,n)cin>>w[i];
        
        int l = 0,p=0, r=n-1, cnt=0;
        while(l<=r){
            int x =0;
            while(v[l]>w[p++] && p<=n){
                x =1;
                cnt++;
            }
            r-=x;
            l++;
        }
        cout<<cnt<<nline;

         

        // int cnt =0;
        // rep(i,n){
        //     if(v[i]>w[]){
        //         forn(j,i+1,n-1){
        //             cnt++;
        //             if(v[i]<=w[j]){
        //                 break;
        //             }
        //         }
        //     }
        // }
        // cout<<cnt<<nline;

        // queue<int> qv,qw;


        // rep(i,n){
        //     qv.push(v[i]);
        //     qw.push(w[i]);
        // }

    }    
}