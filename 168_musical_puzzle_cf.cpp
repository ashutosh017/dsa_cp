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
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(),x.end()

int main(){
    int t;cin>>t;while(t--){
        string s;
        int n;cin>>n>>s;
        set<pair<char,char>> st;
        rep(i,n-1){
            pair<char, char> p;
            p.fi = s[i];p.se = s[i+1];
            st.insert(p);
        }
        cout<<st.size()<<endl;
        
    }
    return 0;
}