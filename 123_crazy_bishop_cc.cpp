#include <bits/stdc++.h>
using namespace std;
int moves(int n){
  if(n<3)return 0;
  if(n<5)return n-1;
//   if(n==6)return 6;
  if(n%2==1){
    return ((n+1)/2)+ ((n-3)/2)*2;
  } 
  return ((n+1)/2)+ (((n-3)/2)*2)+ 1;
  
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   cout<<moves(n)<<endl;
	}
	return 0;
}


/* 10
5 6 7 8 9 10 11 19 20 21
5
6
8
9
11
12
14
26
27
29 */