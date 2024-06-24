// #include <bits/stdc++.h>
// using namespace std;

// // Values
// #define ll long long
// #define nline '\n'
// #define mod 1000000007

// // Loops
// #define forn(i, a, b) for(int i=a;i<=b;i++)
// #define ford(i,a,b) for(int i=a;i>=b;i--)
// #define forc(i,a,b) for(char i=a;i<=b;i++)
// #define rep(i, n) forn(i, 0, n-1)

// // Containers
// #define vi vector<int>
// #define vll vector<ll>
// #define vvi vector<vector<int>>
// #define vvll vector<vector<ll>>
// #define vb vector<bool>
// #define pii pair<int, int>
// #define pll pair<ll, ll>

// // Methods
// #define fi first
// #define se second
// #define pb push_back
// #define ppb pop_back
// #define ppf pop_front
// #define all(x) x.begin(),x.end()

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;cin>>t;while(t--){
//     	int n; cin>>n; vi v(n); rep(i,n)cin>>v[i];
//     	int p=n,q=0,f=0;
//     	forn(i,1,n-2){
//     		int x = __gcd(v[i-1],v[i]);
//     		int y = __gcd(v[i], v[i+1]);
//     		if(x>y){
//     			if(i>p+1){
//     				f=1;
//     				break;
//     			}
//     			p=min(i,p);
//     		}
//     	}
//     	if(f){
//     		cout<<"No\n";
//     		continue;
//     	}

//     }    
// }

#include <bits/stdc++.h>
using namespace std;
 
bool good(vector<int>&b){
    int g = __gcd(b[0], b[1]);
    for(int i = 1; i < int(b.size()) - 1; i++){
        int cur_gcd = __gcd(b[i], b[i + 1]);
        if(g > cur_gcd) return false;
        g = cur_gcd;
    }
    return true;
}
 
bool solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
 
    int g = -1;
    int to_del = -1;
    for(int i = 0; i < n - 1; i++){
        int cur_gcd = __gcd(a[i], a[i + 1]);
        if(cur_gcd < g){
            to_del = i;
            break;
        }
        g = cur_gcd;
    }
    if(to_del == -1) return true;
    vector<int>b0 = a, b1 = a, b2 = a;
    b0.erase(b0.begin() + to_del - 1);
    b1.erase(b1.begin() + to_del);
    b2.erase(b2.begin() + to_del + 1);
    return good(b0) || good(b1) || good(b2);
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        cout << (solve() ? "YES" : "NO") << "\n";
    }
}