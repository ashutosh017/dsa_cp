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
    	int n;cin>>n;
    	map<int, int> mp;
    	rep(i,n){
    		int x,y;cin>>x>>y;
    		mp[x] = y;
    	}
        int a=1, b= INT_MAX;
        for(auto i:mp){
            a = i.fi;
            a-=(i.fi==1);
            a+=((i.se-1)/2);
            
            break;
        }
        // cout<<a<<nline;
    	for(auto i:mp){
            // cout<<i.fi<<" "<<i.se<<nline;
            // b = i.se-1/2;
            if(i.fi<a){
                // a = i.fi;
                b=i.se-1/2;
                b+=i.fi;
                a = min(a,b);
                
                // a+=b;
            }            
        }
        // cout <<nline;
        cout<<a<<nline;
        // cout <<nline;    
    }    
}
/*
2
5
299
9
9
1
1
*/