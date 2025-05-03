#include <bits/stdc++.h>
//#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    if(s[0]>='a'){
        s[0]=s[0]-(97-65);
    }
    cout<<s<<endl;
    return 0;
}