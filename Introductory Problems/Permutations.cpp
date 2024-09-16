#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main()
{   
    
    long int n; cin>>n;
    
    // Corner cases
    if(n==1) { cout<<1; }
    else if(n==2 or n==3 ) cout<<"NO SOLUTION";
    else if(n==4) cout<<"2 4 1 3";
    
    else
    {
        long int i=1, j=2;
        while(i<=n)
        {
            cout<<i<<" ";
            i+=2;
        }
        
        while(j<=n)
        {
            cout<<j<<" ";
            j+=2;
        }
    }
}
