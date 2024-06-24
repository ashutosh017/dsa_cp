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
    // int t;cin>>t;while(t--){
    // 	int n; cin>>n; vi v(n); rep(i,n)cin>>v[i];
    // 	map<int, int> m;
    //     for(auto i: v)m[i]++;
    //     int cnt =0;
    //     for(auto i: m)cnt+=i.se/3;
    //     cout<<cnt<<nline;
    // }    


    int t;cin>>t;while(t--){
        int n; cin>>n; vi v(n); rep(i,n)cin>>v[i];
        map<int,int> m;
        rep(i,n)m[v[i]]++;
        int cnt =0;
        for(auto i: m){
            if(i.se>3)cnt++;
        }
        cout<<cnt<<nline;
    }

}