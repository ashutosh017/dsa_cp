#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int z = 0;
    int store[2];
    int bm[5][5];
    // vector<int> store;
    // vector<vector<int>> bm;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> bm[i][j];
            if (bm[i][j] == 1)
            {
                store[0] = i;
                store[1] = j;
            }
        }
    }
    while (store[0]!=2 || store[1]!=2)
    {
        if (store[0] < 2)
        {
            store[0]++;
            z++;
        }
        if (store[0] > 2)
        {
            store[0]--;
            z++;
        }
        if (store[1] < 2)
        {
            store[1]++;
            z++;
        }
        if (store[1] > 2)
        {
            store[1]--;
            z++;
        }
    }
    cout<<z<<endl;
    return 0;
}