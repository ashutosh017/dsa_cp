#include <iostream>
using namespace std;
int chk(string s, int n){
    int diff=0;
    for (int i = 0; i < n; i++) {
        diff=0;
        for (int j = i+1; j < n; j++) {
            if(s.at(i)==s.at(j)){
                diff=j-i+1;
                if(diff%2==0)return 0;
            }
        }
    }
    return 1;
}
int main() {
    int t;
    cin>>t;
    while(t--){
      string s;
      int n;
      cin>>n>>s;
  	  if(chk(s,n))cout<<"YES"<<endl;
  	  else cout<<"NO"<<endl;
    }
	return 0;
}