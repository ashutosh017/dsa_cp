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
    int key,j;
    int arr[] = {12, 11, 13, 5, 6};
    for (int i = 1; i < 5; i++)
    {   key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            // j = j - 1;
            j--;
        }
        arr[j + 1] = key;
    }
    /*
    11,12,13,5,6
    
     */
    show(arr,5);
    return 0;
}