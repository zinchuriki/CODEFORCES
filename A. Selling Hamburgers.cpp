#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
     int tt;
     cin>>tt;
      while(tt--){
        int n;
        long long int a,maximum=0;
        vector<long long int> vec;
         cin>>n;
         int count=0;

         for(int i=0; i<n; i++){
            cin>>a;
            vec.push_back(a);
         }
         sort(vec.begin(),vec.end());

         for(int i=n-1; i>=0; --i){
                maximum=max(maximum,vec[i]*(n-i));
         }
         cout<<maximum<<'\n';
      }

    return 0;
}