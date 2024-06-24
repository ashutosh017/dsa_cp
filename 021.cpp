// #include <bits/stdc++.h>
// using namespace std;
#define ll long long
// #define forn(i, a, b) for(int i=a;i<=b;i++)
// #define ford(i,a,b) for(int i=a;i>=b;i--)
// #define rep(i, n) forn(i, 0, n-1)
// #define fi first
// #define se second
// #define vi vector<int>
// #define vll vector<ll>
// #define vb vector<bool>
// #define vvi vector<vector<int>>
// #define pb push_back
// #define pii pair<int, int>
// #define all(x) x.begin(),x.end()
// #define nline '\n'
// #define mod 1000000007
 
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;cin>>t;while(t--){
//     	ll a,b;cin>>a>>b;
//     	if(b%a==0)cout<<b*2<<nline;
//     	else{
//     		cout<<a*b<<nline;
//     	}


//     }  



// /*
// 8
// 2 3
// 1 2
// 3 11
// 1 5
// 5 10
// 4 6
// 3 9
// 250000000 500000000


// 6
// 4
// 33
// 25
// 20
// 12
// 27
// 1000000000

// */  
// }


#include <bits/stdc++.h>
using namespace std;
ll lcm(ll a, ll b){
    long long x = a*b;
    return x/__gcd(a,b);

}
int main(){
    ll s, a, b;
    cin >> s;
    while(s--){
        cin >> a >> b;
        cout << (b % a?lcm(a, b):b * (b / a)) << '\n';
    }
}