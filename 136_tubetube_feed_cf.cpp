#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        int ind=-1, diff= INT16_MAX, diff2=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if(diff>(m-(a[i]+i))&& diff2<(b[i])&& (m-(a[i]+i))>=0){
                ind = i;
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     if(a[i]==a[ind] && a2[i]>a2[ind])ind = i;
        // }
        cout<<ind<<endl;
        
    }
    // Incomplete
    return 0;
}