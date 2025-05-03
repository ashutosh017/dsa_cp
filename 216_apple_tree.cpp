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

vi leaf;
void cntLeafNodes(int x,int par,vector<vector<int>> v,int &cnt){
	
	if(v[x].size()==1 && v[x][0]==par){leaf.pb(x);cnt++; return;}
	for(auto i:v[x]){
		if (i != par)
		cntLeafNodes(i,x,v,cnt);
	}
}

int helper(int x,int y){
	int leafNodeCnt=0;
	for(auto i:leaf){
		if(x==i)leafNodeCnt++;
		if(y==i)leafNodeCnt++;
	}
	return leafNodeCnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n;cin>>n;
    	vector<vector<int>> v(n+1);
    	rep(i,n-1){
    		int a,b;cin>>a>>b;
    		v[a].pb(b);
    		v[b].pb(a);
    	}
    	
    	// cout<<cnt<<nline;
    	int q;cin>>q;
    	while(q--){
    		int x,y;cin>>x>>y;
    		int cntx = 0,cnty=0;
    		cntLeafNodes(x,-1,v,cntx);
    		cntLeafNodes(y,-1,v,cnty);
    		cout<<cntx<<" "<<cnty<<nline;
    		
    	}
    	leaf.clear();
    	    	
    }    
}