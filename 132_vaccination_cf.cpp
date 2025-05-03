#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
#define ll long long
#define forn(i, a, b) for(int i=a;i<=b;i++)
#define ford(i,a,b) for(int i=a;i>=b;i--)
#define rep(i, n) forn(i, 0, n-1)
#define fi first
#define se second
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(),x.end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;while(t--){
        ll n,k,d,w;cin>>n>>k>>d>>w;
        vll v(n);rep(i,n)cin>>v[i];

        // Implementation
        // ll temp_k = k,temp_w=w,remaining_vaccines=0,diff = 0,lastPetientIndex=0,vaccinePackCount=0;
        // for(int i = 0;i<n;i+=lastPetientIndex){
        //     for(int j=i+1;temp_k && temp_w;j++){
        //         diff+=abs(v[i]-v[j]);
        //         lastPetientIndex = j;
        //         temp_k--,temp_w--;
        //     }
        //     diff=0;
        //     temp_w = w;
        //     while(temp_k && diff<=d && temp_w){
        //         ll temp_i = lastPetientIndex;
        //         diff+=abs(v[temp_i]-v[++lastPetientIndex]);
        //         temp_k--;
        //         temp_w--;
        //     }
        //     temp_w = w;
        //     diff=0;
        //     temp_k = k;
        //     vaccinePackCount++;
        // }
        // cout<<vaccinePackCount<<endl;

            ll i,diff = 0,vaccine_openining_ind = -1,temp_k=k,remaining_vaccine=k,vaccine_life=d,vaccine_pck_cnt=0;
        for(int j = 0;j<n;j+=vaccine_openining_ind){
            for(i = vaccine_openining_ind+1;temp_k&&diff<=w;i++){
                diff+=abs(v[vaccine_openining_ind+1]-v[i]);
                temp_k--;
            } 
            // temp_k--;
            vaccine_openining_ind = i-1;
            remaining_vaccine = k-temp_k;
            diff=0;
            while(remaining_vaccine-- && diff<=w && vaccine_life--){
                diff+=abs(v[vaccine_openining_ind]-v[i]);
                i++;
            }
            remaining_vaccine = 0;
            vaccine_life = d;
            vaccine_openining_ind = i;
            temp_k = k;
            diff=0;
            vaccine_pck_cnt++;
        }
        cout<<vaccine_pck_cnt<<endl;
    }

    return 0;
}

