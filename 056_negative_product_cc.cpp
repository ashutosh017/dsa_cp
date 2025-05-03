#include <iostream>
using namespace std;
// january long div 4 que 2
int main() {
	// your code goes here
	int t,z=0,k=0;
	cin>>t;
	while(t--){
	    int arr[3];
	    for(int i=0;i<3;i++){
	        cin>>arr[i];
	        if(arr[i]<0)z++;
	        if(arr[i]==0)k++;
	    }
	    if(z==0 ||z==3 || k>1 ||(z==2&&k==1))cout<<"NO"<<endl;
	    else cout<<"YES"<<endl;
	    z=0;
	    k=0;
	}
	return 0;
}
