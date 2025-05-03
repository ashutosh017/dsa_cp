#include<iostream>
#include<vector>
// #include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {8, 7, 2, 5, 3, 1};
    int target =  10;
    vector<pair<int,int>>vect;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if((arr[i]+arr[j])==target){
                vect.push_back(make_pair(arr[i],arr[j]));
                // vect[i].first=arr[i];
                // vect[i].second=arr[j];
            }
        }
        
    }
        int i=0;
        // while(vect[i].first || vect[i].second){
        // cout<<vect.size()<<endl;
        for(i=0;i<vect.size()-1;i++){
            cout<<vect[i].first<<" "<<vect[i].second<<endl;
        }
    
    
    
    return 0;
}