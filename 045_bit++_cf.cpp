#include<iostream>
using namespace std;

int main(){
    int a,X=0;
    cin>>a;
    string s;
    for (int i = 0; i < a; i++)
    {
        int t=3;
        int j=0;
        while(t--){
            cin>>s[j];
            j++;
        }
        if(s[0]=='+'&&s[1]=='+'&&s[2]=='X')X++;
        else if(s[0]=='-'&&s[1]=='-'&&s[2]=='X')X--;
        else if(s[0]=='X'&&s[1]=='+'&&s[2]=='+')X++;
        else if(s[0]=='X'&&s[1]=='-'&&s[2]=='-')X--;
    }
    cout<<X<<endl;
    
    return 0;
}