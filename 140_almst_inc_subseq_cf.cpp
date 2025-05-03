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

int lsaLen(int arr[],int l, int r){
    int len = r-l+1;
    forn(i,l,r-2){
        if(arr[i]>=arr[i+1]&& arr[i+1]>=arr[i+2])len--;
    }
    return len;
}
int main(){
    int n,q,l,r;
    cin>>n>>q;
    int arr[n];
    forn(i,1,n){
        cin>>arr[i];
    }
    rep(i,q){
        int l,r;
        cin>>l>>r;
        cout<<lsaLen(arr,l,r)<<"\n";        
    }
    
    return 0;
}