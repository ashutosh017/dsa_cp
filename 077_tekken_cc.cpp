#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
        int bc = min(b,c);
        b-=bc;
        c-=bc;
        int ab = min(a,b);
        a-=ab;
        b-=ab;
        int ac = min(a,c);
        a-=ac;
        if(a>0)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
	}
	return 0;
}
