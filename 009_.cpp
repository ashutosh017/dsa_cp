#include<iostream>
using namespace std;

int main(){
    int i=0;
    string str;
    cin>>str;
    char c;
    while (str[i]){
        c=str[i];
        if (isupper(c)){
             c=tolower(c);
        }
        else if (islower(c)){
             c=toupper(c);
        }
        putchar (c);
        i++;
    }
    cout<<endl;

    return 0;
}