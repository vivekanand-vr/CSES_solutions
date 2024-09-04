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
    
    ll n; cin>>n;
    vector<int> dp(n+1, INT_MAX);
    dp[0]=0;
    
    for(ll i=1; i<=n; ++i)
    {
        string s = to_string(i);
        for(int j=0; j<s.size(); ++j)
        {
            dp[i] = min(dp[i], dp[i-(s[j]-'0')]+1);
        }
    }
    
    //for(auto i:dp) cout<<i<<" "; cout<<"\n";
    cout<<dp[n];
	
	return 0;
}