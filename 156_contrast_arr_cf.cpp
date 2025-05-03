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
        int n;cin>>n;
        vi v(n);rep(i,n)cin>>v[i];
        auto it = unique(all(v));
        v.resize(distance(v.begin(),it));
        int s = v.size();
        for (int i = 0; i+2< v.size(); i++)
        {
            s-=(v[i]>v[i+1] && v[i+1]>v[i+2]);
            s-=(v[i]<v[i+1] && v[i+1]<v[i+2]);

        }
        
        cout<<s<<endl;


    }
    return 0;
}