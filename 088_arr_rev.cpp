//#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void rev(int arr[],int n){
    int front=0,end=n-1;
    while(front<end){
        swap(arr[front],arr[end]);
        front++;
        end--;
    }
}
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    rev(arr,n);
    printArray(arr,n);
    return 0;
}