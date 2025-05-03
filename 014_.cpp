// formula of reflection of point a on b is = 2b-a

#include<iostream>
using namespace std;

int main(){
    int **p,**q,**r,n;
    cin>>n;
    p = new int*[n];
    q = new int*[n];
    r = new int*[n];
    for (int  i = 0; i < n; i++)
    {
        p[i] = new int[2];
        q[i] = new int[2];
        r[i] = new int[2];
        cin>>p[i][0];
        cin>>p[i][1];
        cin>>q[i][0];
        cin>>q[i][1];
        r[i][0] = 2*(q[i][0]) - p[i][0];
        r[i][1] = 2*(q[i][1]) - p[i][1];
        cout<<r[i][0]<<" "<<r[i][1];
        cout<<endl;
    }
       
    return 0;
}