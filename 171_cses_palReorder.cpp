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
string makePal(string s){
    unordered_map<char,int> hmap;
    ll n = s.size();
    rep(i,n){
        hmap[s[i]]++;
    }
    ll oddCount=0;
    char oddChar;
    for(auto i:hmap){
        if(i.se%2){
            oddCount++;
            oddChar = i.fi;
        }
    }
    if((n%2 && oddCount!=1) || (n%2==0 && oddCount>0))return "NO SOLUTION";

    string fh,sh;
    for(auto i:hmap){
        string st(i.se/2,i.fi);
        fh=fh+st,sh=st+sh;
    }
    return (oddCount==1)?(fh+oddChar+sh):(fh+sh);

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;cin>>s;
    ll n = s.size();
    cout<<makePal(s)<<"\n";
    return 0;
}