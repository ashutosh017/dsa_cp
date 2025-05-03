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
    int t;cin>>t;while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> bal(n + 1);
        for(int j = 0; j < n; j++)
            if(s[j] == '(')
                bal[j + 1] = bal[j] + 1;
            else
                bal[j + 1] = bal[j] - 1;

        if(bal.back() != 0)
            cout << -1 << endl;
        else
        {
            if(*min_element(bal.begin(), bal.end()) == 0 || *max_element(bal.begin(), bal.end()) == 0)
            {
                cout << 1 << endl;
                for(int j = 0; j < n; j++)
                {
                    if(j) cout << " ";
                    cout << 1;
                }
                cout << endl;
            }
            else
            {
                cout << 2 << endl;
                vector<int> ans;
                int cur = 0;
                while(cur < n)
                {
                    int w = (s[cur] == '(' ? 1 : 2);
                    do
                    {
                        cur++;
                        ans.push_back(w);
                    }
                    while(bal[cur] != 0);
                }
                for(int j = 0; j < n; j++)
                {
                    if(j) cout << " ";
                    cout << ans[j];
                }
                cout << endl;
            }
        }
    }    
}