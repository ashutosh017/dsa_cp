#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0){
	    int *a,n;
	    cin>>n;
	    for (int i = 0; i < n; i++)
        {
            a[i] = 0;
            if(i==0 || i==n-1){
                a[i] = 1;
            }
            cout<<a[i];
        }
        cout<<endl;
	}
	return 0;
}
