#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        s2.append(s2);
        int n=s1.size();
      string temp="";
      for(int i=0; i<n; ++i) temp+=s2[i];
      int i=n;
      while(i<2*n){
                
                if(temp==s1) return true;
                
                temp.erase(0,1);
                temp+=s2[i];
                i++;
          
      }
                    
                    
                    return false;
            
        
        
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here

    return 0;
}