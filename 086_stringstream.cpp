#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

int main(){
    string s = "11,0,3,4,5,,6";
    int t;
    vector <int> v;
    char ch;
    stringstream ss(s);
    // ss>>t;
    // ss>>ch;
    // cout<<ch<<endl;
    // ss<<t;
    while(ss>>t){
        // v.push_back(t);
        cout<<t<<" ";
        ss>>ch;

    }
    // cout<<v<<endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    cout<<"\n";
    
    return 0;
}