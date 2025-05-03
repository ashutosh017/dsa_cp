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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n;cin>>n;
    	int cnt = 0;
    	vi v;
    	while(n--){
    		int a;cin>>a;v.pb(a);if(a==2)cnt++;
    	}
    	if(cnt%2)cout<<-1<<nline;
    	else{
    		int cnt2=0;
    		int i = 0;
    		while(cnt2!=cnt/2){
    			if(v[i]==2)cnt2++;
                i++;
    		}
            if(i==0)cout<<1<<nline;else
    		cout<<i<<nline;
    	}
    }    
}