#include <bits/stdc++.h>
// #include<iostream>
using namespace std;
int counter(string s,int n){
    // sort(s.begin(),s.end());
    int count = 0,prevCount=0;
    for (int i = 0; i < n-1; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if(s[i]==s[j])count++;
        }
        if(count>prevCount)prevCount=count;
        
    }
    return prevCount;
    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int x = counter(s,4);
        if(x==4)cout<<-1<<endl;
        else if(x==3)cout<<6<<endl;
        else cout<<4<<endl;

    }
    return 0;
}