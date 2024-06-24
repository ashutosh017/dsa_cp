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

int sum =0;
bool isWinner(set<int> &s){
    int n = s.size();
    set<int>::iterator i=s.begin(),j;
    j=i;j++;
    int st = *i;
    st-=sum;
    if(st==0)s.erase(i,j);
    i = s.begin();
    bool w = true;
    if(n%2==0 && *i<2){
        w=false;
        
    }
    if(w){
        sum+=*i;

    }

    return w;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n; cin>>n; vi v(n); rep(i,n)cin>>v[i];
    	set<int> s;
    	for(auto i: v)s.insert(i);
    	string winner;
        while(s.size()){
            bool w = isWinner(s);
            if(w)winner="Alice";
            else winner = "Bob";
        }
    }    
}