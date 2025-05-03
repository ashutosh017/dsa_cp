#include <iostream>
using namespace std;
int main() {
	int *arr,num,answer=1;
	cin >> num; 
    arr = new int[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	answer = arr[0];
	for(int i=0;i<num;i++){
        answer*=arr[i]%((10*10*10*10*10*10*10*10*10) +7);
	}
	cout<<answer<<endl;

}