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
    ll arr[n];
    for(int i=0; i<n; ++i) cin>>arr[i];
    
    std::vector<int>dp;
    for(int i:arr){
        auto it = lower_bound(all(dp), i);
        if(it == dp.end()){
            dp.PB(i);
        }
        else *it = i;
    }
    
    cout<<dp.size();
    
	return 0;
}