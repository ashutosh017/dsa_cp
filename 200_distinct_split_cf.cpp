#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
#define ll long long
#define forn(i, a, b) for(int i=a;i<=b;i++)
#define ford(i,a,b) for(int i=a;i>=b;i--)
#define rep(i, n) forn(i, 0, n-1)
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(),x.end()
#define nline '\n'
int countDupes(string s){
    vi v(26,0);
    int cnt = 0;
    for(auto i:s){
        v[i-'a']++;
    }
    rep(i,26){
        if(v[i]>=2)cnt++;
    }
    return cnt;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;while(t--){
        int n;string s;cin>>n>>s;
        set<char> set1,set2;
        // int prevSize=0,ind = 0;
        // rep(i,n-1){
        //     set1.insert(s[i]);
        //     ind = i;
        //     int size = set1.size();
        //     if(size>prevSize)
        //     prevSize = size;
        //     else {
        //         ind--;
        //         break;
        //     }
        // }
        // forn(i,ind+1,n-1)set2.insert(s[i]);
        // int ans = set1.size()+set2.size();
        // cout<<ans<<nline;
        int ans = 0;
        forn(i,0,n-1){
            forn(j,0,i){
                set1.insert(s[j]);
            }
            forn(k,i+1,n){
                set2.insert(s[k]);
            }
            int sz1 = set1.size(), sz2 = set2.size();
            set1.clear(),set2.clear();
            ans = max(ans,sz1+sz2);
        }
        cout<<ans<<nline;

    }
    return 0;
}