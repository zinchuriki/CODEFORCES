#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int possible(int temp_sum,vector<vector<int>>& dp,int idx,vector<int>& vec){
  
  if(temp_sum<0)
  return 0;
  
  if(idx<0)
  return 0;
  
  
  if(dp[idx][temp_sum]!=-1)
  return dp[idx][temp_sum];
  
  if(temp_sum==0)
  {
    dp[idx][temp_sum]=1;
    return dp[idx][temp_sum];
  }
  
  
  dp[idx][temp_sum]=max(possible(temp_sum-vec[idx],dp,idx-1,vec),possible(temp_sum,dp,idx-1,vec));
  
  return  dp[idx][temp_sum];
  
  
  
  
  
  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        
        int n;
        cin>>n;
        vector<int> vec(n+1);
        int sum=0;
        for(int i=1; i<=n; ++i){
          cin>>vec[i];
          sum+=vec[i];
        } 
        vector<vectorint>> dp(n+1,vector<int>(200001,-1));
        
      if(possible(sum,dp,n,vec)>0)
      cout<<"YES"<<'\n';
      else cout<<"NO"<<'\n';
      
      
        
        
    }
return 0;

}