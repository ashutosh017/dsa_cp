#include <bits/stdc++.h>
// #include<iostream>
using namespace std;
void candy(int n)
{
    if (n % 2 == 0)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> v;
    int count = 0;
    while (n != 1)
    {
        if (((n - 1) / 2) % 2 == 1)
        {
            v.push_back(2);
            n = (n - 1) / 2;
            count++;
        }
        else
        {
            v.push_back(1);
            n = (n + 1) / 2;
            count++;
        }
    }
    cout<<count<<endl;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        candy(n);
    }
    return 0;
}