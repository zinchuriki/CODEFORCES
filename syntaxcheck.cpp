#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;


int build(vector<vector<int>>& dp,vector<int>& heights, int idx,int s){
  
  
    if(s==0)
    return 0;
    
    if(idx<0 || s<0)
    return INT_MAX;
    
    if(dp[idx][s]!=-1)
    return dp[idx][s];
    
    return min(1+build(dp,heights,idx,s-heights[idx]),build(dp,heights,idx-1,s));
    
    
  
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n,s;
        cin>>n>>s;
        
        vector<int> heights(n);
        
        for(int i=0; i<n; ++i) cin>>heights[i];
        
        vector<vector<int>> dp(3000,vector<int>(5000,-1));
        
        cout<<build(dp,heights,n-1,s)<<'\n';
          
        
        
        
        
    }
return 0;

}