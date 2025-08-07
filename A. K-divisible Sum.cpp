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

        int n, k;
        cin >> n >> k;
        if(n>k){
            if(n%k==0)
            cout<<1<<'\n';
            else cout<<2<<'\n';
        }
        else cout<<      (int)ceil((double)k / n)<<'\n';



        
    }
    return 0;
}