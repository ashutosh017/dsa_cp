#include<iostream>
using namespace std;
void update(int *a,int *b){
    int temp,temp2;
    if(*a > *b){
        temp=*a;
        temp2=*b;
    }
    else{
        temp=*b;
        temp2=*a;
    }
    *a = *a+(*b);
    *b = temp-temp2;
}
int main(){
    int a,b;
    cin>>a>>b;
    update(&a,&b);
    cout<<a<<endl<<b<<endl;
    return 0;
}
