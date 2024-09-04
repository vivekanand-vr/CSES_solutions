#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
 
typedef long long ll;
typedef long double ld;
const int MOD=1000000007;

using namespace std;
 
 
int main() {
	ios_base::sync_with_stdio(0); 
    cin.tie(0);                   
    cout.tie(0);
    
    ll n; cin>>n;
    char arr[n][n];
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cin>>arr[i][j];
        } 
    }
    
    vector<vector<int>>dp(n, vector<int>(n, 0));
    
    dp[0][0]= (arr[0][0] == '.') ? 1 : 0; //first cell
    
	for(int i=1; i<n; ++i) { //initialise first row
	    dp[i][0] = (arr[i][0]=='.') ? dp[i-1][0] : 0;
	}
	
	for(int j=1; j<n; ++j){ //initialise first column
	    dp[0][j] = (arr[0][j]=='.') ? dp[0][j-1] : 0;
	}
	
	for(int i=1; i<n; ++i){ //fill dp table
	    for(int j=1; j<n; ++j){
	        if(arr[i][j]=='.'){
	            dp[i][j] = dp[i-1][j] + dp[i][j-1];
	            dp[i][j]%=MOD;
	        }
	    }
	}
	
	//for(auto i:dp){
	    //for(auto x:i) cout<<x<<" ";  cout<<"\n";
	//}
	
	cout<<dp[n-1][n-1];
	
	return 0;
}