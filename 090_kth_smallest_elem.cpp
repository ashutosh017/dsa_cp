#include <bits/stdc++.h>
// #include<iostream>
using namespace std;

int main(){
    vector<int> v = {1,2,34,4,5};
    int k;
    cin>>k;
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.at(k-1)<<endl;
    // it is not working
    return 0;
}