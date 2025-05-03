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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t; while(t--){
        int a,b,c;cin>>a>>b>>c;
        if(b>c)swap(b,c);
        if(b==0 && c!=0 && (a-1)%c==0){
            forn(i,2,a){
                rep(j,c)cout<<i<<' ';
                i+=c-1;
            }
        }
        else cout<<-1;
        cout<<nline;
    }    
}