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
	   int count1=0,count2=0;
	   for (int i = 0; i < n; i++) {
	     cin>>arr[i];
	   }
	   sort(arr,arr+n);
	   for (int i = 0; i < n; i++) {
	     if(arr[n-1]==arr[n-1])
	     if(arr[i]==arr[n-1])count1++;
	     if(arr[n-1]!=arr[n-2])
	     if(arr[i]==arr[n-2])count2++;
	   }
	   if((arr[n-1]==arr[n-2]&&count1<=((n+1)/2))){
        cout<<"yes"<<endl;
	   }
	   else if(arr[n-1]!=arr[n-2]&&count2<=n-2)cout<<"yes"<<endl;
	   else cout<<"no"<<endl;
	}
	return 0;
}