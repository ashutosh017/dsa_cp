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
    ll n,m;cin>>n>>m;
    map<ll,bool>mp;
    vll a(n),b(m);
    rep(i,n){
        ll x;cin>>x;
        a[i] = x;
        mp[x] = true;
        // mp->insert(x);
    }
    rep(i,m)cin>>b[i];

    vll c = a;
    sort(c.begin(), c.end(), greater<int>());
    ll i = 0,j=0,piv=0;
    while(i<n&&j<m){
        for(auto it:c)if(it<=b[j]){piv = it;break;}
        if(piv&&mp[piv])
        while(piv){
            if(a[i]==piv){
                cout<<piv<<"\n";
                piv=0;
            }
            mp[a[i]]=false;
            i++;
        }
        else cout<<-1<<"\n";
        j++;
    }
    // rep(i,n){
    //     // mp[a[i]]= false;
    //     for(auto it:c)if(i<=b[i]){
            
    //         break;
    //     }
    // }
    // sort(all(a));
    // sort(all(b));
/* 
Input:
5 3
5 3 7 8 5
4 8 3
Output:
3
8
-1
    */
    // ll i = 0,j=0,cnt=0;
    // while(i<n&&j<m){
    //     if(a[i]<=b[j]){
    //         cout<<a[i]<<"\n";
    //         i++,j++;

    //     }
    //     else i++;
    // }
    // cout<<cnt<<"\n";
    return 0;
}