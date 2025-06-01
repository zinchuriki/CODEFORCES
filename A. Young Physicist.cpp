#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,x,y,z;
    cin>>n;
    int countx=0,county=0,countz=0;

    for(int i=0; i<n; ++i){
        cin>>x>>y>>z;
       countx+=x;
       county+=y;
       countz+=z;
    }
    if(countx==0 && county==0 && countz==0)
    cout<<"YES";
    else cout<<"NO";
    
    return 0;
}