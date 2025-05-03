#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,*a,*b,maxL=0,t1=0,t2=0,t3=0;
	    cin>>n;
	    a = new int[n];
        b = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(maxL<a[i]){
                maxL=a[i];
                // t1=i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
            // if(t3<b[i]){
            //     t3=b[i];
            // }
        }
        for (int i = 0; i < n; i++)
        {
            if(maxL==a[i]){
                if(t1<=b[i]){
                    t1=b[i];
                    t2=i;
                }
            }
        }
        cout<<t2<<endl;
        t1=0;
        t2=0;      	    
	}
	return 0;
}
