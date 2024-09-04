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
    
    ll n, sum=0; cin>>n;
    int arr[n];
    for(int i=0; i<n; ++i){
        cin>>arr[i]; sum+=arr[i]; }
    
    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    for(int i=n-1; i>=0; --i)
    {
        for(int j=i; j<n; ++j)
        {
            if(i==j) {
                dp[i][j] = arr[i];
            }
            else {
                dp[i][j] = max(arr[i]-dp[i+1][j], arr[j]-dp[i][j-1]);
            }
        }
    }
    
    cout<<(dp[0][n-1]+sum)/2;
    
	return 0;
}