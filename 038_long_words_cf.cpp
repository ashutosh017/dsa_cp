#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string st;
        cin>>st;
        if(st.size()>10){
            cout<<st[0]<<st.size()-2<<st[st.size()-1]<<endl;
        }
        else cout<<st<<endl;
    }
    return 0;
}