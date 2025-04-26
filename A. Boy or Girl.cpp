#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   string s;
   cin>>s;
   unordered_map<char,int> mymap;

   for(auto i=0; i<s.size(); i++){
    mymap[s[i]]++;
   }
   if(mymap.size()&1)
   cout<<"IGNORE HIM!";
   else cout<<"CHAT WITH HER!";
}