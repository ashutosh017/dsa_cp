#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 50)
            cout << 0 << endl;
        else if (n < 50)
        {
            if ((50 - n) % 2)
            {
                if ((50 - n) == 1)
                    cout << 2 << endl;
                else
                    cout << (((50 - n) + 1 )/ 2) + 2 << endl;
            }
            else cout<<(50-n)/2<<endl;

        }
        else 
        {
            if ((n - 50) == 1)
                cout << 2 << endl;
            else if((n-50)%2)
                cout << (n - 50) / 2 << endl;
            else
            cout << abs(50 - n) / 2 << endl;
        }
        // else
    }
    return 0;
}
