#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

      bool isPerfectSquare(long long n) {
    if (n < 0) return false;
    long long x = sqrtl(n);
    return x * x == n || (x+1) * (x+1) == n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {

        // Your code for each test case here
        int n;
        cin >> n;
        // if (n & (n - 1) == 0)
        //     cout << "Yes" << '\n';
        // else
        //     cout << "No" << '\n';
            bool pos=false;
            if(n>1){
 while(true){
      if(n%2!=0 || pos) break;
                n/=2;
                if(isPerfectSquare(n)) pos=true;
              
            }
            }
           
            if(pos) cout<<"Yes"<<'\n';
            else cout<<"No"<<'\n';
  

    }
    return 0;
}


