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
    
    ll n; ll m; cin>>n>>m;
    int arr[n+2]; //add 2 for boundary conditions
    for(int i=1; i<=n; ++i) cin>>arr[i];
    
    
    vector<vector<int>> dp(n+2, vector<int>(m+2, 0));
    if(arr[1]==0)
    {
        // every integer from 1 to n is possible
        for(int i=1; i<=m; ++i) dp[1][i]=1;
    }
    else
    { dp[1][arr[1]]=1; }
    
    
    for(int i=2; i<=n; ++i){
        for(int j=1; j<=m; ++j){
            if(arr[i]==0 or arr[i]==j){
                dp[i][j] = ((dp[i-1][j-1] + dp[i-1][j])%MOD + dp[i-1][j+1])%MOD;
            }
        }
    }
    
    ll res = 0;
    for(int j=1; j<=m; ++j) {
        res+= dp[n][j];
        res%=MOD;
    }
    
    cout<<res;
    
    
	return 0;
}