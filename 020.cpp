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
    	int n,k; cin>>n>>k;
        list<char> queue;
        for(char i = 97;i<97+k;i++)queue.push_back(i);
        int z = n*k;
        while(z--){
            char c = queue.front();
            cout<<c;
            queue.pop_front();
            queue.push_back(c);

        }
        cout<<nline;

    }    
}