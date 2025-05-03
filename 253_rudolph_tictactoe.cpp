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
    	vector<string> v(3);
    	rep(i,3)cin>>v[i];
    	rep(i,3){
    		if(v[i][0]==v[i][1] && v[i][1]==v[i][2]){ // Checking horizontally
                if(v[i][0]!='.'){   
    			     cout<<v[i][0]<<nline;
                     break;
                }
    		}
    		if(v[0][i]==v[1][i] && v[1][i]==v[2][i]){ // Checking vertically
                if(v[0][i]!='.'){   
    			     cout<<v[0][i]<<nline;
                     break;
                }
    		}
    		if(i==0){ // checking diagonally from left
    			if(v[0][i]==v[1][1] && v[1][1]==v[2][2]){
                    if(v[0][i]!='.'){   
    				        cout<<v[0][i]<<nline;
                            break;
                    }
    			}
    		}
    		if(i==2){ // checking diagonally from right
    			if(v[0][i]==v[1][1] && v[1][1]==v[2][0]){
                    if(v[0][i]!='.'){   
    				        cout<<v[0][i]<<nline;
                            break;
                    }
    			}
    		}
    		if(i==2)cout<<"DRAW"<<nline;
    	}
    }    
}