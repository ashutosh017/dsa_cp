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
    	string l,r;    	
    	cin>>l>>r;
    	if(l.size()>r.size()){
    		swap(l,r);
    	}
    	l.insert(0,r.size()-l.size(),'0');
        // cout<<l<<" "<<r;
        int n = l.size();
    	int cnt = 0,i;
    	for(i = 0;i<l.size();i++){
            
            cnt++;
    		if(l[i]!=r[i])break;
    	}
        int lv = l[i]-'0',rv = r[i] - '0';
        int ans = abs(lv-rv)+(9*(n-cnt));
        cout<<ans<<nline;
    }    
}