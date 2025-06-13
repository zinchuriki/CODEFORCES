#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int count(int n){
    
    int ans=0;
    
    
    while(1){
         int a=0;
         
           if(n>9)
        ans++;
        else break;
        
        while(n>0){
            a+=n%10;
            n/=10;
        }
        
      
        n=a;
        
        
    }
    return ans;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  string s;
  cin>>s;
  int ans=0;
  int a=0;
  
  for(int i=0; i<s.size(); ++i){
      a+=s[i]-'0';
  }
  if(s.size()>1)
  ans++;
  ans+=count(a);
  cout<<ans;
  
  
  
return 0;

}