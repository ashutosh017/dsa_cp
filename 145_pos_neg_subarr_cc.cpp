#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, a, b) for(int i=a;i<=b;i++)
#define ford(i,a,b) for(int i=a;i>=b;i--)
#define rep(i, n) forn(i, 0, n-1)
#define fi first
#define se second
#define vi vector<int>
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(),x.end()

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  int n,c1=0,c2=0;
	  cin>>n;
	  vi b(n),c(n);
	  rep(i,n){
	    cin>>b[i];
	    c[i] = pow(2,i)*b[i];
	  }
	  rep(i,n){
	    if(c[i]<0)c1++;
	    if(c[i]>0)c2++;
	    forn(j,i+1,n-1){
	      if((c[i]+c[j])<0)c1++;
	      if((c[i]+c[j])>0)c2++;
	    }
	  }
	  cout<<abs(c1-c2)<<endl;
	}
	return 0;
}
