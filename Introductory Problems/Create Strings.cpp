#include <bits/stdc++.h>
using namespace std;
 
set<string> con;
void  perm(string s, int low, int high)
{
    if(low==high) con.insert(s);
    else{
        
        for(int i=low; i<=high; i++)
        {
            swap(s[i], s[low]);
            perm(s, low+1, high);
            swap(s[i], s[low]);
        }
    }
}
 
int main()
{
    string s; cin>>s;
    perm(s, 0, s.length()-1);
    
    cout<<con.size()<<"\n";
    for(string s:con) cout<<s<<"\n";
 
    return 0;
}
