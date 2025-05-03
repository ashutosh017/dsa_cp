#include <bits/stdc++.h>
using namespace std;
int char_counter(string s,char c){
  int count = 0;
  for (int i = 0; i < s.size(); i++) {
    if(s[i]==c)count++;
  }
  return count;
}
int u_size(vector<pair<char,int>>mp){
  int size=0;
  for (int i = 0; i < mp.size(); i++) {
    size+=mp[i].second;
  }
  return size;
}
string return_s(string u){
  string s;
  char c = u[0];
  set<char>st;
  for (int i = 0; i < u.size(); i++)
  {
    st.insert(u[i]);
  }
  
  vector<pair<char,int>>mp;
  for (int i = 0; i < st.size(); i++) {
    auto it = st.begin();
    for(int j=0;j<i;j++)
    {
        it++;
    }
    mp[i].first = *it;
    if(char_counter(u,*it)%2==0)
    mp[i].second = 2;
    else mp[i].second = 1;
  }
  int i = 0, j = 0;;
  vector<pair<char, int>>::iterator iter;
  while(iter!=mp.end()){
    for(j = 0;j<mp[i].second;j++){
      s[i] = mp[i].first;
      i++;
    }
    iter++;
  }
  return s;
  
}
// Above functions are all bull shit!
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   string u;
	   cin>>u;
	   cout<<return_s(u)<<endl;
	}
    // Wrong answer!
	return 0;
}
