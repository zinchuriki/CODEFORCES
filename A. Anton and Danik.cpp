#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string s;
    cin>>s;

    int a=0;
    for(auto i=0; i<n; i++){
        if(s[i]=='A')
        a++;
    }

if(a==n-a)
cout<<"Friendship";
if(a>n-a)
cout<<"Anton";
if(a<n-a)
cout<<"Danik";
return 0;

}