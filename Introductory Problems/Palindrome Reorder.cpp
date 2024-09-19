#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
 
 
int main()
{   
    string s; cin>>s; 
    unordered_map<char, int> mp;
    for(int i=0; i<s.length(); i++)
    {
        mp[s[i]]++; // get frequency of each char
    }
    
    bool flag = false;
    string f1 = "";
    string f2 = "";
    string f3 = "";
    
    for(auto i:mp)
    {
        if(i.second % 2 != 0){
            
            // There can only be one odd char in a palindrome
            if(flag==false) 
            {
                flag=true;
                for(int j=0; j<i.second; j++) f2.push_back(i.first);
            }
            
            else {
                cout<<"NO SOLUTION";
                return 0;
            }
        }
    }
   
    // Re arrange the characters in a palindrome manner
    for(auto i:mp)
    {   
       if(i.second%2==0)
       {
           for(int j=0; j<i.second/2; j++){
             f1.push_back(i.first);
             f3.push_back(i.first);
           } 
           
       }
    }
    
    reverse(f3.begin(), f3.end());
    
    // f2 is the odd chars at the middle 
    cout<<f1<<f2<<f3;
    
    return 0;
}
