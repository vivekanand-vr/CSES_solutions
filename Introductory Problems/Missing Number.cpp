#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n; cin>>n;
    long long sum = (n*(n+1))/2;
    //cout<<sum<<" ";
    
    while(n-- > 1){
        long long x; cin>>x;
        sum -= x;
    }
    cout<<sum;
    return 0;
}