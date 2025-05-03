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

// Recursive
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    return res * res;
}

// Iterative
// ll binpow(ll a, ll b){
//     ll res = 1;
//     while(b>0){
//         if(b&1){
//             res = res*a;
//         }
//         a = a*a;
//         b>>=1;
//     }
//     return res;;
// }
int main(){
    cout<<binpow(2,4)<<endl;
    cout<<binpow(2,5)<<endl;
    return 0;
}
// Time compelixity - O(log(n));