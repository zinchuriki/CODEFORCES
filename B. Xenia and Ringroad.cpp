#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
int n,m;
cin>>n>>m;
int a;
int prev=1;
  long long int time=0;
for(int i=0; i<m; ++i){
cin>>a;
if(a<prev){
    time+=n+a-prev;
}
else{
    time+=a-prev;
}
prev=a;
}
cout<<time;
    
    return 0;
}