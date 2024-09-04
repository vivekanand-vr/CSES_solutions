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
    
    string s1, s2; cin>>s1>>s2;
    int m = s1.length();
    int n = s2.length();
    
    std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1, 0));
    for(int i=0; i<=m; ++i) dp[i][0] = i;
    for(int j=0; j<=n; ++j) dp[0][j] = j;
    for(int i=1; i<=m; ++i)
    {
            for(int j=1; j<=n; ++j)
            {
                if(s1[i-1]==s2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                
                else {
                    dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
                }
            }
        }

    cout<<dp[m][n];
    
    
	return 0;
}