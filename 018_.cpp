#include<iostream>
using namespace std;

int main(){

    int n, m,a,b;
    cin>>n>>m;
    int **x = new int*[n];
    for (int i = 0; i < n; i++)
    {
        x[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            cin>>x[i][j];
        }
          
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
          
    }

    
    return 0;
}