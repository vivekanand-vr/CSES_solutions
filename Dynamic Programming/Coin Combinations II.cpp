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
    
    ll n,x;
    cin>>n>>x;
    vector<int> c(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>c[i];
    }
    vector<vector<int>> dp(n+1, vector<int> (x+1,0));
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=x;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j-c[i]>=0)
            {
                dp[i][j]+=dp[i][j-c[i]];
                dp[i][j]%=MOD;
            }
        }
    }
    cout<<dp[n][x];
	
	return 0;
}