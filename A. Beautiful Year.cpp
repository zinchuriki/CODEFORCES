#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;
bool check(int y){
    
        unordered_set<int> hash;
        while(y>0){
                    if(hash.count(y%10))
                    return false;
            hash.insert(y%10); 
            y/=10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int y;
    cin>>y;

    while(1){
        y++;
        if(check(y)){
            cout<<y;
            break;
        } 
       
    }
return 0;

}