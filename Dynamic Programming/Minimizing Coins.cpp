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
    
    ll n, k; cin>>n>>k;
    ll arr[n];
    for(int i=0; i<n; ++i) 
        cin>>arr[i];
    
    vector<ll> dp(k+1, INT_MAX);
    dp[0]=0;
    
    for(int i=1; i<=k; ++i){
        for(int j=0; j<n; ++j){
            if(i-arr[j]>=0){
                dp[i]= min(dp[i], dp[i-arr[j]]+1);
            }
        }
    }
    
    cout<<(dp[k]==INT_MAX ? -1 : dp[k]);
	
	return 0;
}