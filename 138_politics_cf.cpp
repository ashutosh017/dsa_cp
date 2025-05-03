#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string t[n];
        for (int i = 0; i < n; i++)
        {
            cin>>t[i];
        }
        int count = 1;
        for (int i = 0; i < n-1; i++)
        {
            if(t[0].compare(t[i+1]) == 0)count++;
        }
        cout<<count<<endl;
        
    }
    return 0;
}