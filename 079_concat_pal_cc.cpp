#include <iostream>
using namespace std;
#include<cstring>

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    string s1,s2,s3;
	    cin>>s1>>s2;
	    s3=s1+s2;
	    int even=0,odd=0,fr[26];
	    memset(fr,0,sizeof(fr));
	    for(int i=0;i<(m+n);i++){
	        fr[s3[i]-'a']++;
	    }
	    for (int i = 0; i < 26; i++) {
	        if(fr[i]%2==1)odd++;
	    }
	    if((m+n)%2==0){
	        if(odd==0)cout<<"yes"<<endl;
	        else cout<<"no"<<endl;
	    }
	    else if((m+n)%2==1){
	        if(odd==1)cout<<"yes"<<endl;
	        else cout<<"no"<<endl;
	    }
	    
	
	    
	}
	return 0;
}
