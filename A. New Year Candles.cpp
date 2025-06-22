#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
 int a,b;
 cin>>a>>b;

 int left=0;
int count=0;
int remainder=a;
 while(remainder>0){
    count+=remainder;
    long int d=(remainder+left)/b;
    left=(remainder+left)%b;
    remainder=d;
 }
 
 cout<<count;
    return 0;
}