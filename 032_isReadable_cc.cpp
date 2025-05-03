#include <iostream>
using namespace std;

int isVowel(char s)
{
    if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
    {
        return 1;
    }
    return 0;
}
int isReadable(string s, int size)
{
    int z = 0;
    for (int i = 0; i < size; i++)
    {
        if (!isVowel(s[i]))
        {
            z++;
        }
        else
        {
            z = 0;
        }
        if (z >=4)
        {
            return 0;
        }
    }
    return 1;
}
void inputS(char *s, int size)
{
}
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        // char *s;
        string s;
        int l;
        cin >> l;
        cin>>s;
        // s = new char[l];
        if(isReadable(s,l)){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}