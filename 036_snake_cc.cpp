#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int r;
	cin>>r;
	while(r--){
	    int l;
	    cin>>l;
	    string s;
	    cin>>s;
	    if(s[0]&&s[l-1]=='.'){
	        cout<<"Valid"<<endl;
	    }
	    else if(l==2 &&s[0]=='H'&&s[l-1]=='T'){
	        cout<<"Valid"<<endl;
	    }
	    else cout<<"Invalid"<<endl;
	}
	return 0;
}
