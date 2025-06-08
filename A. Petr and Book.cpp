#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    vector<int> vec(7);

    for(int i=0; i<7; ++i)
    cin>>vec[i];
        int i=0;
    while(n>0){
        n-=vec[i%7];
        if(n<=0){
          cout<<i%7+1;
          break;
        }
        i++;

    }
    
    return 0;
}