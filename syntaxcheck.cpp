#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;




int backt(vector<int>& vec, int i,int sum,vector<vector<int>>& cont){
    
    if(cont[i][sum]!=-1)
    return cont[i][sum];
    if(sum<0)
      return 0;
    
    
    if(i>=vec.size() || sum==0){
      if(sum==0)
        return 1;
      return 0;
    }
    
    cont[i][sum]=max(backt(vec,i+1,sum-vec[i],cont),backt(vec,i+1,sum,cont));
    return cont[i][sum];
    
  
  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        
int n,s;
cin>>n>>s;

vector<int> vec(n);
vector<vector<int>> cont(n,vector<int> (5001,-1));
for(int i=0; i<n; ++i){
  cin>>vec[i];
}
if(backt(vec,0,s,cont)==1)
cout<<"YES"<<'\n';
else cout<<"NO"<<'\n';
        
    }
return 0;

}




