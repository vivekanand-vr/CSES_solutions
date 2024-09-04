#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
 
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
    
    int n; cin>>n;
    int sum = (n*(n+1))/2;
    if(sum&1){
        cout<<0<<"\n";
        return 0;
    }
    
    sum /= 2;
    std::vector<vector<int>> dp(n+1, vector<int>(sum+1, 0));
    dp[0][0] = 1;
    
    for(int i=1; i<=n; ++i)
    {
        for(int j=0; j<=sum; ++j)
        {
            dp[i][j] = dp[i-1][j];
            if(j-i >= 0){
                dp[i][j] = (dp[i][j]+dp[i-1][j-i])%MOD;
            }
        }
    }
    
    //for(auto i:dp){
        //for(auto j:i) cout<<j<<" "; cout<<"\n";
    //}
    
    cout<<(dp[n][sum]*inverse(2))%MOD; //modulo multiplicative inverse
    
	return 0;
}