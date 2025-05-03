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
    	ll n;cin>>n;
    	vll v(n); rep(i,n)cin>>v[i];
    	string s;cin>>s;
    	ll x0=0,x1=0;
    	vll pref0(n,0),pref1(n,0);
    	rep(i,n){
    		if(s[i]=='0'){
    			x0^=v[i];
    		}
    		else x1^=v[i];
    		pref0[i] = x0;
    		pref1[i] = x1;
    	}
    	int q;cin>>q;
    	while(q--){
    		int x;cin>>x;
    		if(x==2){
    			int g;cin>>g;
    			if(g==0)cout<<x0<<' ';
    			else cout<<x1<<' ';
    		}
    		else{
    			int l,r;cin>>l>>r;
    			l--,r--;
    			ll xlr0 = pref0[r],xlr1 = pref1[r];
    			if(l)xlr0^=pref0[l-1],xlr1^=pref1[l-1];
    			x0^=xlr0;
    			x0^=xlr1;
    			
    			x1^=xlr1;
    			x1^=xlr0;    			
    		}
    	}
        cout<<nline;
        
        
        
        // int n;
        // cin>>n;
        
        // long long A[n];
        // long long pref[n][2],suff[n][2];
        // for(int i=0;i<n;++i)cin>>A[i];
        
        // string s;
        // cin>>s;
        
        // long long z = 0,o = 0;
        // for(int i=0;i<n;++i){
        //     if(s[i] == '0'){
        //         z^=A[i];
        //     }
        //     else o^=A[i];
        //     pref[i][0] = z;
        //     pref[i][1] = o;
        // }
        
        // // z = 0,o = 0;
        // // for(int i=n-1;i>=0;--i){
        // //     if(s[i] == '0'){
        // //         z^=A[i];
        // //     }
        // //     else o^=A[i];
        // //     suff[i][0] = z;
        // //     suff[i][1] = o;
        // // }
        
        // //now we need to do the operations
        
        // int q;
        // cin>>q;
        
        // for(int i=0;i<q;++i){
        //     int x;
        //     cin>>x;
            
        //     if(x == 2){
        //         int y;
        //         cin>>y;
        //         if(y == 1)cout<<o<<" ";
        //         else cout<<z<<" ";
        //     }
        //     else{
        //         int y;
        //         cin>>x>>y;
        //         x--;
        //         y--;
        //         //find the o value in range
                
        //         long long r = pref[y][0];
        //         if(x)r^=pref[x-1][0];
                
                
        //         //find the z value in range
        //         long long r2 = pref[y][1];
        //         if(x)r2^=pref[x-1][1];
                
        //         o^=r;
        //         o^=r2;
                
        //         z^=r2;
        //         z^=r;
        //     }
        // }
        // cout<<"\n";
    	
    	
    }    
}