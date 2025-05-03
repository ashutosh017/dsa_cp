#include <bits/stdc++.h>
using namespace std;
int n,m,x1,y1,x2,y2;
int f(int x,int y){
    if((x==1||x==n)&&(y==1||y==m))return 2;
    if(x==1||x==n || y==1||y==m) return 3;
    return 4;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m>>x1>>y1>>x2>>y2;
        cout<<min(f(x1,y1),f(x2,y2))<<endl;
    }
    return 0;
}