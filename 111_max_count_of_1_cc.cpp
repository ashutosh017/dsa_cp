#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, count = 0;
    string s;
    cin >> n >> s;
    vector<int> x1(n), x2(n);
    x1[0] = 1;
    x2[0] = 0;
    int count1 = 1, count2 = 0;
    for (int i = 1; i < n; i++)
    {
        x1[i] = (x1[i - 1] ^ (s[i - 1] - '0'));
        if (x1[i] == 1)
            count1++;
        x2[i] = (x2[i - 1] ^ (s[i - 1] - '0'));
        if (x2[i] == 1)
            count2++;
    }
    cout << ((count1 > count2) ? count1 : count2) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}