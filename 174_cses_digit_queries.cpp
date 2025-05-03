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
ll ans(ll num, ll n,ll s, ll i){
    ll res = num+(n-s)/i;
    ll r = (n-s)%i;
    if(r){
        res++;
        while(res>=pow(10,r)){
            res/=10;
        }
    }
    return res%10;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;while(t--){        
        ll n;cin>>n;
        ll num = 0,i=0,s=0;
        while((n-(s+i*9*pow(10,i)))>=0){
            s = s + (i+1)*9*pow(10,i);
            num = num+ 9 * pow(10,i);
            i++;
        }i++;
        // cout<<num<<" ";
        // cout<<n<<" ";
        // cout<<s<<" ";
        // cout<<i<<"\n";
        if(n<10)cout<<n<<"\n";
        else
        cout<<ans(num,n,s,i)<<"\n";
    }
    return 0;
}