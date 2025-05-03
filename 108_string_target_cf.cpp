#include <bits/stdc++.h>
// #include<iostream>
using namespace std;
string solve(string &s)
{
    int ind;
    char c = 'z';
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] <= c)
        {
            ind = i;
            c = s[i];
        }
    }
    for (int i = ind; i >0; i--)
    {
        char t= s[i-1];
        s[i] = t;
    }
    s[0] = c;
    // char t1 = s[0];
    // char t2 = s[1];
    // swap(s[0], s[ind]);
    // for (int i=1;i<ind;i++)
    // {
    //     s[i] = t1;

    //     s[t1] = s[t2];
    //     s[t2] = s[t1];
    // }
    return s;
    // s.erase(s.begin()+ind);
    // return c;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        cout << solve(s) << endl;
    }
    return 0;
}