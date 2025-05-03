#include <bits/stdc++.h>
using namespace std;
int Find_eX(int a, int b, int c, int d)
{
  int x = 1;
  while ((a + x) % b != (c + x) % d)
  {
    x++;
  }
  return x;
}
int main()
{
  // your code goes here
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << Find_eX(a, b, c, d) << endl;
    // pending...
  }

  return 0;
}
