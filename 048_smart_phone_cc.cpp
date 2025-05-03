#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (auto &&i : arr)
        cin>>i;        
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }        
    }

    int mean = n/2;
    cout<<arr[mean]*(n-mean)<<endl;

    
        
    
    
    return 0;
}