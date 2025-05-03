/* https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/ */
#include <iostream>
using namespace std;

int check(int *arr1, int *arr2,int n){
    for(int i=0;i<n;i++){
        if(arr1[i]<arr2[i]){
            return -1;
            break;
        }
    }
}
int main()
{
    int n,steps=0;
    cin >> n;
    int *arr1 = new int[n];
    int *arr2 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
        while(arr1[i]!=arr2[i]){
            arr1[i]-arr2[i];
            if(arr1[i]<arr2[i]){
                break;
            }
            steps++;
        }
    }
       

    cout << steps << endl;
    return 0;
}