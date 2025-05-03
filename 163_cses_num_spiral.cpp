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
    ll t;cin>>t;while(t--){
        ll x,y;cin>>x>>y;
        if(x>=y){
            if(x%2==0){
                cout<<((x)*(x))-y+1;
            }
            else{
                cout<<(x-1)*(x-1)+y;
            }
        }
        else{
            if(y%2){
                cout<<((y)*(y))-x+1;
            }
            else{
                cout<<(y-1)*(y-1)+x;
            }
        }
        cout<<endl;
    }
    return 0;
}