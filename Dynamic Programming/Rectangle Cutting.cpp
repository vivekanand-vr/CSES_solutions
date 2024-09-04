#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
 
typedef long long ll;
typedef long double ld;
const int MOD = 1000000007;
const int maxN = 1e6+1;
using namespace std;
 
 ll dp[maxN+1];
 
int main() {
	ios_base::sync_with_stdio(0); 
    cin.tie(0);                   
    cout.tie(0);
    
    ll l, b; cin>>l>>b;
    
    vector<vector<int>> dp(l+1, vector<int>(b+1, 0));
    for(int i=1; i<=l; ++i)
    {
        for(int j=1; j<=b; ++j)
        {
            if(i==j)
                dp[i][j]==0;
            
            
            else 
            {
                dp[i][j] = 1e9+7;
            
                for(int k=1; k<=i; k++)
                    dp[i][j] = min(dp[i][j], dp[i-k][j]+dp[k][j]+1);
                
                for(int k=1; k<=j; ++k)
                    dp[i][j] = min(dp[i][j], dp[i][j-k]+dp[i][k]+1);
                
            }
        }
    }
    
    cout<<dp[l][b];
	return 0;
}