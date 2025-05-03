#include <bits/stdc++.h>
// #include<iostream>
using namespace std;
#define ll long long
#define forn(i, a, b) for (int i = a; i <= b; i++)
#define ford(i, a, b) for (int i = a; i >= b; i--)
#define rep(i, n) forn(i, 0, n - 1)
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(), x.end()
#define nline '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s = "1";
        int curr,first,prev,f=1;
        cin>>curr;first=curr,prev=curr;
        rep(i,n-1){
            cin>>curr;
            if(curr>=prev&&f)prev=curr,s+='1';
            else if(curr<=first&&f)prev=curr,s+='1',f=0;
            else if(curr>=prev&&curr<=first)s+='1',prev=curr;
            else s+='0';
        }
        cout<<s<<nline;
        
    }
    return 0;
}