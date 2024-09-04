#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
 
typedef long long ll;
typedef long double ld;
const int MOD = 1000000007;
const int MAX = 1000001;
using namespace std;
ll dp[1000001][2];

void pre(){
    
    dp[1][0]=dp[1][1]=1;
    for(int i=2;i<1000001;i++)
    {
        dp[i][0]=(4*dp[i-1][0]+   dp[i-1][1])%MOD;
        dp[i][1]=(  dp[i-1][0]+ 2*dp[i-1][1])%MOD;
    }
}
 
int main() {
	ios_base::sync_with_stdio(0); 
    cin.tie(0);                   
    cout.tie(0);
    pre();

    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        cout<<(dp[n][0]+dp[n][1])%MOD<<"\n";
    }
    
	return 0;
}