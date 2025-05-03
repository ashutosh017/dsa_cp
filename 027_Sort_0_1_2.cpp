#include <iostream>
using namespace std;


int main()
{
    int a, **arr, s, x = 0, y = 0, z = 0;
    cin >> a;
    arr = new int *[a];
    for (int i = 0; i < a; i++)
    {
        x = 0, y = 0, z = 0;
        cin >> s;
        arr[i] = new int[s];
        for (int j = 0; j < s; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 0)
            {
                x++;
            }
            else if (arr[i][j] == 1)
            {
                y++;
            }
            else if (arr[i][j] == 2)
            {
                z++;
            }
        }
        for (int k = 0; k < x; k++)
        {
            cout << 0 << " ";
        }
        for (int k = 0; k < y; k++)
        {
            cout << 1 << " ";
        }
        for (int k = 0; k < z; k++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }



    return 0;
}