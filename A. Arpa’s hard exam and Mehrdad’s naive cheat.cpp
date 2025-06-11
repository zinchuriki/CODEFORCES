#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
int n;
cin>>n;
if(n==0){
    cout<<1;
    return 0;
}
if(n%4==0){
    cout<<6;
    return 0;
}
if(n%4==1){
    cout<<8;
    return 0;
}
if(n%4==2){
    cout<<4;
    return 0;
}
if(n%4==3)
    cout<<2;
    
    return 0;
}