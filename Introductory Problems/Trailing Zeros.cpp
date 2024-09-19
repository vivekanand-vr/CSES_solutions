#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
 
 
int main()
{
    ll n; cin>>n;
    ll res = 0;
    
    // keep dividing the number by the multiples of 5 until it becomes 0
    for(ll i=5; n/i>=1; i*=5) res += n/i;
    
    cout<<res;
    
    return 0;
}
