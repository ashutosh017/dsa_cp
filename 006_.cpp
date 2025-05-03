#include<iostream>
using namespace std;

int main(){
    int l,r,k,count=1,diff;
    cin>>l>>r>>k;
    diff = abs(l-r);
    if(l>r){
        while(r!=l){
            if(r%k==0){
                count++;
                r++;
            }
        }
    }
    else if(l<r){
        while(l!=r){
            if(l%k==0){
                count++;
                l++;
            }
        }
    }
    cout<<count<<endl;

    return 0;
}