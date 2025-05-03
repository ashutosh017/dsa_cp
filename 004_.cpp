#include<iostream>
using namespace std;

int main(){
    char arr[20],n,flag=0;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]=='.'){
            arr[i] = 'B';
            flag = 1;
        }
    }
    if(flag==1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }


    return 0;
}