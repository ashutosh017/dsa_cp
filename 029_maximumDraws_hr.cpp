#include<iostream>
using namespace std;

int main(){
    int *arr,n;
    cin>>n;
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        cout<<arr[i]+1<<endl;
    }
    
    return 0;
}