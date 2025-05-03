#include <bits/stdc++.h>
using namespace std;
#define ll long long
int fd(int x){
    while(x>=10){
        x/=10;
    }
    return x;
}
int ld(int y){
    return y%10;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r,diff=INT32_MIN,lucky_num;
        cin>>l>>r;
        for (int i = l>0?l:1; i<=r && i<=(l+110); i++)
        {
            string s = to_string(i);
            sort(s.begin(),s.end());
            int x = s[s.size()-1]-s[0];
            if(diff<x){
                diff = x;
                lucky_num = i;
            }
        }
        cout<<lucky_num<<endl;
    }
    return 0;
}