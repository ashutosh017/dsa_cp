#include<iostream>
using namespace std;

int main(){
    int arr[5] = {5,4,15,7,9};
    int target;
    cin>>target;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(arr[i]+arr[j]==target){
                cout<<i<<" "<<j;
                cout<<endl;
            }
        }
        
    }
    
    return 0;
}