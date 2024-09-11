#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin>>s;
    long int maxLen = 1;
    long int currLen = 1;
    long int n = s.length();
    for(int i=0; i<(n-1); ++i){
        if(s[i] == s[i+1]){
            currLen++;
            maxLen = max(maxLen, currLen);
        }
        else{
            currLen = 1;
        }
    }
    
    std::cout << maxLen << std::endl;
    
    return 0;
}