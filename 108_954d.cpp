#include <bits/stdc++.h>
using namespace std;

// Values
#define ll long long
#define nline '\n'
#define mod 1000000007

// Loops
#define forn(i, a, b) for(int i=a;i<=b;i++)
#define ford(i,a,b) for(int i=a;i>=b;i--)
#define forc(i,a,b) for(char i=a;i<=b;i++)
#define rep(i, n) forn(i, 0, n-1)

// Containers
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vb vector<bool>
#define pii pair<int, int>
#define pll pair<ll, ll>

// Methods
#define fi first
#define se second
#define pb push_back
#define ppb pop_back
#define ppf pop_front
#define all(x) x.begin(),x.end()

bool containsZero(string s){
	int n=s.size();
	if(n<3)return 0;
	if(n==3){
		if(s[0]=='0' || s[2]=='0')return 1;
		return 0;
	}
	rep(i,n){
		if(s[i]=='0')return 1;
	}
	return 0;
}

int cntones(string s){
	int n=s.size();
	int cnt=0;
	// if(n==3)return s[1]=='1';
	rep(i,n)if(s[i]=='1')cnt++;
	return cnt;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n;cin>>n;string s;cin>>s;
    	if(containsZero(s))cout<<0<<nline;
    	else if(n==2)cout<<(((s[0]-'0')*10) +(s[1]-'0'))<<nline;
    	else{
    		int ones = cntones(s);
    		int sum=0;
    		rep(i,n)sum+=(s[i]-'0');
    		sum-=ones;
    		int l=0,r=1,minn=INT_MAX;
    		rep(i,n-1){
    			// cout<<minn<<' '<<((s[i]-'0')*10 +(s[i+1]-'0'))<<nline;
    			 minn = min(minn,(s[i]-'0')*10 +(s[i+1]-'0'));

    		}
    		cout<<sum<<' ';
    		if(minn%2!=1)
    		sum-=(minn%2);
    		// cout<<sum<<' ';
    		if(minn/10!=1)
    		sum-=minn/10;
    		// cout<<sum<<' ';
    		// int lint = s[l]-'0',rint=s[r]-'0';
    		if(minn>1)
    		sum+=minn;
    		// cout<<sum<<' '<<nline;
    		cout<<minn<<' ';
    		cout<<sum<<nline;
    	}

    }    
}