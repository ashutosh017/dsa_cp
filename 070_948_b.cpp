#include <bits/stdc++.h>
using namespace std;

// Values
#define ll long long
#define nline '\n'
#define mod 1000000007

// Loops
#define forn(i, a, b) for(ll i=a;i<=b;i++)
#define ford(i,a,b) for(ll i=a;i>=b;i--)
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


void rec(int ind, int x,vi &v,vi &ans){
    if(ind>5){
        return;
    }    
    if(x==0){
        ans=v;
    }
    v[ind]=1;
    rec(ind+2, x-(1<<ind),v,ans);
    v[ind]=0;
    rec(ind+1,x,v,ans);
    v[ind]=-1;
    rec(ind+2,x+(1<<ind),v,ans);
}

int setBitNumber(int n)
{
    if (n == 0)
        return 0;
 
    int msb = 0;
    // n = n / 2;
    while (n != 0) {
        n = n / 2;
        msb++;
    }
 
    return (1 << msb);
}

int findBit(int x){
    int cnt=0;
    while(x!=0){
        cnt++;
        x/=2;
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        // rep(i,33)
    
        // cout<<findBit(i)<<' ';

    int t;cin>>t;while(t--){
    	int n;cin>>n;
    	// vi v(33,0);
    	// cout<<setBitNumber(n)<<nline;
        // int ind = 33;
        // while(n!=0)
        // {
        //     rep(i,33){
        //     if((1<<i)>=abs(n) && (i<=(ind-2) || i>=(ind+2))){
        //     // cout<<n<<' ';
                
        //         // n-=(2>>i);
        //         if(n<0){
        //             v[i]=-1;
        //             n+=(1<<i);
        //         }
        //         else{
        //             v[i]=1;
        //             n-=(1<<i);
        //         }
        //         ind=i;
        //         break;
        //     }
        // }
        // }

        // // vi ans(6,0);
        // // rec(0,n,v,ans);
        // rep(i,33)cout<<v[i]<<' ';cout<<nline;


        cout<<"32\n";
        for(int i=0; i<32; i++,n>>=1){
            if(n&1){
                if(n&2){
                    cout<<"-1 ";
                    n++;
                }
                else cout<<"1 ";
            }
            else cout<<"0 ";
        }
        cout<<nline;

    }    
}