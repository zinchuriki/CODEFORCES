// Time limit: 1.00 s
// Memory limit: 512 MB

// Consider a money system consisting of n coins. Each coin has a positive integer value. Your task is to produce a sum of money x using the available coins in such a way that the number of coins is minimal.
// For example, if the coins are \{1,5,7\} and the desired sum is 11, an optimal solution is 5+5+1 which requires 3 coins.
// Input
// The first input line has two integers n and x: the number of coins and the desired sum of money.
// The second line has n distinct integers c_1,c_2,\dots,c_n: the value of each coin.
// Output
// Print one integer: the minimum number of coins. If it is not possible to produce the desired sum, print -1.
// Constraints

// 1 \le n \le 100
// 1 \le x \le 10^6
// 1 \le c_i \le 10^6

// Example
// Input:
// 3 11
// 1 5 7

// Output:
// 3
#include <bits/stdc++.h>

using namespace std;

long int cal(vector<long int> &dp, vector<int> &coins, int idx, int sum)
{
    int n = coins.size();
    if (sum == 0)
        return 0;
    if (idx >= n)
        return INT_MAX;
    if (dp[sum] != -1)
        return dp[sum];
    long int take = INT_MAX, dtake = INT_MAX;
    long value = coins[idx];
    if (value <= sum)
    {
        long int res = cal(dp, coins, idx, sum - value);
        if (res != INT_MAX)
        { // Only add 1 if it is a valid path
            take = 1 + res;
        }
    }
    dtake = cal(dp, coins, idx + 1, sum);

    return dp[sum] = min(take, dtake);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; ++i)
        cin >> coins[i];
    vector<long int> dp(x + 1, -1);
    int ans = cal(dp, coins, 0, x);

    if (ans == INT_MAX)
        cout << -1;
    else
        cout << ans;

    return 0;
}