#include <bits/stdc++.h>
// #include<iostream>
using namespace std;

int main(){
    int diff=0;
    string s1,s2;
    cin>>s1>>s2;
    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i]<'a')s1[i]+=(97-65);
        if(s2[i]<'a')s2[i]+=(97-65);
        if(s1[i]!=s2[i]){
            diff = s1[i]-s2[i];
            break;
        }
    }
    if(diff<0)cout<<-1<<endl;
    else if(diff>0)cout<<1<<endl;
    else cout<<0<<endl;
    return 0;
}