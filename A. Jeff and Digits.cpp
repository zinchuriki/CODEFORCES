#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
   int n;
   cin>>n;
   int fives=0,zeros=0;
   int a;
   for(int i=0; i<n; ++i){
        cin>>a;
        if(a==5)
        fives++;
        else zeros++;
   }
   if(zeros==0){
cout<<-1;
return 0;
   }

   if(fives<9){
    cout<<0;
    return 0;
   }

   for(int i=0; i<fives/9; ++i){
    for(int i=0; i<9; ++i)
        cout<<5;
   }
   while(zeros--)
   cout<<0;
     
    
       
    
  
   
    
    return 0;
}