#include <bits/stdc++.h>
using namespace std;
#define ll long long
int conseq_ones(string s)
{
    int count = 0, prev_count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            count++;
        if (count > prev_count)
        {
            prev_count = count;
        }
        }
        else
        {
            count = 0;
        }
    }
    return prev_count;
}
int ans(string s)
{
    if (conseq_ones(s) == s.size())
        return s.size() * s.size();
    int cnt = 0, cnt2 = s.size() - 1;
    while (s[cnt2] != '0')
        cnt2--;
    cnt2 = s.size()-cnt2-1;
    while (s[cnt] != '0')
        cnt++;
    if ((cnt == conseq_ones(s) && s[s.size() - 1] == '1')||cnt2==conseq_ones(s)&&s[0]=='1')
    {

        if (cnt == cnt2)
            return cnt * (cnt+1);
        return (min(cnt, cnt2) + 1) * max(cnt, cnt2);
    }
    if (conseq_ones(s) == 0)
        return 0;
    if (conseq_ones(s) == 1)
        return 1;
    return 2 * (conseq_ones(s) - 1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << ans(s) << endl;
    }
    return 0;
}