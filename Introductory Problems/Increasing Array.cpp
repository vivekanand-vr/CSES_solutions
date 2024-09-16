#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main()
{
    ll n, c=0; cin>>n;
    ll arr[n];
    for(ll i=0; i<n; i++) cin>>arr[i];
    for(ll i=1; i<n; i++)
    {
            if(arr[i]<arr[i-1]) 
            {
                c+=arr[i-1]-arr[i];
                arr[i] = arr[i-1]; }
    }
    
    cout<<c;
    
}
