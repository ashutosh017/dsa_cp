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
    int n;
    cin>>n;
    if(n<4&&n>1)cout<<"NO SOLUTION"<<endl;
    else{
        ll i=2,j=1;
        while(i<=n){cout<<i<<" ";i+=2;}
        while(j<=n){cout<<j<<" ";j+=2;}
        cout<<endl;
    }
    return 0;
}