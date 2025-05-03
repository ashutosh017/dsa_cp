#include<iostream>
using namespace std;

class Pair{
    public:
    int min;
    int max;
};
Pair getMinMax(int arr[],int n){
    Pair minMax;
    if(n==1){
        minMax.min = arr[0];
        minMax.max = arr[0];
        return minMax;
    }
    if(arr[0]>arr[1]){
        minMax.max = arr[0];
        minMax.min = arr[1];
    }
    else{
        minMax.max = arr[1];
        minMax.min = arr[0];
    }
    for (int i = 2; i < n; i++)
    {
        if(arr[i]>minMax.max){
            minMax.max = arr[i];
        }
        else if(arr[i]<minMax.min){
            minMax.min = arr[i];
        }
    }
    return minMax;
    
}
int main(){
    int arr[] = {1,2,3,4,5};
    Pair minMax = getMinMax(arr,5);
    cout<<minMax.min<<endl;
    cout<<minMax.max<<endl;
    return 0;
}