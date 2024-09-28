#include <bits/stdc++.h>
using namespace std;
 
vector<int> b2D(int dec, int len)
{
    vector <int> res;
    for(int i=len-1; i>=0; i--){
        int sft = dec>>i;
        (sft&1) ? res.push_back(1) : res.push_back(0);
    }
    return res;
}
 
vector <int> getGray(vector<int>v){
    
    vector <int> g;
    g.push_back(v[0]);
    
    for(int i=0; i<(int)v.size()-1; i++)
    {
        int x = v[i]^v[i+1];
        g.push_back(x);
    }
    
    return g;
}
 
int main()
{
    int n; cin>>n;
    std::vector<int> bin;
    std::vector<int> grey;
    
    for(int i=0; i<pow(2, n); i++){
        bin = b2D(i, n);
        grey = getGray(bin);
        
        for(int c : grey) cout<<c;
        cout<<"\n";
        
        bin.clear();
        grey.clear();
    }
 
    return 0;
}
