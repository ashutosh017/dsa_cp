#include <iostream>
using namespace std;

int main() {
	// your code goes here
	// QTOO_2523 is code of the quetion -cc
	int t;
	cin>>t;
	while(t--){
	    int n,z=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++){
	        char c = s[i];
	        z=0;
	        for(int j = 0; j<n;j++){
	            if(c==s[j])z++;
	        }
	            if(z>=2)break;
	    }
	    if(z>=2)cout<<n-2<<endl;
	    else cout<<-1<<endl;
	}
	return 0;
}
