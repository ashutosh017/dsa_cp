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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
    	int n,k,pb,ps;cin>>n>>k>>pb>>ps;
    	vi p(n+1,0),a(n+1,0);
    	rep(i,n)cin>>p[i+1];
    	rep(i,n)cin>>a[i+1];
        
    	int len = min(n,k);
    	ll sashas_max =INT_MIN, bodyas_max=INT_MIN, sashas_score_till_last_iteration=0,bodyas_score_till_last_iteration=0;
    	rep(i,len){
    		sashas_max = max(sashas_max, sashas_score_till_last_iteration+((k-i)*1ll*a[ps]));
    		bodyas_max = max(bodyas_max, bodyas_score_till_last_iteration+((k-i)*1ll*a[pb]));
    		sashas_score_till_last_iteration+=a[ps];
    		bodyas_score_till_last_iteration+=a[pb];
    		ps = p[ps],pb=p[pb];
    	}
        // cout<<sashas_max<<" "<<bodyas_max<<nline;
    	if(sashas_max==bodyas_max)cout<<"Draw\n";
    	else if(sashas_max<bodyas_max)cout<<"Bodya\n";
    	else cout<<"Sasha\n";

    }    
}