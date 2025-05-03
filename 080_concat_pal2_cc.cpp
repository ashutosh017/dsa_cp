#include <iostream>
using namespace std;
#include <cstring>

int removeChar(char c, string &s)
{
	for (int i = 0; i < s.size(); i++)
	{
		if (c == s[i])
		{
			s.erase(i, 1);
			return 1;
		}
	}
	return 0;
}
int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, odd = 0, flag = 0;
		string a, b, c;
		cin >> n >> m;
		cin >> a >> b;
		if (n <= m)
		{
			for (int i = 0; i < n; i++)
			{
				if (removeChar(a[i], b))
					flag++;
			}
			if (flag == n)
				c = b;
			else
				flag = 0;
		}
		else
		{
			for (int i = 0; i < m; i++)
			{
				if (removeChar(b[i], a))
					flag++;
			}
			if (flag == m)
				c = a;
			else
				flag = 0;
		}
		int fr[26];
		memset(fr, 0, sizeof(fr));
		for (int i = 0; i < c.size(); i++)
		{
			fr[c[i] - 'a']++;
		}
		for (int i = 0; i < 26; i++)
		{
			if (fr[i] % 2 == 1)
				odd++;
		}
		if (flag == 0)
			cout << "no" << endl;
		else if (c.size() % 2 == 0)
		{
			if (odd == 0)
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
		else if (c.size() % 2 == 1)
		{
			if (odd == 1)
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}

		if (n <= m)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					if (a[i] == b[j])
					{
					}
				}
			}
		}
	}

	return 0;
}
