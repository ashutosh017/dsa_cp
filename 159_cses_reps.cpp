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
    string s;cin>>s;
    ll x=1,y=1;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            x++;
            if(x>y)y=x;
        }
        else {
            x=1;
        }
    }
    cout<<y<<endl;
    return 0;
}