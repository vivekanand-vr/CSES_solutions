#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
 
 
int main()
{   
    ll t; cin>>t; // testcases
    
    while(t--){
        
        ll a, b; cin>>a>>b;
        
        if((min(a, b)*2) < max(a, b)) cout<<"NO\n";
        
        else {
            if((a+b) % 3 == 0)cout<<"YES\n"; // if multiple of 3 then we can make both zero 
            else cout<<"NO\n";
        }
        
    }
    
    
    return 0;
}