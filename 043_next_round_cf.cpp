#include<iostream>
using namespace std;

int main(){
    int n,k,z=0,temp;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]>0 &&i<k)z++;
        if(i>=k)if(arr[k-1]==arr[i] &&arr[i]!=0)z++;

        
    }
    cout<<z<<endl;
    
    return 0;
}