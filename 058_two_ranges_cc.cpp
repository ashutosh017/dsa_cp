#include <iostream>
using namespace std;
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,t1=0,t2=0;
        cin>>a>>b>>c>>d;
	 	if(a>c){
			swap(&a,&c);
			swap(&b,&d);
		}
		if(b>=d)cout<<(b-a)+1<<endl;
		else if(c<=b && b<d)cout<<(d-a)+1<<endl;
		else cout<<(b-a)+1 +(d-c)+1<<endl;

	}
	return 0;
}
