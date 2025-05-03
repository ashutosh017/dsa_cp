#include <bits/stdc++.h>
// #include<iostream>
using namespace std;
#define ll long long
#define forn(i, a, b) for (int i = a; i <= b; i++)
#define ford(i, a, b) for (int i = a; i >= b; i--)
#define rep(i, n) forn(i, 0, n - 1)
#define fi first
#define se second
#define vi vector<int>
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(), x.end()

int isNewPal(int arr[], string s)
{
    rep(i, 26)
    {
        if (arr[i] >= (s.size() - 1))
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int arr[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i] - 97]++;
        }
        if(isNewPal(arr,s))cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}