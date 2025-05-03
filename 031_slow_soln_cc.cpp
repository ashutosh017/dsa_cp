#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t; 
	while(t-->0){
	    int maxT,maxN,sumN;
	    cin>>maxT>>maxN>>sumN;
	    int i,k;
        i=k=0;
	    while(k<=sumN && maxT>0){
            k+=maxN;
	        i+=(maxN*maxN);
            maxT--;
            if((sumN-k)<maxN){
                maxN = sumN-k;
            }
	    }
	    cout<<i<<endl;
	}
	return 0;
}
