#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
#define ll long long
#define forn(i, a, b) for(int i=a;i<=b;i++)
#define ford(i,a,b) for(int i=a;i>=b;i--)
#define rep(i, n) forn(i, 0, n-1)
#define fi first
#define se second
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(),x.end()
#define nline '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n;cin>>n;
    	vi v(101,0);
		rep(i,n){
			int a;cin>>a;
			v[a]++;
		}
		int f = 1;
		forn(i,1,100)if(v[i]>v[i-1])f=0;
		if(f)cout<<"yes"<<nline;
		else cout<<"no"<<nline;
		
		    	
    	
    	
    	
    }    
}