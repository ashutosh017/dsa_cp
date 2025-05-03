#include<iostream>
using namespace std;

int main(){
    int *arr,n,*hs;
    cin>>n;
    arr = new int[n];
    hs = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        hs[i] = 0;
        for (int j = 1; j < arr[i]; j++)
        {
            hs[i]+=j;
        }   

    }
    for (int i = 0; i < n; i++)
    {
        cout<<hs[i]<<endl;
    }
    
    return 0;
}