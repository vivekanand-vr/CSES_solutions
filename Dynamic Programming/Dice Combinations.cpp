#include<bits/stdc++.h>
#define X long long int TTXC=1; cin>>TTXC;
#define F first
#define S second
#define PB push_back
#define MP make_pair
 
typedef long long ll;
typedef long double ld;
const int MOD=1000000007;

using namespace std;
 
 
int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);                   
    cout.tie(0);
    
    ll n; cin>>n;
    vector<ll> dp(n+1, 0);
    dp[0]=1;
    
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=6; ++j){
            if(i-j>=0){
                dp[i] = dp[i] + dp[i-j];
                dp[i]%=MOD;
            }
        }
    }
    
    cout<<dp[n];
    return 0;
}