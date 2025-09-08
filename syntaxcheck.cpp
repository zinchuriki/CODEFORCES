#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> vec(2);
        if(n==2){
            vec[0]=1;
            vec[1]=1;
            return vec;
        }
       if((n-1)%10==0){
    vec[0]=2;
    vec[1]=n-2;

       } else {
        vec[0]=1;
        vec[1]=n-1;
       }
        return vec;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {

        int n, q;
        cin >> n >> q;
        int a, b;

        vector<int> vec(n);

        for (int i = 0; i < n; ++i)
            cin >> vec[i];
        vector<pair<int, int>> arr(q);
        for (int i = 0; i < q; ++i)
            cin >> arr[i].first >> arr[i].second;

        for (int i = 0; i < q; ++i)
        {
            vec[arr[i].first - 1] = arr[i].second;
           
        }
        cout << '\n';
    }
    return 0;
}