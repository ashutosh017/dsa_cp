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

void print1(int n){
	rep(i,n){
		cout<<"()";
	}
}
void print2(int n){
	rep(i,n){
		cout<<'(';
	}
	rep(i,n){
		cout<<')';
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	string s;cin>>s;
    	int c1=0,c2=0,cnt=0,cnt2=0;
    	for(auto i:s){
    		if(i=='('){
    			cnt++;
    			c1=max(cnt,c1);
    		}
    		else{
    			cnt=0;
    		}
    		if(i==')'){
    			cnt2++;
    			c2 = max(cnt2,c2);
    		}
    		else{
    			cnt2 = 0;
    		}
    	}
    	// cout<<c1<<' '<<c2<<nline;
    	if(s=="()")cout<<"NO"<<nline;
    	else {
    		cout<<"YES"<<nline;
    		if(c1>1||c2>1){
    			print1(s.size());
    		}
    		else{
    			print2(s.size());
    		}
    		cout<<nline;
    	}
    }    
}