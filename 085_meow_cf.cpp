#include <iostream>
using namespace std;
int check1(char c, char n)
{
    if (c == 'm' || c == 'M')
    {
        if (n == 'm' || n == 'M' || n == 'e' || n == 'E')
            return 1;
    }
    else if (c == 'e' || c == 'E')
    {
        if (n == 'e' || n == 'E' || n == 'o' || n == 'O')
            return 1;
    }
    else if (c == 'o' || c == 'O')
    {
        if (n == 'o' || n == 'O' || n == 'w' || n == 'W')
            return 1;
    }
    return 0;
}
int check2(string s, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if(!check1(s[i],s[i+1]))return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        string s;
        cin >> s;
        if(check2(s,size))cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}