#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solve()
{
    int n, m;
    cin >> n >> m;
    int x = abs(abs(n) - abs(m));
    int y = abs(abs(n) + abs(m));
    return x>1?y + (x-1):y;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}