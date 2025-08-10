#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {

        int n;
        cin >> n;
            int a = n;
        if(n%2!=0){
            a=n-n/2+1;
        } else a=n/2 +1;

        int b=-(a-2);
        bool even=false;
            if(n%2==0){
even=true;
n--;
            } 
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 != 0)
                cout << 3 << " ";
            else{
               
                 cout<<-1<<" ";
            }
               
        }
        if(even) cout<<2;
        
        cout << '\n';
    }
    return 0;
}