#include<iostream>
using namespace std;

int main(){
    int l,n,*w,*h;
    cin>>l;
    cin>>n;
    w = new int[n];
    h = new int[n];
    for(int i=0;i<n;i++){
        cin>>w[i]>>h[i];
    }
    for(int i=0;i<n;i++){
        if(w[i]<l || h[i]<l){
            cout<<"UPLOAD ANOTHER"<<endl;
        }
        else if(w[i]==h[i]){
            cout<<"ACCEPTED"<<endl;
        }
        else{
            cout<<"CROP IT"<<endl;
        }
    }

    return 0;
}