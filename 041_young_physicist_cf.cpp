#include <iostream>
using namespace std;

int main()
{
    int n,yes=1,sum=0;
    cin >> n;
    int arr[n][3], ans[3] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            ans[j] += arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if(ans[i]!=0)yes=0;
    }
    if (yes)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}