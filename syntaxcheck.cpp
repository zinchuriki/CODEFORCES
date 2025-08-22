#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {

        int n = matrix.size(), m = matrix[0].size();
        int ans = 0;

        vector<vector<int>> dp(n, vector<int>(m, 0));
        for(int i=0; i<n; ++i) ans+=matrix[i][0];
        for(int i=0; i<m; ++i) ans+=matrix[0][i];
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                    if(matrix[i][j]==1) ans++;
                if (matrix[i][j] == '1' && matrix[i - 1][j] == '1' &&
                    matrix[i][j - 1] == '1' && matrix[i - 1][j - 1] == '1') {
                    ans++;
                    dp[i][j] =
                        min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) +
                        1;
                    if (dp[i][j] > 1)
                        ans += dp[i][j];
                }
            }
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> vec(n);
    int l = 0, r = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> vec[i];
        if (vec[i] <= 0)
            l = i;
    }

    r = l + 1;

    while (l >= 0 && r < n)
    {

        if (abs(vec[l]) < abs(vec[r]))
        {
            cout << vec[r] * vec[r] << " ";
            r++;
        }

        else
        {
            cout << vec[l] * vec[l] << " ";
            l--;
        }
    }

    while (l >= 0)
        cout << vec[l] * vec[l] << " ";
    while (r < n)
        cout << vec[r] * vec[r] << " "; 

    return 0;
}