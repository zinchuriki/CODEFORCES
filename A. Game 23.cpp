#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;


int total_number(vector<vector<int>>& dp, vector<int>& chocolates, int n, int sum){
  
  
  
  if(n==1){
    return chocolates[1];
  }
  
  
  if(n<=0)
  return 0;
  
  if(dp[n][sum]!=-1)
  return dp[n][sum];
  
  return dp[n][sum]=max(total_number(dp,chocolates,n,sum+chocolates[n]),total_number(dp,chocolates,n-1,sum));
  
  
  
  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        
        int n;
        cin>>n;
        
        vector<int> chocolates(n+1);
        vector<vector<int>> dp(n+1,vector<int>(100000000,-1));
        
        for(int i=1; i<=n; ++i) cin>>chocolates[i];
       cout<<total_number(dp,chocolates,n,0)<<'\n';
        
        
        
    }
return 0;

}