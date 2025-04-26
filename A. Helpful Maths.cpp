#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
        string s;
        cin>>s;
        int n=s.size();
        string answer="";
        unordered_map<char,int> mymap;

        for(auto i=0; i<n; ++i){
            mymap[s[i]]++;
        }

        for(int i=0; i<mymap['1']; i++){
            answer+= "1+";
        }
        for(int i=0; i<mymap['2']; i++){
            answer+= "2+";
        }
        for(int i=0; i<mymap['3']; i++){
            answer+= "3+";
        }
        answer.erase(answer.size()-1, 1);

        cout<<answer;
        
    
return 0;

}