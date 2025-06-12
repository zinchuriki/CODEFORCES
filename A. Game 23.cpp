#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
   int n,m;
   cin>>n>>m;

        if(m==n){
            cout<<0;
            return 0;
        }

   if(m%n!=0 || (m%2!=0 && m%3!=0))
   cout<<-1;
   else{
    int a=m/n;
    int b=n;
    int count=0;

    while(a>0){
        if(a%2==0){
 count++;
 a/=2;
 b*=2;
        }
        else{
            if(a%3==0){
count++;
a/=3;
b*=3;
            }
            else break;
            
        }
    }
    if(b==m)
    cout<<count;
    else cout<<-1;
   }


    
    return 0;
}