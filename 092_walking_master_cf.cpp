#include <bits/stdc++.h>
// #include<iostream>
using namespace std;
int steps(pair<int, int> p1,pair<int, int> p2){
    // if((p1.first<p2.first)||p1.second>p2.second)
    if(p1.second>p2.second)
        return -1;
    int count=0;
    while(p1.second!=p2.second){
        p1.first++;
        p1.second++;
        count++;
    }
    if(p1.first<p2.first)return -1;
    while (p1.first!=p2.first)
    {
        p1.first--;
        count++;
    }
    return count;
    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        pair<int, int> p1, p2;
        cin>>p1.first>>p1.second>>p2.first>>p2.second;
        cout<<steps(p1,p2)<<endl;
    }
    return 0;
}