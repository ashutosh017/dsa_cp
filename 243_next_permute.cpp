#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, a, b) for(int i=a;i<=b;i++)
#define ford(i,a,b) for(int i=a;i>=b;i--)
#define rep(i, n) forn(i, 0, n-1)
#define fi first
#define se second
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(),x.end()
#define nline '\n'

bool nextPermutation(vi &v){
	int ind = -1,n=v.size();
    ford(i,n-2,0){
    	if(v[i]<v[i+1]){
    		ind = i;
    		break;
    	}
    }
    if(ind == -1)return false;
    ford(i,n-1,ind){
    	if(v[i]>v[ind]){
            swap(v[i],v[ind]);
            sort(ind+1+all(v));
            break;
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;vi v(n);rep(i,n)cin>>v[i];    
    sort(all(v));
    do{
    	for(auto i:v)cout<<i<<' ';cout<<nline;
    }while(nextPermutation(v));
}