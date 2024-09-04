#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(a) a.begin(),a.end()
 
typedef long long ll;
typedef long double ld;
const int MOD = 1000000007;
using namespace std;

long long int inverse(long long int i){
    if(i==1) return 1;
    return (MOD - ((MOD/i)*inverse(MOD%i))%MOD+MOD)%MOD;
}


int main() {
	ios_base::sync_with_stdio(0); 
    cin.tie(0);                   
    cout.tie(0);
    
    ll n, k; cin>>n>>k;
    ll arr[n];
    for(int i=0; i<n; ++i) cin>>arr[i];
    
    vector<pair<ll, ll>> dp(1<<n); //storin for all subsets 2 pow n (1 << n)
    dp[0] = {1, 0};
    
    for(int i=1; i<(1<<n); ++i)
    {
        dp[i] = {n+1, 0};
        for(int j=0; j<n; ++j)
        {
            if((i&(1<<j))!=0)
            {
                pair<ll, ll> temp = dp[i^(1<<j)];
                
                if(temp.second+arr[j]<=k)
                    { temp.second += arr[j];}
                    
                else 
                    { temp.first++; temp.second = arr[j]; }
                
                dp[i] = min(dp[i], temp);
            }
        }
    }
    
    cout<<dp[(1<<n)-1].first;
	return 0;
}