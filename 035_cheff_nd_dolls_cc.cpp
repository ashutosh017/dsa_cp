#include <iostream>
using namespace std;

int main() {
	int t;
	while(t-->0){
        int n;
        cin>>n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i];
        }
        cout<<endl;
        
        
    }
	return 0;
}
