#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,neg_cnt=0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(i>0){
                if((arr[i]-arr[i-1])<0)neg_cnt++;
            }
        }
        if(n%2)cout<<"yes"<<endl;
        else if((n/2)>neg_cnt)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        
    }
    return 0;
}