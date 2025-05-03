#include <bits/stdc++.h>
using namespace std;
// We have to find maximum repeated count of maximum repeated element

int maxCount(int arr[], int n)
{
    int check, count = 0, prevCount = 0;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count >prevCount)
        {
            prevCount = count;
        }
    }
        return prevCount;
}

int main()
{
    int arr[] = {12, 3,3,3,4,3, 3, 5};
    cout<<maxCount(arr,8)<<endl;
    // cout<<maxRepeat(arr2)<<endl;

    return 0;
}