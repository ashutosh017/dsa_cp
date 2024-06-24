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
    	ll n; cin>>n;
    	ll a=0,b=0,c=0,ind=0;
        vll v(n);
    	rep(i,n){
    		cin>>v[i];
            b|=v[i];
    	}
        ll i =0;
        while(i<n){
            a|=v[i];
            if(a==b){
                cout<<ind<<' '<<i<<nline;
                ind = max(ind, i-ind);
                a=0;

            }
            i++;
        }
        cout<<ind+1<<nline;
    }    
} 











































