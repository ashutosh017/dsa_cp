#include <bits/stdc++.h>
//#include<iostream>
using namespace std;

int fib(int n){
    return n<1?0:n<2?1:fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<fib(i)<<" ";
    }
    cout<<endl;
    
    return 0;
}