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
    	int n,m;cin>>n>>m;
    	forn(i,1,n){
            forn(j,1,m)
                cout<<((i%4<=1)^(j%4<=1))<<" \n"[m==j];
            // cout<<nline;
        }
    }    
}









// #include<bits/stdc++.h>

// using namespace std;
// typedef long long ll;

// void testcase(){
//     ll n,m;
//     cin>>n>>m;

//     for(ll i=1;i<=n;i++){
//         for(ll j=1;j<=m;j++){
//             cout<<((i%4<=1)!=(j%4<=1))<<" \n"[j==m];
//         }
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(false); cin.tie(0);
//     int t;
//     cin>>t;
//     while(t--)
//         testcase();
//     return 0;
// }