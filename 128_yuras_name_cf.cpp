#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solve(string s){
    if(s.size()==1){
        if(s[0]=='^')return 1;
        else return 2;
    }
    int count=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='_'&&s[i+1]!='^')count++;
    }
    return s[0]=='_'?count+1:count;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<solve(s)<<endl;
    }
    return 0;
}