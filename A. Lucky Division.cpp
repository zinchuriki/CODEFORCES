#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    vector<int> ln{
        4,7,44,47,74,77,444,447,474,477,744,747,774,777
    };
         bool div=false;
    for(int i=0; i<ln.size();++i){
            if(n%ln[i]==0){
                div=true;
                break;
            }
    }
    if(div)
    cout<<"YES";
    else cout<<"NO";
    
    return 0;
}