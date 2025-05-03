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

int maxRepeat(int x, vi a){
    int n = a.size();
    int cnt = 0,pcnt=0;
    rep(i,n){
        if(a[i]==x){
            cnt++;
            if(cnt>pcnt)pcnt=cnt;
        }
        else cnt=0;
    }
    return pcnt;

}
int maxRepeat2(vi a){
    int n = a.size();
    int cnt = 1,pcnt=1;
    rep(i,n-1){
        if(a[i]==a[i+1]){
            cnt++;
            if(cnt>pcnt)pcnt=cnt;
        }
        else cnt=1;
    }
    return pcnt;

}
bool isPresent(int x, vi v){
    for(auto i:v)if(i==x)return true;
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;while(t--){
        int n;cin>>n;
        vi a(n),b(n);
        rep(i,n)cin>>a[i];
        rep(i,n)cin>>b[i];
        vi c;
        rep(i,n){
            if(isPresent(a[i],a)&&isPresent(a[i],b))c.pb(a[i]);
        }
        int ans = 0;
        for(auto i:c){
            // cout<<i<<" ";
            // cout<<'\n'<<maxRepeat(i,a)<<" "<< maxRepeat(i,b);
            ans =max(ans, (maxRepeat(i,a)+maxRepeat(i,b)));
        }
        // cout<<'\n';
        ans = max(ans,max(maxRepeat2(a),maxRepeat2(b)));
        cout<<ans<<'\n';
    }
    return 0;
}