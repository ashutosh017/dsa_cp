#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1)cout<<1;
        else if(n%2 &&n!=1)cout<<-1;
        else{
            for (int i = 1; i <n; i+=2)
            {
                cout<<i+1<<" "<<i<<" ";
            }            
        }
        cout<<endl;
    }
    return 0;
}