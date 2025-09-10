#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPairs(vector<int> &arr, int target)
    {
        int l = 0, r = arr.size() - 1, n = arr.size();

        int ans = 0;
        while (l < r)
        {

            int sum = arr[l] + arr[r];
            if (sum == target)
            {
                ans++;
                r--;
            }

            else if (sum < target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }

        return ans;
    }
};

class Solution
{
public:
    bool check(unordered_map<int, int> &hash1, unordered_map<int, int> &hash2)
    {

        for (auto it = hash1.begin(); it != hash1.end(); ++it)
        {
            if (hash2.find(it->first) != hash2.end())
                return false;
        }

        return true;
    }

    int minimumTeachings(int n, vector<vector<int>> &languages,
                         vector<vector<int>> &friendships)
    {
        int m = languages.size(), n1 = friendships.size();
        unordered_map<int, unordered_map<int, int>> hash, hash1;

        for (int i = 0; i < m; ++i)
        {
            unordered_map<int, int> hash1;
            for (int j = 0; j < languages[i].size(); ++j)
                hash1[languages[i][j]]++;
            hash[i + 1] = hash1;
        }

        unordered_set<int> s;
        for (int i = 0; i < n1; ++i)
        {
            if (!check(hash[friendships[i][0]], hash[friendships[i][1]]))
            {
                s.insert(friendships[i][0]);
                s.insert(friendships[i][1]);
            }
        }
        int maxi = 0;
        unordered_map<int, int> hash3;
        for (auto it = s.begin(); it != s.end(); ++it)
        {

            for (int i = 0; i < languages[*it - 1].size(); ++it)
            {
                hash3[languages[*it - 1][i]]++;
                maxi = max(maxi, hash3[languages[*it - 1][i]]);
            }
        }

        return (int)s.size() - maxi;
    }
};
int cal(vector<vector<int>> &dp, int i, int j, string &a, string &b)
{

    if (i <= 0 || j <= 0)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    if (a[i - 1] == b[j - 1])
        return dp[i][j] = 1 + cal(dp, i - 1, j - 1, a, b);
    return dp[i][j] = max(cal(dp, i - 1, j, a, b), cal(dp, i, j - 1, a, b));
}

string shortestSupersequence(string a, string b)
{
    int n = a.size(), m = b.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    string ans = "";

    cal(dp, n, m, a, b);
    int i = n, j = m;
    while (i > 0 && j > 0)
    {
        if (a[i - 1] == b[j - 1])
        {
            ans += a[i - 1];
            i--;
            j--;
        }
        else
        {
            if (dp[i - 1][j] > dp[i][j - 1])
            {
                ans += a[i - 1];
                i--;
            }
            else
            {
                ans += b[j - 1];
                j--;
            }
        }
    }

    while (i > 0)
    {
        ans += a[i - 1];
        i--;
    }
    while (j > 0)
    {
        ans += b[j - 1];
        j--;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}