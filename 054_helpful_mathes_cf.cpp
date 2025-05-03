#include<iostream>
using namespace std;
void swap(char *s,char *s2){
    char temp = *s;
    *s = *s2;
    *s2 = temp;
}
int main(){
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i+=2)
    {
        if(s[i]=='1')
            continue;
        if(s[i]=='2')
            for (int j = i+2; j < s.size(); j+=2)
                if(s[j]=='1')
                    swap(s[i],s[j]);                   
        if(s[i]=='3')
            for (int j = i+2; j < s.size(); j+=2)
                if(s[j]=='1')
                    swap(s[i],s[j]);                   
        if(s[i]=='3')
            for (int j = i+2; j < s.size(); j+=2)
                if(s[j]=='2')
                    swap(s[i],s[j]);                   
            
    }
    cout<<s<<endl;
    
    return 0;
}