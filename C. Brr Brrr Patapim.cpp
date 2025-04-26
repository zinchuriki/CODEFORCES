// C. Brr Brrr Patapim
// time limit per test2 seconds
// memory limit per test256 megabytes
// Brr Brrr Patapim is trying to learn of Tiramisù's secret passcode, which is a permutation∗
//  of 2⋅n
//  elements. To help Patapim guess, Tiramisù gave him an n×n
//  grid G
// , in which Gi,j
//  (or the element in the i
// -th row and j
// -th column of the grid) contains pi+j
// , or the (i+j)
// -th element in the permutation.

// Given this grid, please help Patapim crack the forgotten code. It is guaranteed that the permutation exists, and it can be shown that the permutation can be determined uniquely.






#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        
        int n;
        cin>>n;
        map<int,int> hash;
        vector<int> answer(2*n+2);
        int a;
        for(auto i=1; i<=n; i++){
            for(auto j=1; j<=n; j++){
                    cin>>a;
                    answer[i+j]=a;
                    hash[a]++;
            }
        }
        for (size_t i = 1; i <=2*n; i++)
        {
            if(hash.find(i)==hash.end())
            answer[1]=i;
        }

        for(auto i=1; i<=2*n; i++){
            cout<<answer[i]<<" ";
        }
        cout<<'\n';
        
        
    }
return 0;

}