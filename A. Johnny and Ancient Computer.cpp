#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
 long long int a,b;
   cin>>a>>b;
   if(a==b){
    cout<<0<<'\n';
    continue;
   }

   if(a%b!=0 && b%a!=0){
  cout<<-1<<'\n';
  continue;
   }
double d;
  
long long int c;
if(a>b)
  c=a/b;
  else c=b/a;
  d=log2(c);
    if(c > 0 && (c & (c-1)) !=0)
        {
            cout<<-1<<'\n';
            continue;
        }
        long long int ans=0;
        while(c/8>0){
            ans++;
            c/=8;
        }
 
    long long int left= c%8;
        ans+=left/4;
        left=left%4;
        ans+=left/2;

    cout<<ans<<'\n';



 


    }
    
  
    
    return 0;
}