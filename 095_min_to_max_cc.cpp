#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, count = 0, a;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        m = *min_element(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if (v[i] == m)
                count++;
        }
        cout << n - count << endl;
    }
    return 0;
}
