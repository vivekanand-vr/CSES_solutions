#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll x, y; cin>>x>>y;
        ll a = max(x, y);
        a = (a*a) - (a-1);
        
        if(x > y)
        {   
            if(x % 2 == 0) a += abs(x-y);
            else a -= abs(y-x);
        }
        
        else if (y > x) {
           if(y % 2 == 0) a -= abs(x-y);
           else a += abs(y-x);
        }
        
        cout<<a<<"\n";
    }
 
    return 0;
}
