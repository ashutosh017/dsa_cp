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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;while(t--){
        ll n;cin>>n;
        vi v(n);rep(i,n)cin>>v[i];
        ll cnt=0,temp_cnt=0;
        ll aviaries=0,ans=0;
        rep(i,n){
            if(v[i]==1){
                cnt++;
                temp_cnt++;
            }
            if(v[i]==1 && v[i-1]==2)temp_cnt=1;
            // if(v[i]==1 && v[i+1]==2){
            //     ans = aviaries+temp_cnt;
            //     aviaries = cnt/2 + 1;

            // }
        }
        // cout<<cnt<<" "<<temp_cnt<<" \n";
        if(cnt==temp_cnt)ans=cnt;
        else
        ans = (cnt-temp_cnt)/2+temp_cnt+1;
        cout<<ans<<"\n";
    }
    return 0;
}