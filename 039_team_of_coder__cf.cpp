#include <iostream>
using namespace std;

int main()
{
    int t,z=0,s=0;
    cin >> t;
    while(t--){
        int arr[3];
        for (int i = 0; i < 3; i++)
        {   cin>>arr[i];
            if(arr[i])z++;
        }
        if(z>=2)s++;
        z=0;
    }
    cout<<s<<endl;
    return 0;
}