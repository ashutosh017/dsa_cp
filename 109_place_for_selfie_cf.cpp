#include <bits/stdc++.h>
using namespace std;
int disc(int a,int b,int c){
    return (b*b)-(4*(a*c));
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,p;
        cin>>l>>p;
        int lines[l],parabolas[p],a[p],b[p],c[p];
        for (int i = 0; i < l; i++)
        {
            cin>>lines[i];
        }
        for (int i = 0; i < p; i++)
        {
            cin>>a[i];
            cin>>b[i];
            cin>>c[i];
        }
        int j = 0;
        for (int i = 0; i < p; i++)
        {
            if(disc(a[i],b[i],c[i])<0){
                cout<<"YES\n"<<lines[j]<<endl;
                // j++;
            }
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}