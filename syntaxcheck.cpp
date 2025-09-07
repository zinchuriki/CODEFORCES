#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        int x=1;

        vector<int> vec;
        if(n%2!=0)
        {
            vec.push_back(0);
            n--;
        }

        n=n/=2;
        while(n>0){
vec.push_back(x);
vec.push_back(-x);
x++;
        }

                 

        
      return vec;
    }
};

int cal(vector<int> &vec)
{

    int n = vec.size();
    int l = vec[0], r = vec[1];
    for (int i = 2; i < n; ++i)
    {

        if (i % 2 == 0)
        {

            if (l < r)
                l = vec[i];
            else
                r = vec[i];
        }

        else
        {
            if (l < r)
                r = vec[i];
            else
                l = vec[i];
        }
    }
    cout << min(l, r) << " ";
}

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
            cal(vec);
        }
        cout << '\n';
    }
    return 0;
}