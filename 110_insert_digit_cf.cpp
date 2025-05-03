#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char d;
        string s;
        cin >> n >> d >> s;
        int i = 0;
        while(s[i]>=d)i++;
        s.insert(i,1,d);
        cout<<s<<endl;
    }
    return 0;
}