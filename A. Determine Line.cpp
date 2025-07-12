#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
   map<int,int> hash;

   int n;
   cin>>n;
   int a,b;
   for(int i=0; i<n; ++i){
    cin>>a;
    while(a--){
            cin>>b;
            hash[b]++;
            if(hash[b]==n)
            cout<<b<<" ";
    }
   }
    
    return 0;
}