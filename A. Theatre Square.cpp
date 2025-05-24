#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long int n,m,a;
  
    cin>>n>>m>>a;
    

        if(a>=n){

            if(a<=m)
            cout<<(int)ceil((double)m/a);
            else{
                cout<<1;
            }
        }
        else{
            if(a>=m){
                cout<<(int)ceil((double)n/a);
            }
            else{
                long long int c=(int)ceil((double)n/a);
                cout<<c+ c*(int)ceil((double)(m-a)/a);
            }
        }




    
    return 0;
}