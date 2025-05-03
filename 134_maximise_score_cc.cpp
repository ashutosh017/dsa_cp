#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   int arr[n];
	   int max = 0,min = INT32_MAX;
	   for (int i = 0; i < n; i++) {
	     cin>>arr[i];
	     if(i>0){
	       if(abs(arr[i]-arr[i-1])<min)min=abs(arr[i]-arr[i-1]);
	     }
	   }
	   cout<<min<<endl;
	//    Not done yet...
	}
	return 0;
}
