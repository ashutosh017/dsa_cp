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
    int t; cin >> t; while(t--){
    	int n;cin>>n;
    	int neg_cnt=0,pos_cnt;
    	rep(i,n){
    		int a;
    		cin>>a;
    		if(a<0)neg_cnt++;
    	}
        int ans = 0;
        ans+=(neg_cnt)%2;neg_cnt-=(neg_cnt)%2;
        if(neg_cnt>(n-neg_cnt)){
            int ops = (neg_cnt-n+neg_cnt+1)/2;
            ans+=ops+(neg_cnt-ops)%2;
        }
        cout<<ans<<nline;
        // pos_cnt = n-neg_cnt;
        // if(!(neg_cnt%2) && neg_cnt<=pos_cnt)cout<<0<<nline;
        // else{
        //     int ops = (neg_cnt-pos_cnt+1)/2;
        //     int ans = ops+(neg_cnt-ops)%2;
        //     cout<<ans<<nline;
        // }
    }    
}