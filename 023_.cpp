#include<iostream>
using namespace std;

int main(){
    int n,*arr2,*arr1;
    cin>>n;
    arr1 = new int[n];
    arr2 = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        arr2[i] = arr1[n-(i+1)];
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    return 0;
}