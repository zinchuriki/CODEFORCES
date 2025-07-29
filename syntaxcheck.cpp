#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   int n,w;
    cin>>n>>w;
    int a;
    unordered_map<int,vector<int>> hash;
    
    for(int i=0; i<n; ++i){
      cin>>a;
      hash[a].push_back(i+1);
    }
    bool found=false;
    for(auto it=hash.begin(); it!=hash.end(); ++it){
      
          vector<int> v=it->second;
          
          
          if(v.size()>1){
            cout<<v[0]<<" "<<v[1];
            found=true;
            break;
          } else{
                vector<int> v1=hash[w-v[0]];
                if(v1.size()>0){
                  cout<<v[0]<<" "<<v1[0];
                  found =true;
                  break;
                }
            
          }
      
    }
    if(!found) return -1;
 


   return 0;

}