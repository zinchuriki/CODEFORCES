#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isvowel(char a)
    {

        a = tolower(a);
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
            return true;
        return false;
    }

    string sortVowels(string s)
    {
        int l = 0, r = 1;
        int n = s.size();
        if (n == 1)
            return s;

        vector<int> vec(26);
        vector<int> vec1(26);

        for (int i = 0; i < n; ++i)
        {
            if (s[i] <= 'z')
                vec[s[i] - 'a']++;
            else
                vec1[s[i] - 'A'];
        }

        for (int i = 0; i < n; ++i)
        {

            if (isvowel(s[i]))
            {
                if (vec['a' - 'a'] > 0)
                    s[i] = 'a';
                else if (vec['e' - 'a'] > 0)
                    s[i] = 'e';
                else if (vec['i' - 'a'] > 0)
                    s[i] = 'i';
                else if (vec['o' - 'a'] > 0)
                    s[i] = 'o';
                else if (vec['u' - 'a'] > 0)
                    s[i] = 'u';
                else if (vec1['A' - 'A'] > 0)
                    s[i] = 'A';
                else if (vec1['E' - 'A'] > 0)
                    s[i] = 'E';
                else if (vec1['I' - 'A'] > 0)
                    s[i] = 'I';
                else if (vec1['O' - 'A'] > 0)
                    s[i] = 'O';
                else
                    s[i] = 'U';
            }
        }
        return s;

        return s;
    }
};

class Solution
{
public:
    int myAtoi(string &s)
    {
        // code here
        int n = s.size();
        int idx = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] = ' ')
                idx++;
            else
                break;
        }

        if (idx >= n)
            return 0;
        int sign = 1;
        for (int i = idx; i < n; ++i)
        {

            if (s[i] == '-')
            {
                sign = -1;
                idx++;
                break;
            }
        }

        if (idx >= n)
            return 0;

        for (int i = idx; i < n; ++i)
        {
            if (s[i] == '0')
                idx++;
            else
                break;
        }

        if (idx >= n)
            return 0;
        long long int cal = 0;
        for (int i = idx; i < n; ++i)
        {

            if (isdigit(s[i]))
            {
                cal *= 10;
                cal + s[i] - '0';
            }
            else
                break;
        }
        cal *= sign;
        if (cal > INT_MAX)
            return INT_MAX;
        if (cal < INT_MIN)
            return INT_MIN;

        return (int)cal;
    }
};

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

// User function Template for C++
class Solution
{
public:
    int countPairs(vector<int> &arr, int target)
    {
        int n = arr.size();
        if (n == 1)
            return 0;
        sort(arr.begin(), arr.end());
        int l = 0, r = 1;
        int ans = 0;

        while (l >= 0 && r >= 0)
        {

            int sum = arr[l] + arr[r];
            if (sum >= target)
            {
                if (l == 0)
                {
                    r--;
                    l = r - 1;
                }
                else
                    l--;
            }
            else
            {
                ans += l + 1;
                r--;
            }
        }
    }
};

int longestSubsequenceLength(const vector<int> &A)
{
    int n = A.size();
    vector<int> dp1(n + 1, 1), dp2(n + 1, 1);

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (A[j] > A[i])
                dp1[j] = max(dp1[j], 1 + dp1[i]);
        }
    }

    for (int i = n - 1; i > 0; --i)
    {
        for (int j = i - 1; j >= 0; --j)
        {
            if (A[j] > A[i])
                dp2[j] = max(dp2[j], 1 + dp2[i]);
        }
    }

    int ans = 0;

    for (int i = 0; i < n; ++i)
        ans = max(ans, dp1[i] + dp2[i]);
    return ans;
}

class Solution
{
public:
    void dfs(vector<vector<int>> &image, int row, int col, int oc, int nc)
    {
        int n = image.size(), m = image[0].size();
        if (row < 0 || row >= n || col < 0 || col >= m || image[row][col] != oc)
            return;

        image[row][col] = nc;

        dfs(image, row - 1, col, oc, nc);
        dfs(image, row + 1, col, oc, nc);
        dfs(image, row, col - 1, oc, nc);
        dfs(image, row, col + 1, oc, nc);
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
                                  int newColor)
    {
        // Code here
        int oc = image[sr][sc];
        int n = image.size(), m = image[0].size();

        dfs(image, sr, sc, oc, newColor);
        return image;
    }
};

class Solution
{
public:
    int countPairs(vector<int> &arr, int target)
    {
        unordered_map<int, int> hash;
        int n = arr.size();

        for (int i = 0; i < n; ++i)
            hash[arr[i]]++;
        int ans = 0;
        for (auto it = hash.begin(); it != hash.end(); ++it)
        {
            if (hash.find(target - it->first) != hash.end())
            {
                if (it->first == target - it->first)
                {
                    ans += (it->second) * (it->second - 1) / 2;
                }
                else
                    ans += it->second * hash[target - it->first];
            }
        }

        return ans;
    }
};

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

int solve(int A)
{
    if (A == 0)
        return 1;
    if (A == 1)
        return 3;
    int MOD = (int)1e9 + 7;
    long long ans = ((A) % MOD * ((int)pow(2, A - 1) - 1) % MOD + 3) % MOD;
    return (int)ans;
}

long solve(int A, int B)
{

    int idx = 0;

    while (idx < B)
    {
        if (A == 1)
        {
            idx++;
            break;
        }
        else if (A % 2 == 0)
            A /= 2;
        else
            A * 3 + 1;
        idx++;
    }
    if (idx == B)
        return A;

    int a = (B - idx) % 3;
    if (a % 3 == 0)
        return 1;
    else if (a % 3 == 1)
        return 4;
    return 2;
}

// User function template for C++
class Solution
{
public:
    string addBinary(string &s1, string &s2)
    {
        // your code here
        string ans = 0;
        int carry = 0;
        int r1 = s1.size() - 1, r2 = s2.size() - 1;

        while (r1 >= 0 || r2 >= 0)
        {
            int temp = 0;
            if (r1 >= 0)
                temp += s1[r1] - '0';
            if (r2 >= 0)
                temp += s2[r2] - '0';
            temp += carry;

            if (temp == 1)
            {
                carry = 0;
                ans += '1';
            }
            else if (temp == 0)
            {
                ans += '0';
                carry = 0;
            }
            else if (temp == 2)
            {
                ans += '0';
                carry = 1;
            }
            else
            {
                temp += '1';
                carry = 1;
            }
            r1--;
            r2--;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

class Solution
{
public:
    bool isvowel(char a)
    {
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
            return true;
        return false;
    }
    int maxFreqSum(string s)
    {
        vector<int> vec(26, 0);
        int n = s.size();
        int vow = 0, con = 0, ans = 1;
        for (int i = 0; i < n; ++i)
        {
            vec[s[i] - 'a']++;
            if (isvowel(s[i]))
                vow = max(vow, vec[s[i] - 'a']);
            else
                con = max(con, vec[s[i] - 'a']);

            ans = max(ans, max(con, vow));
        }

        return ans;
    }
};

int finds(vector<int> &vec, int l, int r, int target, unordered_map<int, int> &hash)
{
    if (l > r)
        return -1;
    int mid = l + (r - l) / 2;

    if (vec[mid] >= target)
    {
        if (mid == 0)
            return hash[vec[mid]];

        if (vec[mid - 1] < target)
            return hash[vec[mid]];
        else
            return finds(vec, l, mid - 1, target, hash);
    }

    else
        return finds(vec, mid + 1, r, target, hash);
}

vector<int> solve(vector<int> &A, vector<int> &B)
{

    vector<int> vec;
    sort(A.begin(), A.end());
    unordered_map<int, int> hash;
    int n = A.size();
    for (int i = 0; i < n; ++i)
    {
        hash[A[i]] = i;
    }

    for (int i = 0; i < B.size(); ++i)
    {
        int a = finds(A, 0, A.size() - 1, B[i], hash);
        vec.push_back(a);
    }
    return vec;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int id;
    cin >> id;
    int tt;
    cin >> tt;
    while (tt--)
    {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        float x, y, z;
        x = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        y = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
        z = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

        float ang1, ang2, ang3;
        ang1 = acos((x * x + y * y - z * z) / 2 * x * y) * 180.0 / M_PI;
        ang2 = acos((x * x + z * z - y * y) / 2 * x * z) * 180.0 / M_PI;
        ang3 = acos((z * z + y * y - x * x) / 2 * z * y) * 180.0 / M_PI;

        string side = "Scalene";
        if (x == y || y == z || y == x)
            side = "Isosceles";
        string angle = "Acute";
        if (ang1 == 90 || ang2 == 90 || ang3 == 90)
            angle = "Right";
        if (ang1 > 90 || ang2 > 90 || ang3 > 90)
            angle = "Obtuse";
        if (id == 1)
            cout << side << " triangle" << '\n';
        else
            cout << side << " " << angle << " triangle" << '\n';
    }
    return 0;
}

class Solution
{
public:
    int dps(vector<vector<int>> &dp, int idx, vector<int> &nums, int x, int sum)
    {

        if (idx >= nums.size())
            return 0;
        if (sum < 0)
            return 0;
        if (dp[idx][sum] != -1)
            return dp[idx][sum];
        if (sum - min(nums[idx], x) == 0)
            return dp[idx][sum] = 1;
        int take = 0;
        if (sum - min(nums[idx], x) > 0)
            take = dps(dp, idx + 1, nums, x, sum - min(nums[idx], x));
        int dtake = dps(dp, idx + 1, nums, x, sum);

        return dp[idx][sum] = max(take, dtake);
    }
    vector<bool> subsequenceSumAfterCapping(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<bool> vec(n);
        for (int i = 1; i <= n; ++i)
        {
            vector<vector<int>> dp(n, vector<int>(k + 1, -1));
            if (dps(dp, 0, nums, i, k) > 0)
                vec[i - 1] = true;
        }

        return vec;
    }
};

class Solution
{
public:
    bool isVowel(char c)
    {
        c = tolower(c); // convert to lowercase
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    string cv(string &s)
    {
        int n = s.size();
        string ans = "";
        for (int i = 0; i < n; ++i)
        {
            if (isVowel(s[i]))
                ans += '*';
            else
                ans += s[i];
        }

        return ans;
    }

    vector<string> spellchecker(vector<string> &wordlist, vector<string> &queries)
    {

        vector<string> ans;

        unordered_map<string, int> hash;
        unordered_map<string, string> hash2;

        int n = wordlist.size();

        for (int i = 0; i < n; ++i)
        {
            hash[wordlist[i]]++;
            string b = wordlist[i];
            transform(b.begin(), b.end(), b.begin(), ::tolower);
            string a = cv(b);
            if (hash2.find(a) == hash2.end())
                hash2[a] = wordlist[i];

            if (hash2.find(b) == hash2.end())
                hash2[b] = wordlist[i];
        }

        int m = queries.size();

        for (int i = 0; i < m; ++i)
        {
            if (hash.find(queries[i]) != hash.end())
                ans.push_back(queries[i]);
            else
            {
                string b = queries[i];
                transform(b.begin(), b.end(), b.begin(), ::tolower);
                if (hash2.find(b) != hash2.end())
                    ans.push_back(hash2[b]);
                else if (hash2.find(cv(b)) != hash2.end())
                    ans.push_back(hash2[b]);
                else
                    ans.push_back("");
            }
        }
        return ans;
    }
};

class Solution
{
public:
    int canBeTypedWords(string text, string brokenLetters)
    {
        int n = text.size(), words = 1;
        vector<vector<int>> vec;
        vector<int> temp(26, 0), te(26, 0);
        for (int i = 0; i < n; ++i)
        {
            if (text[i] == ' ')
            {
                vec.push_back(temp);
                temp = te;
                words++;
            }
            else
                temp[text[i] - 'a']++;
        }
        vec.push_back(temp);

        int m = brokenLetters.size();

        for (int i = 0; i < m; ++i)
        {
            n = vec.size();
            if (n == 0)
                break;
            for (int j = n - 1; j >= 0; --j)
            {
                if (vec[j][brokenLetters[i] - 'a'] > 0)

                    vec.erase(vec.begin() + j);
            }
        }
        return (int)vec.size();
    }
};

class Solution
{
public:
    bool check(int a, int b)
    {
        if (gcd(a, b) > 1)
            return true;
        return false;
    }
    vector<int> replaceNonCoprimes(vector<int> &nums)
    {

        stack<int> st;
        st.push(nums[0]);
        int n = nums.size();
        int first, second;
        for (int i = 1; i < n; ++i)
        {
            if (!st.empty())
            {
                first = st.top();
                second = nums[i];
                if (check(first, second))
                {

                    st.pop();
                    int temp = lcm(first, second);

                    while (!st.empty() && check(st.top(), temp))
                    {
                        temp = lcm(st.top(), temp);
                        st.pop();
                    }
                    st.push(temp);
                }
            }
            else
                st.push(nums[i]);
        }

        vector<int> vec;
        n = st.size();
        for (int i = 0; i < n; ++i)
        {
            vec.push_back(st.top());
            st.pop();
        }
        return vec;
    }
};