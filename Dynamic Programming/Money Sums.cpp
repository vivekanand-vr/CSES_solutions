#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
 
typedef long long ll;
typedef long double ld;
const int MOD = 1000000007;
const int maxN = 1e5+1;
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(0); 
    cin.tie(0);                   
    cout.tie(0);
    
    int n; cin>>n;
    int c[n+1];
    for(int i=1; i<=n; ++i) cin>>c[i];
    
    vector<vector<bool>> dp(n+1, vector<bool>(maxN, 0));
    dp[0][0] = true;
    
    for(int i=1; i<=n; ++i)
    {
        for(int j=0; j<=maxN; ++j)
        {
            dp[i][j] = dp[i-1][j];
            if(j-c[i] >= 0 and (dp[i-1][j-c[i]]==true))
            {
                dp[i][j]=true;
            }
                
        }
    }
    vector<int> res;
    for(int i=1; i<=maxN; ++i){
        if(dp[n][i]==1) res.PB(i);
    } 
    
    cout<<res.size()<<"\n";
    for(auto i : res) cout<<i<<" ";
    
	return 0;
}