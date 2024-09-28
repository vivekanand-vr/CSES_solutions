#include <bits/stdc++.h>
using namespace std;
 
void toh (int n, int src, int help, int dest)
{
    if(n==1) cout<<src<<" "<<dest<<"\n";
    
    else {
    
    toh((n-1), src, dest, help);
    cout<<src<<" "<<dest<<"\n";
    toh((n-1), help, src, dest);
        
    }
    
}
 
int main()
{
    int n; cin>>n;
    cout<<pow(2, n)-1<<"\n";
    toh(n, 1, 2, 3);
 
    return 0;
}
