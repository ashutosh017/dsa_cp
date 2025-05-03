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
int gcd(int a, int b){
    return b?gcd(b,a%b):a;
}

// Iterative
// int gcd(int a, int b){
//     while(b){
//         a%=b;
//         swap(a,b);
//     }
//     return a;
// }
int main(){
    cout<<gcd(2,3)<<endl;
    cout<<gcd(2,4)<<endl;
    return 0;
}
// TC - O(log(min(a,b)))