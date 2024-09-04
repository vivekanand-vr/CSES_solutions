#include<bits/stdc++.h>
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
    
    int n, k; cin>>n>>k;
    int h[n+1], s[n+1];
    for(int i=1; i<=n; ++i) cin>>h[i];
    for(int i=1; i<=n; ++i) cin>>s[i];
    
    vector<vector<int>> dp(n+1, vector<int>(k+1, 0));
    //dp[0][0]=0;
    
    for(int i=1; i<=n; ++i)
    {
        for(int j=0; j<=k; ++j)
        {
            dp[i][j] = max(dp[i][j], dp[i-1][j]);
            
            if(j-h[i]>=0)
            {
                dp[i][j] = max(dp[i][j], dp[i-1][j-h[i]]+s[i]);
            }
        }
    }
    
    cout<<dp[n][k];
	
	return 0;
}