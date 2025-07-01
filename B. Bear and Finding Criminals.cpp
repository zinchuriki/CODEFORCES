#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
   int n,a;
   cin>>n>>a;

   int l=a-1,r=a-1,count=0;
   vector<int> vec(n);
   for(int i=0; i<n; ++i) cin>>vec[i];
int maxi=0;
   for(int i=0; i<vec.size(); ++i){
    if(vec[i]==1)
    count++;
    else count=0;
        maxi=max(count,maxi);
   }

   cout<<maxi;

//    while(l>=0 || r<n){
//         bool left=false,right=false;
//         if(l>=0){if(vec[l]==1)
//         left=true;}
//         if(r<n){if(vec[r]==1)
//         right=true;}
        
    
//     if(left|| right)
//     count++;

//     l--; r++;

//    }

//    cout<<count;
    
    return 0;
}