#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main()
{
    ll n; cin>>n; 
    
    ll sum = (n*(n+1))/2;
    if(sum & 1) { cout<<"NO"; return 0; }
    
    ll m = sum/2;
    std::vector<ll> p;
    std::vector<ll> q;
    
    for(ll i=n; i>=1; i--)
    {
        if(i <= m) { p.push_back(i); m -=i; }
        else q.push_back(i);
    }
   
        cout<<"YES\n";
        cout<<p.size()<<"\n";
        for( auto i:p) cout<<i<<" ";
        
        cout<<"\n";
        
        cout<<q.size()<<"\n";
        for( auto i:q) cout<<i<<" ";
    
}
