#include <iostream>
using namespace std;
int amtChk(int p,int *amt){
    if((*amt-p)>=0){
        *amt-=p;
        return 1;
    }
    return 0;
}
int main() {
	int t;
	cin>>t;
	while(t-->0){
	    int l,amt;
	    cin>>l>>amt;
	    int *p = new int[l];
	    int *q = new int[l];
	    for(int i=0;i<l;i++){
	        cin>>p[i];
	        q[i] = amtChk(p[i],&amt);
	        cout<<q[i];
            // cout<<amt<<endl;
	    }
        cout<<endl;
	}
	return 0;
}
