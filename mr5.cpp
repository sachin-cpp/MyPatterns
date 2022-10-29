#include<bits/stdc++.h>
using namespace std;
#define ct 1000000007
#define ll long long int
int ways(ll n,vector<ll>&dp){
    if(n<0) return 0;
    if(n==0) return 1;
    if(dp[n]) return dp[n];
    ll ans=0;
    for(int i=1;i<=6;i++){
        ans += ways(n-i,dp);
    }
    dp[n] = ans;
    return ans;
}
    int main(){
        //code 
        ll n;
        cin>>n;
        vector<ll> dp(n+1,0);
        cout<<ways(n,dp)%ct;


        return 0;
    }
