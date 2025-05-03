#include <bits/stdc++.h>
// #include<iostream>
using namespace std;
int __lcm(int a,int b){
    return (a*b)/__gcd(a,b);
}
int min_price_tags(int a[],int b[],int n){
    int count = 1;
    for (int i = 0; i < n-1; i++)
    {
        int lcm = __lcm(b[i],b[i+1]);
        int c1 = a[i]%(lcm/b[i]);
        int c2 = a[i+1]%(lcm/b[i+1]);
        if((c1||c2)){
            count++;
        }
        else if(c2==0){
            a[i+1]%=lcm/b[i+1];
            b[i+1]=lcm;
        }
    }
    return count;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i]>>b[i];
        }
        cout<<min_price_tags(a,b,n)<<endl;
        
    }
    return 0;
}