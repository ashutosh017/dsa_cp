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
#define mod 1000000007

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n;cin>>n;
    	vi v(n+1,0);rep(i,n)cin>>v[i+1];
    	ford(i,n-1,0)v[i]=min(v[i],v[i+1]);
    	int k;cin>>k;
    	int num = INT_MAX;
    	rep(i,n){
    		int d = v[i+1]-v[i];
    		if(d)num = min(num,k/d),k-=num*d;
    		cout<<num<<" \n"[i==n-1];
    	}
    }    
}





// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t,n,k,num,a[200010];
//     cin>>t;
//     while(t--)
//     {
//         cin>>n;
//         for(int i=1;i<=n;i++)  cin>>a[i];
//         for(int i=n-1;i;i--)  a[i]=min(a[i+1],a[i]);
//         cin>>k;
//         num=1e9;
//         for(int i=1;i<=n;i++)
//         {
//             int d=a[i]-a[i-1];
//             if(d)  num=min(num,k/d),k-=num*d;
//             cout<<num<<" ";
//         }
//         cout<<'\n';
//     }
// }