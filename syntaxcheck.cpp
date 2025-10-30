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

class Solution
{
public:
    bool pos(vector<int> &stalls, int x, int k)
    {
        int n = stalls.size();
        k--;
        int prev = stalls[0];
        for (int i = 1; i < n; ++i)
        {
            if (stalls[i] - prev >= x)
                k--;
            if (k == 0)
                return true;
        }

        return false;
    }

    int aggressiveCows(vector<int> &stalls, int k)
    {
        // code here
        sort(stalls.begin(), stalls.end());

        int n = stalls.size();

        int r = stalls[n - 1] - stalls[0];

        int l = 1;

        while (l <= r)
        {

            int mid = l + (r - l) / 2;

            if (pos(stalls, mid, k))
                l = mid;
            else
                r = mid;
        }

        return l;
    }
};

struct MyCompare
{
    bool operator()(const std::pair<std::string, int> &a,
                    const std::pair<std::string, int> &b) const
    {

        // 1. Primary Sort: Compare by the integer (.second) in DESCENDING order.
        if (a.second != b.second)
        {
            return a.second > b.second;
        }

        // 2. Secondary Sort (Tie-Breaker): If integers are equal,
        //    compare by the string (.first) in ASCENDING order.
        return a.first < b.first;
    }
};

class FoodRatings
{
public:
    unordered_map<string, string> hash;
    unordered_map<string, int> hash3;
    map<string, set<pair<string, int>, MyCompare>> hash2;

    vector<string> foods, cuisines;
    vector<int> ratings;
    // cuisine  i is the  type of cuisine the ith food is.

    FoodRatings(vector<string> &foods, vector<string> &cuisines,
                vector<int> &ratings)
    {

        int n = foods.size();
        this->foods = foods;
        this->cuisines = cuisines;
        this->ratings = ratings;
        for (int i = 0; i < n; ++i)
        {
            hash3[foods[i]] = ratings[i];
            hash[foods[i]] = cuisines[i];
            hash2[cuisines[i]].insert({foods[i], ratings[i]});
        }
    }

    void changeRating(string food, int newRating)
    {
        string cuisine = hash[food];
        hash2[cuisine].erase({food, hash3[food]});
        hash3[food] = newRating;
        hash2[cuisine].insert({food, hash3[food]});
    }

    string highestRated(string cuisine)
    {
        return hash2[cuisine].begin()->first;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */

/*
#include<iostream>
using namespace std;
*/

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
        long long ans = 0;

        int now = 0;
        vector<long int> wealth(n), pref(n);
        for (int i = 0; i < n; ++i)
            cin >> wealth[i];
        for (int i = 0; i < n; ++i)
            cin >> pref[i];

        int prefer = 0;
        long long money = 0;

        for (int i = 0; i < n - 1; ++i)
        {
            if (prefer != pref[i + 1])
            {
                if (wealth[i + 1] - k > -wealth[i])
                {
                    prefer = pref[i + 1];
                    money += wealth[i + 1] - k;
                }
                else
                    money -= wealth[i + 1];
            }
        }

        cout << money << '\n';
    }
    return 0;
}

class TaskManager
{
public:
    struct MyCompare
    {
        bool operator()(const vector<int> &a,
                        const vector<int> &b) const
        {
            if (a[2] == b[2])
                return a[1] > b[1];
            return a[2] >
                   b[2];
        }
    };
    vector<vector<int>> tasks;
    set<vector<int>, MyCompare> s;
    map<int, pair<int, int>> hash;

    TaskManager(vector<vector<int>> &tasks)
    {
        this->tasks = tasks;

        int n = tasks.size();
        for (int i = 0; i < n; ++i)
        {
            s.insert(tasks[i]);
            hash[tasks[i][1]] = {tasks[i][0], tasks[i][1]};
        }
    }

    void add(int userId, int taskId, int priority)
    {
        s.insert({userId, taskId, priority});
    }

    void edit(int taskId, int newPriority)
    {

        pair<int, int> p = hash[taskId];

        s.erase({p.first, taskId, p.second});
        s.insert({p.first, taskId, newPriority});
        hash[taskId] = {p.first, newPriority};
    }

    void rmv(int taskId)
    {
        pair<int, int> p = hash[taskId];
        s.erase({p.first, taskId, p.second});
    }

    int execTop()
    {
        if (s.empty())
            return -1;
        vector<int> vec = *s.begin();
        s.erase(s.begin());
        return vec[0];
    }
};

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager* obj = new TaskManager(tasks);
 * obj->add(userId,taskId,priority);
 * obj->edit(taskId,newPriority);
 * obj->rmv(taskId);
 * int param_4 = obj->execTop();
 */

class Spreadsheet
{
public:
    vector<vector<int>> vec;
    Spreadsheet(int rows)
    {
        vec.resize(rows + 1);
        for (int i = 0; i <= rows; ++i)
            vec[i].resize(26, 0);
    }

    void setCell(string cell, int value)
    {
        int col = cell[0] - 'A', n = cell.size();

        string s = cell.substr(1, n);
        int row = stoi(s);

        vec[row][col] = value;
    }

    void resetCell(string cell)
    {
        int col = cell[0] - 'A', n = cell.size();

        string s = cell.substr(1, n);
        int row = stoi(s);
        vec[row][col] = 0;
    }

    int getValue(string formula)
    {
        string a = "", b = "";
        int i = 1;
        while (formula[i] != '+')
        {
            a += formula[i];
        }
        int n = formula.size();
        while (i < n)
            b += formula[i];
        int first = 0, second = 0;
        int n1 = a.size(), n2 = b.size();
        if (isalpha(a[0]))
        {
            string c = a.substr(1, n1 - 1);
            int row = stoi(c);
            first = vec[row][a[0] - 'A'];
        }
        else
            first = stoi(a);

        if (isalpha(b[0]))
        {
            string c = b.substr(1, n2 - 1);
            int row = stoi(c);
            second = vec[row][b[0] - 'A'];
        }
        else
            second = stoi(b);

        return first + second;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */

class Solution
{
public:
    void setMatrixZeroes(vector<vector<int>> &mat)
    {
        int idx = 1;

        int n = mat.size(), m = mat[0].size();
        for (int i = 0; i < n; ++i)
        {
            if (mat[i][0] == 0)
            {
                idx = 0;
                break;
            }
        }

        for (int i = 0; i < m; ++i)
        {
            if (mat[0][i] == 0)
            {
                mat[0][0] = 0;
                break;
            }
        }

        for (int i = 1; i < n; ++i)
        {
            for (int j = 1; j < m; ++j)
            {

                if (mat[i][j] == 0)
                {
                    mat[i][0] = 0;
                    mat[0][j] = 0;
                }
            }
        }
        for (int i = 1; i < n; ++i)
        {
            for (int j = 1; j < m; ++j)
            {

                if (mat[i][0] == 0 || mat[0][j] == 0)
                    mat[i][j] = 0;
            }
        }
        for (int i = 0; i < m; ++i)
        {
            if (mat[0][0] == 0)
                mat[0][i] = 0;
        }

        for (int i = 0; i < n; ++i)
        {
            if (idx == 0)
                mat[i][0] = 0;
        }
    }
};

class Router
{
public:
    deque<vector<int>> dq;
    unordered_map<int, deque<int>> hash;
    map<tuple<int, int, int>, bool> hash2;
    int sz = 0;

    Router(int memoryLimit) { sz = memoryLimit; }

    bool addPacket(int source, int destination, int timestamp)
    {

        vector<int> vec;
        tuple<int, int, int> tp{source, destination, timestamp};
        vec.push_back(source);
        vec.push_back(destination);
        vec.push_back(timestamp);

        if (dq.size() == sz)
        {
            vector<int> v = dq.front();
            if (v == vec)
                return false;
            tuple<int, int, int> tp1{v[0], v[1], v[2]};
            hash[v[1]].pop_front();
            hash2[tp1] = false;
            dq.pop_front();
        }

        if (hash2[tp] == false)
        {
            dq.push_back(vec);
            hash2[tp] = true;
            hash[destination].push_back(timestamp);
            return true;
        }

        return false;
    }

    vector<int> forwardPacket()
    {
        vector<int> vec;
        if (!dq.empty())
        {
            vec = dq.front();
            tuple<int, int, int> tp{vec[0], vec[1], vec[2]};
            dq.pop_front();
            hash2[tp] = false;
            hash[vec[1]].pop_front();
        }
        return vec;
    }

    int getCount(int destination, int startTime, int endTime)
    {

        auto it1 = lower_bound(hash[destination].begin(),
                               hash[destination].end(), startTime);
        auto it2 = upper_bound(hash[destination].begin(),
                               hash[destination].end(), endTime);
        return (int)distance(it1, it2);
    }
};

/**
 * Your Router object will be instantiated and called as such:
 * Router* obj = new Router(memoryLimit);
 * bool param_1 = obj->addPacket(source,destination,timestamp);
 * vector<int> param_2 = obj->forwardPacket();
 * int param_3 = obj->getCount(destination,startTime,endTime);
 */

class Solution
{
public:
    void check(vector<int> &vec, vector<int> &nums, int &mini, int count,
               int &n)
    {
        if (count > mini)
            return;
        if (vec == nums)
        {
            mini = min(mini, count);
            return;
        }

        // window size 1
        for (int i = 0; i < n; ++i)
        {
            int a = vec[i];
            vec.erase(vec.begin() + i);
            for (int j = 0; j < n; ++j)
            {
                if (j != i)
                {
                    vec.insert(vec.begin() + j, a);
                    check(vec, nums, mini, count + 1, n);
                    vec.erase(vec.begin() + j);
                }
            }
            vec.insert(nums.begin() + i, a);
        }
        // window size 2
        if (n >= 2)
            return;
        for (int i = 0; i < n - 1; ++i)
        {
            auto start = vec.begin() + i;
            auto end = vec.begin() + i + 2;
            vector<int> temp(start, end);
            vec.erase(start, end);
            for (int j = 0; j < n - 1; ++j)
            {
                if (j != i)
                {
                    vec.insert(vec.begin() + j, temp.begin(), temp.end());
                    check(vec, nums, mini, count + 1, n);
                    vec.erase(vec.begin() + j, vec.begin() + j + 2);
                }
            }
            vec.insert(vec.begin() + i, temp.begin(), temp.end());
        }
        // window size 3
        if (n >= 3)
            return;
        for (int i = 0; i < n - 2; ++i)
        {
            auto start = vec.begin() + i;
            auto end = vec.begin() + i + 3;
            vector<int> temp(start, end);
            vec.erase(start, end);
            for (int j = 0; j < n - 2; ++j)
            {
                if (j != i)
                {
                    vec.insert(vec.begin() + j, temp.begin(), temp.end());
                    check(vec, nums, mini, count + 1, n);
                    vec.erase(vec.begin() + j, vec.begin() + j + 3);
                }
            }
            vec.insert(vec.begin() + i, temp.begin(), temp.end());
        }
        // window size 4
        if (n >= 4)
            return;
        for (int i = 0; i < n - 3; ++i)
        {
            auto start = vec.begin() + i;
            auto end = vec.begin() + i + 3;
            vector<int> temp(start, end);
            vec.erase(start, end);
            for (int j = 0; j < n - 3; ++j)
            {
                if (j != i)
                {
                    vec.insert(vec.begin() + j, temp.begin(), temp.end());
                    check(vec, nums, mini, count + 1, n);
                    vec.erase(vec.begin() + j, vec.begin() + j + 3);
                }
            }
            vec.insert(vec.begin() + i, temp.begin(), temp.end());
        }
        // window size 5
        if (n >= 5)
            return;
        for (int i = 0; i < n - 4; ++i)
        {
            auto start = vec.begin() + i;
            auto end = vec.begin() + i + 4;
            vector<int> temp(start, end);
            vec.erase(start, end);
            for (int j = 0; j < n - 4; ++j)
            {
                if (j != i)
                {
                    vec.insert(vec.begin() + j, temp.begin(), temp.end());
                    check(vec, nums, mini, count + 1, n);
                    vec.erase(vec.begin() + j, vec.begin() + j + 4);
                }
            }
            vec.insert(vec.begin() + i, temp.begin(), temp.end());
        }
    }

    int minSplitMerge(vector<int> &nums1, vector<int> &nums2)
    {
        int mini = INT_MAX;
        int count = 0;
        int n = nums1.size();
        check(nums1, nums2, mini, count, n);

        return mini;
    }
};

class MovieRentingSystem
{
public:
    map<int, set<pair<int, int>>> hash;
    map<pair<int, int>, int> hash1;
    set<tuple<int, int, int>> rented;

    MovieRentingSystem(int n, vector<vector<int>> &entries)
    {

        for (int i = 0; i < n; ++i)
        {
            hash[entries[i][1]].insert({entries[i][2], entries[i][0]});
            hash1[{entries[i][0], entries[i][1]}] = entries[i][2];
        }
    }

    vector<int> search(int movie)
    {
        vector<int> vec;
        set<pair<int, int>> s = hash[movie];
        int count = 0;
        for (auto it = s.begin(); it != s.end() && count < 5; ++it, ++count)
        {
            vec.push_back(it->second);
        }

        return vec;
    }

    void rent(int shop, int movie)
    {

        int price = hash1[{shop, movie}];
        hash[movie].erase({price, shop});
        rented.insert({price, shop, movie});
    }

    void drop(int shop, int movie)
    {
        int price = hash1[{shop, movie}];
        rented.erase({price, shop, movie});

        hash[movie].insert({price, shop});
    }

    vector<vector<int>> report()
    {
        vector<vector<int>> ans;
        auto it = rented.begin();
        int count = 0;
        while (count < 5 && it != rented.end())
        {
            auto [price, shop, movie] = *it;
            vector<int> temp(2);
            temp[0] = shop;
            temp[1] = movie;
            ans.push_back(temp);
            ++it;
        }
        return ans;
    };
};

/**
 * Your MovieRentingSystem object will be instantiated and called as such:
 * MovieRentingSystem* obj = new MovieRentingSystem(n, entries);
 * vector<int> param_1 = obj->search(movie);
 * obj->rent(shop,movie);
 * obj->drop(shop,movie);
 * vector<vector<int>> param_4 = obj->report();
 */

class Solution
{
public:
    bool dfs(vector<int> &vis, vector<vector<int>> &adj, int node, int parent)
    {

        int n = adj[node].size();

        for (int i = 0; i < n; ++i)
        {
            if (vis[adj[node][i]] != -1 && vis[adj[node][i]] != parent)
                return true;
            else
            {
                if (vis[adj[node][i]] == -1)
                {
                    vis[adj[node][i]] = node;
                    return dfs(vis, adj, adj[node][i], node);
                }
            }
        }
        return false;
    }

    bool isCycle(int V, vector<vector<int>> &edges)
    {
        // Code here
        vector<vector<int>> adj(V);
        vector<int> vis(V, -1);

        int n = edges.size();

        for (int i = 0; i < n; ++i)
        {
            adj[edges[i][0]].push_back(adj[i][1]);
            adj[edges[i][1]].push_back(adj[i][0]);
        }
        for (int i = 0; i < V; ++i)
        {
            if (dfs(vis, adj, i, -1))
                return true;
        }
        return false;
    }
};

class Solution
{
public:
    string fractionToDecimal(int numerator, int denominator)
    {
        string ans = "";

        bool point = false;
        int num = numerator;
        int den = denominator;
        ans += to_string(num / den);
        num = num % den;
        if (num == 0)
            return ans;
        else
            ans += '.';
        num *= 10;
        map<pair<int, int>, bool> hash;
        int repeating = INT_MAX;
        while (num > 0)
        {
            if (hash.find({num / den, num % den}) != hash.end())
            {
                repeating = num / den;
                break;
            }
            ans += to_string(num / den);
            hash[{num / den, num % den}] = true;
            num = num % den;
            num *= 10;
        }

        if (repeating != INT_MAX)
        {
            int l = 0;
            while (ans[l] != '.')
                l++;

            l++;
            while (l < ans.size())
            {
                if (ans[l] == repeating + '0')
                    break;
                l++;
            }
            ans.insert(l, 1, '(');
            ans += ')';
        }
        return ans;
    }
};

class Solution
{
public:
    int sum(vector<vector<int>> &dp, vector<vector<int>> &triangles, int row, int col)
    {
        int n = triangles.size();
        if (row >= triangles.size())
            return 0;
        if (dp[row][col] != -1)
            return dp[row][col];

        return dp[row][col] = triangles[row][col] +
                              min(sum(dp, triangles, row + 1, col + 1),
                                  sum(dp, triangles, row + 1, col));
    }
    int minimumTotal(vector<vector<int>> &triangle)
    {
        int n = triangle.size();
        int m = triangle[n - 1].size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

        return sum(dp, triangle, 0, 0);
    }
};

class Solution
{
public:
    int triangleNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if (n <= 2)
            return 0;
        int l = 0, r = 1;
        // we'll use upperbound
        int ans = 0;
        while (l < n && r < n)
        {

            int find = nums[l] + nums[r] - 1;
            auto it = upper_bound(nums.begin(), nums.end(), find);
            if (it == nums.end())
            {

                if (nums[n - 1] <= find)
                    ans += max(0, n - 1 - r);
                l++;
                r = l + 1;
            }
            else
            {
                ans += it - nums.begin() - r - 1;
                r++;
            }
        }
        return ans;
    }
};

class Solution
{
public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval)
    {
        // code here
        vector<vector<int>> vec;

        int lower = INT_MAX;
        int upper = INT_MIN;
        bool wait = false;

        int n = intervals.size();

        for (int i = 0; i < n; ++i)
        {

            if (intervals[i][0] <= newInterval[0] && intervals[i][1] >= newInterval[0])
            {
                lower = intervals[i][0];
                wait = true;
            }
            if (wait)
            {
                if (intervals[i][0] <= newInterval[1] && intervals[i][1] >= newInterval[1])
                {
                    upper = intervals[i][1];
                    wait = false;
                    vector<int> temp(2);
                    temp[0] = lower;
                    temp[1] = upper;
                    vec.push_back(temp);
                }
            }
            else
                vec.push_back(intervals[i]);
        }
        vector<int> temp(2);
        temp[0] = lower;
        temp[1] = upper;
        if (wait)
        {
            vec.push_back(temp);
        }
        else
        {
            if (lower >= intervals[n - 1][1])
            {
                vec.push_back(newInterval);
            }
        }

        return vec;
    }
};

class Solution
{
public:
    double largestTriangleArea(vector<vector<int>> &points)
    {
        double ans = 0;

        int n = points.size();

        for (int i = 0; i < n; ++i)
        {
            double x1 = points[i][0];
            double y1 = points[i][1];
            for (int j = i + 1; j < n; ++j)
            {
                double x2 = points[j][0];
                double y2 = points[j][1];
                double side1 = sqrt(pow(2, x1 - x2) + pow(2, y1 - y2));

                for (int k = j + 1; k < n; k++)
                {
                    double x3 = points[k][0];
                    double y3 = points[k][1];
                    double side2 = sqrt(pow(2, x1 - x3) + pow(2, y1 - y3));
                    double side3 = sqrt(pow(2, x2 - x3) + pow(2, y2 - y3));

                    double s = 0.5 * (side1 + side2 + side3);
                    double area = s * (s - side1) * (s - side2) * (s - side3);
                    ans = max(ans, area);
                }
            }
        }
        return sqrt(ans);
    }
};

class Solution
{
public:
    int total(vector<vector<int>> &dp, vector<int> &values, int start, int end)
    {
        int front_vertex = start + 1;
        if (end - start < 3)
            return dp[start][end] = 0;
        int mini = INT_MAX;
        for (int i = start + 1; i < end; ++i)
        {
            int temp = values[start] * values[front_vertex] * values[i] + total(dp, values, start, i) + total(dp, values, i, end);

            mini = min(mini, temp);
        }
        return dp[start][end] = mini;
    }

    int minScoreTriangulation(vector<int> &values)
    {
        int n = values.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));

        return total(dp, values, 0, n - 1);
    }
};

class Solution
{
public:
    int triangularSum(vector<int> &nums)
    {
        int n = nums.size();

        for (int i = 0; i < n; ++i)
        {

            for (int j = n - 1; j > i; --j)
            {
                nums[j] = (nums[j] + nums[j - 1]) % 10;
            }
        }

        return nums[n - 1];
    }
};

class Solution
{
public:
    int makeTheIntegerZero(int num1, int num2)
    {
        int i = 1;
        int k = 0;
        while (true)
        {

            long long temp = num1 - i * num2;
            if (temp <= 0)
                return -1;
            if (pow(2, k) >= temp)
                return k;

            k++;
        }

        return -1;
    }
};

class Solution
{
public:
    int peopleAwareOfSecret(int n, int delay, int forget)
    {
        deque<pair<int, int>> know, share;
        share.emplace_back(1, 1);
        pair<int, int> p;
        long long know_cnt = 1, share_cnt = 0;
        long long mod = 1e9 + 7;
        for (int i = 2; i <= n; ++i)
        {

            if (!know.empty() && know.front().first == i - delay)
            {
                know_cnt -= know.front().second;
                share_cnt = (share_cnt + know.front().second) % mod;
                know_cnt = (know_cnt + share_cnt) % mod;
                know.pop_front();
                share.emplace_back(i, share_cnt);
                know.emplace_back(i, know_cnt);
            }

            if (!share.empty() && share.front().first == i - forget)
            {

                share_cnt -= share.front().second;
                share.pop_front();
            }
        }
        return (know_cnt + share_cnt) % mod;
    }
};

int sum(vector<vector<int>> &dp, vector<vector<int>> &triangle, int row, int col)
{
    int n = triangle.size();
    int m = triangle[col].size();
    if (row >= n - 1)
        return 0;
    if (dp[row][col] != INT_MIN)
        return dp[row][col];
    return dp[row][col] = triangle[row][col] + min(sum(dp, triangle, row + 1, col), sum(dp, triangle, row + 1, col + 1));
}

int minimumPathSum(vector<vector<int>> &triangle, int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, INT_MIN));

    return sum(dp, triangle, 0, 0);
}

class Solution
{
public:
    bool check(vector<vector<int>> &visited, vector<vector<char>> &mat, int idx, string &word, int row, int col)
    {
        int n = mat.size(), m = mat[0].size();
        if (idx >= word.size())
            return true;

        if (row >= n || col >= m || visited[row][col] == true)
            return false;

        visited[row][col] = true;
        if (mat[row][col] == word[idx])
        {

            bool one = check(visited, mat, idx + 1, word, row + 1, col);
            bool two = check(visited, mat, idx + 1, word, row - 1, col);
            bool three = check(visited, mat, idx + 1, word, row, col + 1);
            bool four = check(visited, mat, idx + 1, word, row, col - 1);

            if (one || two || three || four)
                return true;
        }

        visited[row][col] = false;
        return false;
    }

    bool isWordExist(vector<vector<char>> &mat, string &word)
    {
        // Code here
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> visited(n, vector<int>(m, false));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (word[0] == mat[i][j])
                {
                    bool found = false;
                    found = check(visited, mat, 0, word, i, j);
                    if (found)
                        return true;
                }
            }
            return false;
        }
    }
};

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();
        vector<int> lmax(n, 0), rmax(n, 0);
        int lm = height[0];
        for (int i = 1; i < n; ++i)
        {
            lmax[i] = lm;
            lm = max(lm, height[i]);
        }
        int rm = height[n - 1];
        for (int i = n - 2; i >= 0; --i)
        {
            rmax[i] = rm;
            rm = max(rm, height[i]);
        }
        int ans = 0;

        for (int i = 1; i < n - 1; ++i)
        {
            if (height[i] <= lmax[i] && height[i] <= rmax[i])
                ans += max(0, min(lmax[i], rmax[i]) - height[i]);
        }

        return ans;
    }
};

class Solution
{
public:
    string removeSubstring(string s, int k)
    {
        stack<char> st;

        int temp1 = 0, temp2 = 0;

        int n = s.size();
        bool build = false;

        for (int i = 0; i < n; ++i)
        {
            if (build)
                temp1 = 0;

            build = false;
            if (s[i] == '(')
            {
                temp1++;
                st.push('(');
            }
            else
            {
                build = true;
                temp2++;
            }
            if (temp2 > temp1)
            {
                st.push(')');
                temp2--;
            }

            if (temp1 >= k && temp2 >= k)
            {
                int t = k;
                while (t > 0)
                {
                    st.pop();
                    t--;
                    temp1--;
                    temp2--;
                }
            }
        }

        string ans = "";
        if (temp1 >= k && temp2 >= k)
        {
            int t = k;
            while (t > 0)
            {
                st.pop();
                t--;
                temp1--;
            }
        }
        while (!st.empty())
        {

            ans += st.top();
            st.pop();
        }

        int l = 0, r = ans.size() - 1;
        while (l < r)
        {
            swap(ans[l], ans[r]);
            l++;
            r--;
        }

        return ans;
    }
};

class Solution
{
public:
    void dfs(vector<vector<int>> &heights, vector<vector<bool>> &visited, int row, int col)
    {
        int n = heights.size(), m = heights[0].size();
        if (row < 0 || col < 0 || row >= n || col >= m || visited[row][col] == true)
            return;

        visited[row][col] = true;

        int h = heights[row][col];

        if (row >= 1 && heights[row - 1][col] >= h)
            dfs(heights, visited, row - 1, col);
        if (col = 1 && heights[row][col - 1] >= h)
            dfs(heights, visited, row, col - 1);
        if (row + 1 < n && heights[row + 1][col] >= h)
            dfs(heights, visited, row + 1, col);
        if (col + 1 < m && heights[row][col + 1] >= h)
            dfs(heights, visited, row, col + 1);
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>> &heights)
    {
        int n = heights.size();

        int m = heights[0].size();

        vector<vector<bool>> visited(n, vector<bool>(m, false)), visited2(n, vector<bool>(m, false));

        for (int i = 0; i < n; ++i)
        {
            dfs(heights, visited, i, 0);
            dfs(heights, visited2, i, m - 1);
        }
        for (int i = 0; i < m; ++i)
        {
            dfs(heights, visited, 0, i);
            dfs(heights, visited2, n - 1, i);
        }

        vector<vector<int>> ans;
        vector<int> temp(2);

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (visited[i][j] && visited2[i][j])
                {
                    temp[0] = i;
                    temp[1] = j;
                    ans.push_back(temp);
                }
            }
        }

        return ans;
    }
};

class Solution
{
public:
    int swimInWater(vector<vector<int>> &grid)
    {
        int time = grid[0][0];
        int n = grid.size();

        std::priority_queue<
            std::tuple<int, int, int>,
            std::vector<std::tuple<int, int, int>>,
            std::greater<std::tuple<int, int, int>>>
            pq;

        vector<vector<int>> vec(50, vector<int>(50, INT_MAX));
        vec[0][0] = time;
        pq.push({time, 0, 0});
        tuple<int, int, int> t;
        while (!pq.empty())
        {
            auto [ct, row, col] = pq.top();
            pq.pop();
            if (row + 1 < n)
            {
                int nt;
                if (ct < grid[row + 1][col])
                    nt = grid[row + 1][col];
                else
                    nt = ct;
                if (vec[row + 1][col] > ct)
                {
                    vec[row + 1][col] = nt;
                    pq.push({ct, row + 1, col});
                }
            }
            if (col - 1 >= 0)
            {
                int nt;
                if (ct < grid[row][col - 1])
                    nt = grid[row][col - 1];
                else
                    nt = ct;
                if (vec[row][col - 1] > ct)
                {
                    vec[row][col - 1] = nt;
                    pq.push({ct, row, col - 1});
                }
            }
            if (col + 1 < n)
            {
                int nt;
                if (ct < grid[row][col + 1])
                    nt = grid[row][col + 1];
                else
                    nt = ct;
                if (vec[row][col + 1] > ct)
                {
                    vec[row][col + 1] = nt;
                    pq.push({ct, row, col + 1});
                }
            }
        }

        return vec[n - 1][n - 1];

        // {grid value, time};
    }
};

class Solution
{
public:
    vector<int> avoidFlood(vector<int> &rains)
    {
        set<int> s;
        int n = rains.size();
        unordered_map<int, int> hash;

        vector<int> ans(n, -1);
        int count = 0;
        for (int i = 0; i < n; ++i)
        {

            if (rains[i] == 0)
                s.insert(i);
            else
            {
                if (hash.find(rains[i]) != hash.end())
                {
                    auto it = s.lower_bound(hash[i]);
                    if (it == s.end())
                        return {};
                    else
                    {
                        ans[*it] = hash[i];
                        s.erase(it);
                    }
                }
            }

            hash[rains[i]] = i;
        }

        while (!s.empty())
        {
            ans[*s.begin()] = rains[0];
            s.erase(s.begin());
        }

        return ans;
    }
};

class Solution
{
public:
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {
        int n = spells.size(), m = potions.size();
        vector<int> ans(n, 0);
        sort(potions.begin(), potions.end());
        for (int i = 0; i < n; ++i)
        {

            long long temp1 = spells[i];

            for (int j = 0; j < m; ++j)
            {
                auto it = lower_bound(potions.begin(), potions.end(), success / temp1);
                ans[i] = it - potions.end();
            }
        }

        return ans;
    }
};

class Solution
{
public:
    long long minTime(vector<int> &skill, vector<int> &mana)
    {
        int n = skill.size(), m = mana.size();
        vector<long long> f(n + 1, 0);
        long long now = f[0];

        for (int j = 0; j < m; ++j)
        {
            long long x = mana[j];
            for (int i = 1; i < n; ++i)
            {
                now = max(now, skill[i - 1] * x, f[i]);
            }
            f[n - 1] = now + skill[n - 1] * x;

            for (int i = n - 2; i >= 0; --i)
            {
                f[i] = f[i + 1] - skill[i + 1] * x;
            }
        }

        return f[n - 1];
    }
};

class Solution
{
public:
    int maximumEnergy(vector<int> &energy, int k)
    {

        vector<int> pref(k, 0), ans(k, INT_MIN);
        int n = energy.size();

        for (int i = 0; i < n; ++i)
        {
            pref[i % k] += energy[i];
        }

        for (int i = 0; i < n; ++i)
        {
            ans[i % k] = max(ans[i % k], pref[i % k]);
            pref[i % k] -= energy[i];
            ans[i % k] = max(ans[i % k], pref[i % k]);
        }

        int ansr = INT_MIN;

        for (int i = 0; i < k; ++i)
            ansr = max(ansr, ans[i]);

        return ansr;
    }
};

// User Function Template
class Solution
{
public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src)
    {
        // Code here
        vector<vector<pair<int, int>>> adj(V);
        int n = edges.size();
        for (int i = 0; i < n; ++i)
        {
            int node1 = edges[i][0];
            int node2 = edges[i][1];
            int wt = edges[i][2];

            adj[node1].push_back({wt, node2});
            adj[node2].push_back({wt, node1});
        }

        priority_queue<pair<int, int>> pq;
        vector<int> dist(V, 1e9);
        dist[src] = 0;
        pq.push({src, 0});

        while (!pq.empty())
        {

            int weight = pq.top().first;
            int node = pq.top().second;
            int sz = adj[node].size();
            for (int i = 0; i < sz; ++i)
            {
                int d = adj[node][i].first;
                int node3 = adj[node][i].second;

                if (weight + d < dist[node3])
                {
                    dist[node3] = weight + d;
                    pq.push({dist[node3], node3});
                }
            }
        }

        return dist;
    }
};

class Solution
{

public:
    long long dam(vector<vector<long long>> &dp, vector<int> &power, int idx, int skip, unordered_map<int, int> &hash)
    {
        if (idx < 0)
            return 0;
        if (dp[idx][skip] != -1)
            return dp[idx][skip];
        int temp = 0;
        int id = idx;
        while (id >= 1 && (power[id - 1] == power[id] - 1 || power[id - 1] == power[id] - 2))
        {

            temp++;
            id--;
        }
        long long take = power[idx] * hash[power[idx]] + dam(dp, power, idx - temp - 1, temp, hash);
        long long dtake = dam(dp, power, idx - 1, 0, hash);

        return dp[idx][skip] = max(take, dtake);
    }

    long long maximumTotalDamage(vector<int> &power)
    {
        vector<int> vec;
        sort(power.begin(), power.end());
        int n = power.size();
        vec.push_back(power[0]);
        unordered_map<int, int> hash;

        for (int i = 0; i < n; ++i)
            hash[power[i]]++;

        for (int i = 1; i < n; ++i)
            if (power[i] != power[i - 1])
                vec.push_back(power[i]);

        int m = vec.size() - 1;

        vector<vector<long long>> dp(n + 1, vector<long long>(4, -1));

        return dam(dp, vec, n - 1, 0, hash);
    }
};

class Solution
{
public:
    vector<string> removeAnagrams(vector<string> &words)
    {
        vector<string> ans;

        int n = words.size();
        unordered_map<string, vector<int>> hash;
        for (int i = 0; i < n; ++i)
        {
            vector<int> vec;
            int m = words[i].size();

            for (int j = 0; j < m; ++j)
                vec[words[i][j] - 'a']++;

            hash[words[i]] = vec;
        }

        stack<int> st;

        for (int i = 0; i < n; ++i)
        {
            if (!st.empty())
            {
                if (hash[words[st.top()]] != hash[words[i]])
                {
                    ans.push_back(words[i]);
                    st.push(i);
                }
            }
            else
            {
                ans.push_back(words[i]);
                st.push(i);
            }
        }
        return ans;
    }
};

class Solution
{
public:
    bool hasIncreasingSubarrays(vector<int> &nums, int k)
    {
        int n = nums.size();

        int l = 0, r = 1;
        int temp = 1;
        bool nomid = true;
        while (l < n && r < n)
        {

            if (nums[l] < nums[r])
            {
                temp++;
                temp = k + 1;
                nomid = true;
            }
            else
            {
                if (temp == k)
                {
                    temp++;
                    nomid = false;
                }
                else
                {
                    if (nomid)
                        l = l - k + 1;
                    temp = 1;
                }
            }
            l++;
            r++;
            if (temp == 2 * k)
                return true;
        }

        return false;
    }
};

class Solution
{
public:
    int maxIncreasingSubarrays(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> pref(n, 1), suf(n, 1);

        int temp = 1, temp2 = 1;
        for (int i = 1; i < n; ++i)
        {

            if (nums[i - 1] < nums[i])
                temp++;
            else
                temp = 1;

            if (nums[n - i] > nums[n - i - 1])
                temp2++;
            else
                temp2 = 1;
            suf[n - i] = temp2;

            pref[i] = temp;
        }
        int ans = 1;
        for (int i = 0; i < n - 1; ++i)
        {
            ans = max(ans, min(suf[i + 1], pref[i]));
        }

        return ans;
    }
};

class Solution
{
public:
    int findSmallestInteger(vector<int> &nums, int value)
    {
        int n = nums.size();

        vector<int> hash(value, 0);

        for (int i = 0; i < n; ++i)
        {
            if (nums[i] < 0)
            {
                int temp = nums[i] % value;
                temp += value;
                hash[temp % value]++;
            }
            else
                hash[abs(nums[i]) % value]++;
        }

        int count = INT_MAX;
        int num = 0;

        for (int i = 0; i < value; ++i)
        {
            if (hash[i] < count)
            {
                count = hash[i];
                num = i;
            }
        }
        return value * count + num;
    }
};

class Solution
{
public:
    bool dfs(vector<bool> &vis, vector<vector<int>> &adj, int p)
    {

        int sz = adj[p].size();

        for (int i = 0; i < sz; ++i)
        {
            if (vis[adj[p][i]])
            {
                if (adj[p][i] != p)
                    return true;
            }
            vis[adj[p][i]] = true;

            if (dfs(vis, adj, adj[p][i]))
                return true;
        }

        return false;
    }
    bool isCycle(int V, vector<vector<int>> &edges)
    {
        vector<bool> vis(V, false);

        vector<vector<int>> adj(V);

        int n = edges.size();

        for (int i = 0; i < n; ++i)
        {

            int n1 = edges[i][0], n2 = edges[i][1];

            adj[n1].push_back(n2);
            adj[n2].push_back(n1);
        }

        for (int i = 0; i < V; ++i)
        {
            if (vis[i] == false)
            {
                if (dfs(vis, adj, -1))
                    return true;
            }
        }

        return false;
    }
};

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i)
        cin >> vec[i];

    int q;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        int x;
        cin >> x;
        auto it = lower_bound(vec.begin(), vec.end(), x);
        if (it == vec.end() || *it != x)
        {
            cout << distance(upper_bound(vec.begin(), vec.end(), x), vec.begin()) << '\n';
        }
        else
            cout << distance(it, vec.begin()) << '\n';
    }

    return 0;
}

class Solution
{
public:
    int maxDistinctElements(vector<int> &nums, int k)
    {
        int sm = nums[0] - k;
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (abs(nums[i] - sm) <= k || nums[i] - k >= sm)
            {
                ans++;
                sm = nums[i] - min((nums[i] - sm), nums[i] - k);
                sm++;
            }
        }
        return ans;
    }
};

void sortTuples(vector<vector<int>> &arr)
{
    // Write your code here

    sort(arr.begin(), arr.end(), [](vector<int> &a, vector<int> &b)
         {
             int n = a.size();
             if (a[n - 1] <= b[n - 1])
                 return true;

             return false; });
}

class Solution
{
public:
    string rt(string &s, int b)
    {

        string t = "";
        int n = s.size();
        for (int i = b; i < n; ++i)
            t += s[i];
        for (int i = 0; i < b; ++i)
            t += s[i];
        return t;
    }

    void add(string &s, int a)
    {

        int n = s.size();

        for (int i = 0; i < n; ++i)
        {
            if (i & 1)
            {
                int b = s[i] - '0';
                b = (a + b) % 10;
                s[i] = b + '0';
            }
        }
    }

    string bfs(string &s, int a, int b)
    {

        std::priority_queue<
            std::string,
            std::vector<std::string>,
            std::greater<std::string>>
            pq;

        pq.push(s);
        string ans = s;
        unordered_map<string, bool> hash;
        while (!pq.empty())
        {
            int n = pq.size();

            for (int i = 0; i < n; ++i)
            {
                string t = pq.top();
                pq.pop();
                if (hash[t] == true)
                    continue;
                hash[t] = true;
                if (t < ans)
                    ans = t;

                pq.push(rt(t, b));
                add(t, a);
                pq.push(t);
            }
        }
        return ans;
    }

    string findLexSmallestString(string s, int a, int b)
    {
        return bfs(s, a, b);
    }
};

int Solution::solve(vector<int> &A, int B)
{
    int n = A.size();
    priority_queue<int> pq;
    for (int i = 0; i < n; ++i)
    {
        pq.push(A[i]);
    }
    int ans = 0;
    while (!pq.empty())
    {
        if (B == 0)
            break;

        int a = pq.top();
        pq.pop();
        ans += a;
        a--;
        pq.push(a);
    }

    return ans;
}

class Solution
{
public:
    int maxFrequency(vector<int> &nums, int k, int numOperations)
    {
        long int maxi = *max_element(nums.begin(), nums.end());

        int n = nums.size();
        vector<long int> vec(maxi + 1, 0);

        for (int i = 0; i < n; ++i)
            vec[nums[i]]++;

        for (int i = 1; i < n; ++i)
            vec[i] += vec[i - 1];

        int m = vec.size();
        long int ans = 1;
        for (int i = 1; i < m; ++i)
        {

            int left = max(0, i - k - 1);
            int right = min((long int)(i + k + 1), maxi);

            int target = vec[i] - vec[i - 1];

            long int temp = target + min((long int)numOperations, vec[right] - vec[left] - target);

            ans = max(ans, temp);
        }

        return ans;
    }
};

class Solution
{
public:
    bool hasSameDigits(string s)
    {
        string temp = s;

        while (true)
        {

            string temp1 = "";

            int n = temp.size();

            for (int i = 1; i < n; ++i)
            {
                temp1 += (temp[i - 1] - '0' + temp[i] - '0') % 10 + '0';
            }
            temp = temp1;
            if (temp.size() == 2)
                break;
        }

        if (temp[0] == temp[1])
            return true;

        return false;
    }
};

class Solution
{
public:
    vector<int> com, v;

    bool good(vector<int> v)
    {

        for (int i = 1; i <= 5; ++i)
        {
            if (v[i] != i && v[i] != 0)
                return false;
        }
        return true;
    }

    bool p = false;
    void comp(vector<int> &ct, int num)
    {

        for (int i = 1; i <= 5; ++i)
        {
            if (ct[i] > i)
                return;
        }
        if (num > 0 && good(ct))
            com.push_back(num);

        for (int i = 1; i <= 5; ++i)
        {
            int temp = num * 10 + i;
            ct[i]++;
            comp(ct, temp);
            ct[i]--;
        }
    }

    Solution() : v(6, 0)
    {                                     // Initialize member v here
        vector<int> initial_counts(6, 0); // Temporary count vector for the initial call
        comp(initial_counts, 0);          // Start the recursive generation
    }

    int nextBeautifulNumber(int n)
    {
        auto it = lower_bound(com.begin(), com.end(), n + 1);

        return *it;
    }
};

string Solution::solve(string A)
{

    unordered_map<char, int> hash, hash2;

    int n = A.size();

    for (int i = 0; i < n; ++i)
        hash[A[i]]++;
    string ans = "";
    for (int i = 0; i < n; ++i)
    {
        if (hash2.find(A[i]) == hash.end())
        {
            ans += A[i];
            ans += hash[A[i]] + '0';
        }

        hash2[A[i]]++;
    }
}

#include <bits/stdc++.h>
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source)
{
    // Write your code here.
    vector<int> dist(vertices, 1e9);
    dist[source] = 0;

    vector<vector<pair<int, int>>> adj(vertices);

    int n = vec.size();

    for (int i = 0; i < n; ++i)
    {
        adj[vec[i][0]].push_back({vec[i][1], vec[i][2]});
        adj[vec[i][1]].push_back({vec[i][0], vec[i][2]});
    }

    std::priority_queue<
        std::pair<int, int>,
        std::vector<std::pair<int, int>>,
        std::greater<std::pair<int, int>>>
        pq;

    n = adj[source].size();

    for (int i = 0; i < n; ++i)
        pq.push({adj[source][i].second, adj[source][i].first});

    while (!pq.empty())
    {

        auto [dis, desti] = pq.top();
        pq.pop();

        int m = adj[desti].size();

        for (int i = 0; i < m; ++i)
        {
            auto [dista, node] = adj[desti][i];
            if (dis + dista < dist[node])
            {
                dist[node] = dis + dista;
                pq.push({dist[node], node});
            }
        }
    }

    return dist;
}

class Solution
{
public:
    string maxSumOfSquares(int num, int sum)
    {
        string ans = "";
        for (int i = 1; i < num; ++i)
        {
            ans += min(sum, 9) + '0';
            sum -= min(sum, 9);
        }
        return ans;
    }
};

class Solution
{
public:
    long long minOperations(vector<int> &nums1, vector<int> &nums2)
    {
        long long ans = 0;
        int temp = nums1[0];

        int n = nums1.size();
        int d = nums2[n];
        for (int i = 0; i < n; ++i)
        {
            ans += abs(nums2[i] - nums1[i]);
            if (abs(nums1[i] - d) < abs(temp - d))
                temp = nums1[i];
        }

        return ans + temp + 1;
    }
};

class Bank
{
public:
    vector<long long> balance;
    int n;
    Bank(vector<long long> &balance)
    {
        this->balance = balance;
        n = balance.size() + 1;
    }

    bool transfer(int account1, int account2, long long money)
    {
        if (account1 > n || account1 < 1 || account2 > n || account2 < 1)
            return false;
        if (balance[account1 - 1] >= money)
        {
            balance[account1 - 1] -= money;
            balance[account2 - 1] += money;
            return true;
        }
        return false;
    }

    bool deposit(int account, long long money)
    {
        if (account > n || account < 1)
            return false;
        balance[account - 1] += money;
        return true;
    }

    bool withdraw(int account, long long money)
    {
        if (account < 1 || account > n)
            return false;

        balance[account - 1] -= money;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */

class Solution
{
public:
    int countValidSelections(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> pref(n), suf(n);
        int prefi = 0, suff = 0;
        for (int i = 0; i < n; ++i)
        {
            pref[i] = prefi;
            suf[n - i - 1] = suff;
            suff += nums[n - i - 1];
            prefi += nums[i];
        }
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (nums[i] == 0)
            {
                if (pref[i] == suf[i])
                    ans++;
            }
        }

        return ans;
    }
};

class Solution
{
public:
    int smallestNumber(int n)
    {
        if (n >= 1 && n <= 3)
            return 3;
        // if(n>=4 && n<=7) return 7;
        // if(n>=8 && n<=15) return 15;
        // if(n>=16 && n<=31) return 31;
        // if(n>=32 && n<=63) return 63;

        // if(n>=64 && n<=127) return 127;
        int l = 2, r = 3;

        for (int i = 0; i < 12; ++i)
        {
            int rr = pow(2, r + i) - 1;
            if (n >= (int)pow(2, l + i) && n <= rr)
                return rr;
        }

        return 3;
    }
};

bool place(vector<int> &stalls, int k, int dist)
{

    int n = stalls.size();
    int last = stalls[0];
    for (int i = 1; i < n; ++i)
    {
        if (stalls[i] - last >= dist)
        {
            k--;
            last = stalls[i];
        }
        if (k == 0)
            return true;
    }

    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{

    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int high = stalls[n - 1];
    int low = 1;

    while (low <= high)
    {

        int mid = low / 2 + (high - low) / 2;

        if (stalls, k, mid)
            low = mid;
        else
            high = mid - 1;
    }

    return low;
}

int knap(vector<vector<int>> &dp, vector<int> &profit, vector<int> &weight, int idx, int wt, int n)
{

    if (idx >= n)
        return 0;

    if (dp[idx][wt] != -1)
        return dp[idx][wt];

    int take = 0, dtake = 0;

    if (wt >= weight[idx])
        take = profit[idx] + knap(dp, profit, weight, idx, wt - weight[idx], n);

    dtake = knap(dp, profit, weight, idx + 1, wt, n);

    return dp[idx][wt] = dtake + take;
}

int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight)
{

    vector<vector<int>> dp(n + 1, vector<int>(w + 1, -1));

    return knap(dp, profit, weight, 0, w, n);
}

vector<string> Solution::deserialize(string A)
{

    vector<string> vec;

    string temp = "", emp = "";

    int n = A.size();

    for (int i = 0; i < n; ++i)
    {
        if (!(isdigit(A[i])) && A[i] != '~')
        {
            temp += A[i];
        }
        if (A[i] == '~')
        {
            vec.push_back(temp);
            temp = emp;
        }
    }

    return vec;
}

class Solution
{
public:
    int rob(vector<int> &dp, vector<int> &arr, int idx)
    {
        int n = arr.size();
        if (idx >= n)
            return 0;

        if (dp[idx] != -1)
            return dp[idx];

        int take, dtake = 0;

        take = arr[idx] + rob(dp, arr, idx + 2);
        dtake = rob(dp, arr, idx + 1);

        return dp[idx] = max(dp[idx], max(take, dtake));
    }

    int findMaxSum(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        vector<int> dp(n + 1, -1);

        return rob(dp, arr, 0);
    }
};

class Solution
{
public:
    int minNumberOperations(vector<int> &target)
    {
        stack<int> st;

        int n = target.size();
        int ans = target[0];
        for (int i = 0; i < n; ++i)
        {
            if (!st.empty() && st.top() < target[i])
            {
                ans += target[i] - st.top();
            }
            st.push(target[i]);
        }

        return ans;
    }
};


#include <bits/stdc++.h>
using namespace std;

long long maxRankDistance(const vector<vector<int>>& arrays) {
    // Write your code here

    vector<tuple<int,int,int>> vec;

    int n=arrays.size();

    for(int i=0; i<n; ++i){
        for(int j=1; j<=arrays[i][0];++j){
            vec.push_back({arrays[i][j],j,i});
        }
    }

    sort(vec.begin(),vec.end());

int r=vec.size()-1,l=0,m=vec.size();
long long maxi1=INT_MIN,maxi2=INT_MIN;
auto[last_ele,last_rank,last_belong]=vec[r];
while(l<m){
    auto[ele,rank,belong]=vec[l];

    if(last_belong!=belong){
        maxi1=r-l;
        break;
    }
    l++;
}
auto[first_ele,first_rank,first_belong]=vec[0];
while(r>=0){
    auto[ele,rank,belong]=vec[r];
    if(first_belong!=belong){
        maxi2=r;
        break;
    }
    r--;
}

return max(maxi1,maxi2);


}