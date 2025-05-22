#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;

    if(max(x1,max(x2,max(x3,x4)))- x1>0)
    cout<<max(x1,max(x2,max(x3,x4)))- x1<<" ";
     if(max(x1,max(x2,max(x3,x4)))- x2>0)
    cout<<max(x1,max(x2,max(x3,x4)))- x2<<" ";
     if(max(x1,max(x2,max(x3,x4)))- x3>0)
    cout<<max(x1,max(x2,max(x3,x4)))- x3<<" ";
     if(max(x1,max(x2,max(x3,x4)))- x4>0)
    cout<<max(x1,max(x2,max(x3,x4)))- x4;
    
    return 0;
}