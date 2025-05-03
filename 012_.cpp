// https://www.hackerrank.com/challenges/variable-sized-arrays/problem
#include<iostream>
using namespace std;

int main(){
    int **arr,size,query,k;
    cin>>size>>query;
    arr = new int*[size];
    for (int i = 0; i < size; i++)
    {
        cin>>k;
        arr[i] = new int[k];
        for (int j = 0; j < k; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    while(query-->0){
        int i,j;
        cin>>i>>j;
        cout<<arr[i][j]<<endl;
    }
    

    return 0;
}