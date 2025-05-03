#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], b[n-1];
        for (int i = 0; i < n-1; i++)
        {
            cin>>b[i];
            if(i>0){
                if(b[i]>=b[i-1]){
                    a[i] = b[i-1];
                }
                else a[i] = b[i];
            }
        }
        a[0] = b[0];
        a[n-1] = b[n-2];
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
        
    }
    return 0;
}