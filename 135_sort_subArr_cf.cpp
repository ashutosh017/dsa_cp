#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1],a2[n+1];
        for (int i = 1; i < n+1; i++)
        {
            cin>>a[i];
        }
        for (int i = 1; i < n+1; i++)
        {
            cin>>a2[i];
        }
        int count=0,prev_count=0,r;
        for (int i = 1; i < n+1; i++)
        {
            if(a[i]==a2[i]){
                count++;
                r=count;
            }
        }
        
        
    }
    return 0;
}