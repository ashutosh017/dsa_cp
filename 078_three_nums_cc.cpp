#include <iostream>
using namespace std;

void ans(){
    int arr[3];
	    for(int i=0;i<3;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<3;i++){
	        for(int j=i+1;j<3;j++){
	            if(arr[j]<arr[i]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                };
	        }
	    }
	    for(int i=0;i<3;i++){
	        cout<<arr[i];
	    }
	    int z = 0;
	    while(1){
	        arr[0]+=1;
	        arr[1]+=1;
	        arr[2]-=1;
	        if((arr[0]>arr[2])||(arr[1]>arr[2])){
	            cout<<-1<<endl;
	           // exit(0);
	           return;
	        }
	        z++;
	        if(arr[0]==arr[1]==arr[2]){
	            cout<<z<<endl;
	           // exit(0);
	           return;
	        }
	    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ans();
	}
	return 0;
}
