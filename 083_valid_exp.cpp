#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		string s;
		// if ((x > 0 && n > (x - 1)) || (x <= 0 && n > ((-1) * (x )+ 1)))
		// {
		// 	if (x > 0)
		// 	{
		// 		for (int i = 0; i < n; i++)
		// 		{
		// 			if (i < x)
		// 			{
		// 				s[i] = '+';
		// 			}
		// 			else
		// 			{
		// 				s[i] = '*';
		// 			}
		// 		}
		// 	}
		// 	else if (x <= 0)
		// 	{
		// 		for (int i = 0; i < (n); i++)
		// 		{
		// 			if (i < ((-1) * x))
		// 			{
		// 				s[i] = '-';
		// 			}
		// 			else
		// 			{
		// 				s[i] = '*';
		// 			}
		// 		}
		// 	}
		// }
		cout << s << endl;
	}
	return 0;
}
