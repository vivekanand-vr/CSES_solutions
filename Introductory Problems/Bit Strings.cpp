#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
 
 
int main()
{
    ll n; cin>>n;
    ll res = 1;
    for(int i=1; i<=n; i++)
    {
        res *= 2;
        res %= mod;
    }
    
    cout<<res;
    
    return 0;
}
