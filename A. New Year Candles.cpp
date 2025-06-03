#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // your code here
 int a,b;
 cin>>a>>b;

 int x=a;
int count=0;
int remainder=0;
 while(x>0){
    count+=x;
    remainder=x%b;
    x/=b;
 }
 
 cout<<count;
    return 0;
}