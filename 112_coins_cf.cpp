#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        if((n-k)%2==0 || n%2==0)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}