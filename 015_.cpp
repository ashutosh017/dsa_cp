#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b,small,big;
    cin>>a;
    cin>>b;
    if(a>b){
        small=b;
        big=a;
    } 
    else{
        small=a;
        big=b;
    }   
    for(int i=small;i<=big;i++){
        small=i;
        switch (small) {
        case 1:cout<<"one"<<endl;
        break;
        case 2:cout<<"two"<<endl;
        break;
        case 3:cout<<"three"<<endl;
        break;
        case 4:cout<<"four"<<endl;
        break;
        case 5:cout<<"five"<<endl;
        break;
        case 6:cout<<"six"<<endl;
        break;
        case 7:cout<<"seven"<<endl;
        break;
        case 8:cout<<"eight"<<endl;
        break;
        case 9:cout<<"nine"<<endl;
        break;
        }
    }
    if(big>9){
        for(int i=10;i<=big;i++){
            if(i%2==0){
                cout<<"even"<<endl;
            }
            else {
                cout<<"odd"<<endl;
            }
        }
    }
    // Complete the code.
    return 0;
}