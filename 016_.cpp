#include<iostream>
using namespace std;

void show(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int arr[6] = {55,3,2,4,11,8};
    int min_ind;
    int n = sizeof(arr)/sizeof(arr[0]);

    // Code for Selection Sort
    for (int i = 0; i < 6-1; i++)
    {
        min_ind = i;
        for (int j = i+1; j < 6; j++)
        {
            if(arr[j]<arr[min_ind]){
                min_ind = j;
            }
        }
        swap(arr[i],arr[min_ind]);
    }

    show(arr,n);
    
    return 0;
}