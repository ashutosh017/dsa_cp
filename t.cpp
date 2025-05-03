// #include<bits/stdc++.h>
// using namespace std;int T_T,i,j;string a,b;
// int main(){
//     for(cin>>T_T;T_T--;){
//         for(cin>>a>>b,i=1,j=0;i<a.size();++i){
//             if(a[i-1]=='0'&&b[i-1]=='0'&&a[i]=='1'&&b[i]=='1')j=1;
//         }puts(j?"YES":"NO");
//     }
// }


// Two binary strings
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string a,b;
//         cin>>a>>b;
//         int flag=0;
//         for(int i=0;i<a.size()-1;i++){
//             if(a[i]==b[i]&&a[i+1]==b[i+1]&&a[i]=='0'&&a[i+1]=='1')
//                 flag=1;
//         }
//         if(flag==1)
//             printf("YES\n");
//         else
//             printf("NO\n");
//     }
//     return 0;
// }


#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for (int tc = 0; tc < t; ++tc) {
        string a, b;
        cin >> a >> b;
        bool ok = false;
        for (int i = 0; i + 1 < a.size(); ++i) {
            if (a[i] == b[i] && a[i] == '0' && a[i + 1] == b[i + 1] && a[i + 1] == '1') {
                ok = true;
            }
        }
        
        if (ok) 
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}


/*
Exception case:
1
011
010

YES

*/