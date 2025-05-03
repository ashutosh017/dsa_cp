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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n;string s;
    	cin>>n>>s;
    	int lc = 0,rc = 0;
    	rep(i,n){
    		if(s[i]=='(')lc++;
    		if(s[i]==')')rc++;
    	}
    	if(lc!=rc)cout<<-1<<nline;
    	else{
            char c = s[0];
    		vi v(n,2);
    		rep(i,n){
    			if(s[i]==c){
    				forn(j,i+1,n-1){
    					if(s[j]!=s[i]&&v[j]==2){
                            v[j] =1;
    						v[i]=1;
                            break;
    					}
    				}
    			}
    		}
            
            // vi v(n,2);
            // char c = s[0];
            // int cnt=0,i=0;
            // while(s[i]==c&& i<n){
            //     cnt++;
            //     v[i]=1;
            //     i++;
            // }
            // while(cnt&&i<n){
            //     if(s[i]!=c)v[i]=1,cnt--;
            //     i++;
            // }
            
            set<int> set;
            for(auto i:v)set.insert(i);
            int f = set.size();
                
    		// rep(i,n){
    		// 	if(!v[i])v[i]=2;
    		// }
            cout<<f<<nline;
            for(auto i:v)cout<<i<<' ';
    		cout<<nline;
    	}
    }    
}




/*
  ( ( ( ) ) )  )  )  ( ( 
0 1 2 3 2 1 0 -1 -2 -1 0
*/
