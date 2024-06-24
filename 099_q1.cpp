#include <bits/stdc++.h>
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vector<int> v(n);
    for(int i =0; i<n; i++)cin>>v[i];
    map<int, int> m;
    for(auto i: v){
    	m[i]++;
    }
    for(auto i: m){
    	if(i.second==1){
    		cout<<"element is: "<<i.first<<'\n';
    		break;
    	}
    }

   
}