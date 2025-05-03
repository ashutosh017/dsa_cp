
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
	  string s;
	  cin>>s;
	  int a = 10*(int (s[0])-48)+(int)(s[1]-48);
	  int b = 10*(int (s[3])-48)+(int)(s[4]-48);
	  if(a<=12&&b<=12)cout<<"both"<<endl;
	  else if(b<=12)cout<<"DD/MM/YYYY"<<endl;
	  else cout<<"MM/DD/YYYY"<<endl;
	}
	return 0;
}
