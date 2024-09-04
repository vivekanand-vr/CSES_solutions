#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(a) a.begin(),a.end()
 
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
    
    ll n; cin>>n;
    vector<tuple<ll, ll, ll>> projs(n); //tuple to store 3 values
    for(int i=0; i<n; ++i){
        int a, b, p; cin>>a>>b>>p;
        projs[i] = {b, a, p}; //storing ending day in first index for sorting purpose
    }
    
    sort(all(projs)); //sorts according to ending values
    ll best = 0;
    map<ll, ll>dp; //maps projects to rewards till date
    dp[0] = 0; 
    
    for(auto proj : projs){
        ll a, b, p; 
        tie(b, a, p) = proj; //tuple unpacking
        auto it = dp.lower_bound(a); //lower bound of start day of ith project
        it--;
        ll reward = it->second + p; //get lowerbound`s reward and current reward
        best = max(best, reward); //update max reward 
        dp[b] = best; //set the best total rewards of that project
    }
    
    cout<<best;
	return 0;
}