#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// class Solution
// {
// public:
//     bool isvowel(char a)
//     {

//         a = tolower(a);
//         if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
//             return true;
//         return false;
//     }

//     string sortVowels(string s)
//     {
//         int l = 0, r = 1;
//         int n = s.size();
//         if (n == 1)
//             return s;

//         vector<int> vec(26);
//         vector<int> vec1(26);

//         for (int i = 0; i < n; ++i)
//         {
//             if (s[i] <= 'z')
//                 vec[s[i] - 'a']++;
//             else
//                 vec1[s[i] - 'A'];
//         }

//         for (int i = 0; i < n; ++i)
//         {

//             if (isvowel(s[i]))
//             {
//                 if (vec['a' - 'a'] > 0)
//                     s[i] = 'a';
//                 else if (vec['e' - 'a'] > 0)
//                     s[i] = 'e';
//                 else if (vec['i' - 'a'] > 0)
//                     s[i] = 'i';
//                 else if (vec['o' - 'a'] > 0)
//                     s[i] = 'o';
//                 else if (vec['u' - 'a'] > 0)
//                     s[i] = 'u';
//                 else if (vec1['A' - 'A'] > 0)
//                     s[i] = 'A';
//                 else if (vec1['E' - 'A'] > 0)
//                     s[i] = 'E';
//                 else if (vec1['I' - 'A'] > 0)
//                     s[i] = 'I';
//                 else if (vec1['O' - 'A'] > 0)
//                     s[i] = 'O';
//                 else
//                     s[i] = 'U';
//             }
//         }
//         return s;
//     }
// };

// class Solution
// {
// public:
//     int myAtoi(string &s)
//     {
//         // code here
//         int n = s.size();
//         int idx = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             if (s[i] = ' ')
//                 idx++;
//             else
//                 break;
//         }

//         if (idx >= n)
//             return 0;
//         int sign = 1;
//         for (int i = idx; i < n; ++i)
//         {

//             if (s[i] == '-')
//             {
//                 sign = -1;
//                 idx++;
//                 break;
//             }
//         }

//         if (idx >= n)
//             return 0;

//         for (int i = idx; i < n; ++i)
//         {
//             if (s[i] == '0')
//                 idx++;
//             else
//                 break;
//         }

//         if (idx >= n)
//             return 0;
//         long long int cal = 0;
//         for (int i = idx; i < n; ++i)
//         {

//             if (isdigit(s[i]))
//             {
//                 cal *= 10;
//                 cal + s[i] - '0';
//             }
//             else
//                 break;
//         }
//         cal *= sign;
//         if (cal > INT_MAX)
//             return INT_MAX;
//         if (cal < INT_MIN)
//             return INT_MIN;

//         return (int)cal;
//     }
// };

// class Solution
// {
// public:
//     int countPairs(vector<int> &arr, int target)
//     {
//         int l = 0, r = arr.size() - 1, n = arr.size();

//         int ans = 0;
//         while (l < r)
//         {

//             int sum = arr[l] + arr[r];
//             if (sum == target)
//             {
//                 ans++;
//                 r--;
//             }

//             else if (sum < target)
//             {
//                 l++;
//             }
//             else
//             {
//                 r--;
//             }
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     bool check(unordered_map<int, int> &hash1, unordered_map<int, int> &hash2)
//     {

//         for (auto it = hash1.begin(); it != hash1.end(); ++it)
//         {
//             if (hash2.find(it->first) != hash2.end())
//                 return false;
//         }

//         return true;
//     }

//     int minimumTeachings(int n, vector<vector<int>> &languages,
//                          vector<vector<int>> &friendships)
//     {
//         int m = languages.size(), n1 = friendships.size();
//         unordered_map<int, unordered_map<int, int>> hash, hash1;

//         for (int i = 0; i < m; ++i)
//         {
//             unordered_map<int, int> hash1;
//             for (int j = 0; j < languages[i].size(); ++j)
//                 hash1[languages[i][j]]++;
//             hash[i + 1] = hash1;
//         }

//         unordered_set<int> s;
//         for (int i = 0; i < n1; ++i)
//         {
//             if (!check(hash[friendships[i][0]], hash[friendships[i][1]]))
//             {
//                 s.insert(friendships[i][0]);
//                 s.insert(friendships[i][1]);
//             }
//         }
//         int maxi = 0;
//         unordered_map<int, int> hash3;
//         for (auto it = s.begin(); it != s.end(); ++it)
//         {

//             for (int i = 0; i < languages[*it - 1].size(); ++it)
//             {
//                 hash3[languages[*it - 1][i]]++;
//                 maxi = max(maxi, hash3[languages[*it - 1][i]]);
//             }
//         }

//         return (int)s.size() - maxi;
//     }
// };
// int cal(vector<vector<int>> &dp, int i, int j, string &a, string &b)
// {

//     if (i <= 0 || j <= 0)
//         return 0;

//     if (dp[i][j] != -1)
//         return dp[i][j];

//     if (a[i - 1] == b[j - 1])
//         return dp[i][j] = 1 + cal(dp, i - 1, j - 1, a, b);
//     return dp[i][j] = max(cal(dp, i - 1, j, a, b), cal(dp, i, j - 1, a, b));
// }

// // User function Template for C++
// class Solution
// {
// public:
//     int countPairs(vector<int> &arr, int target)
//     {
//         int n = arr.size();
//         if (n == 1)
//             return 0;
//         sort(arr.begin(), arr.end());
//         int l = 0, r = 1;
//         int ans = 0;

//         while (l >= 0 && r >= 0)
//         {

//             int sum = arr[l] + arr[r];
//             if (sum >= target)
//             {
//                 if (l == 0)
//                 {
//                     r--;
//                     l = r - 1;
//                 }
//                 else
//                     l--;
//             }
//             else
//             {
//                 ans += l + 1;
//                 r--;
//             }
//         }
//     }
// };

// int longestSubsequenceLength(const vector<int> &A)
// {
//     int n = A.size();
//     vector<int> dp1(n + 1, 1), dp2(n + 1, 1);

//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = i + 1; j < n; ++j)
//         {
//             if (A[j] > A[i])
//                 dp1[j] = max(dp1[j], 1 + dp1[i]);
//         }
//     }

//     for (int i = n - 1; i > 0; --i)
//     {
//         for (int j = i - 1; j >= 0; --j)
//         {
//             if (A[j] > A[i])
//                 dp2[j] = max(dp2[j], 1 + dp2[i]);
//         }
//     }

//     int ans = 0;

//     for (int i = 0; i < n; ++i)
//         ans = max(ans, dp1[i] + dp2[i]);
//     return ans;
// }

// class Solution
// {
// public:
//     void dfs(vector<vector<int>> &image, int row, int col, int oc, int nc)
//     {
//         int n = image.size(), m = image[0].size();
//         if (row < 0 || row >= n || col < 0 || col >= m || image[row][col] != oc)
//             return;

//         image[row][col] = nc;

//         dfs(image, row - 1, col, oc, nc);
//         dfs(image, row + 1, col, oc, nc);
//         dfs(image, row, col - 1, oc, nc);
//         dfs(image, row, col + 1, oc, nc);
//     }

//     vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
//                                   int newColor)
//     {
//         // Code here
//         int oc = image[sr][sc];
//         int n = image.size(), m = image[0].size();

//         dfs(image, sr, sc, oc, newColor);
//         return image;
//     }
// };

// class Solution
// {
// public:
//     int countPairs(vector<int> &arr, int target)
//     {
//         unordered_map<int, int> hash;
//         int n = arr.size();

//         for (int i = 0; i < n; ++i)
//             hash[arr[i]]++;
//         int ans = 0;
//         for (auto it = hash.begin(); it != hash.end(); ++it)
//         {
//             if (hash.find(target - it->first) != hash.end())
//             {
//                 if (it->first == target - it->first)
//                 {
//                     ans += (it->second) * (it->second - 1) / 2;
//                 }
//                 else
//                     ans += it->second * hash[target - it->first];
//             }
//         }

//         return ans;
//     }
// };

// string shortestSupersequence(string a, string b)
// {
//     int n = a.size(), m = b.size();
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
//     string ans = "";

//     cal(dp, n, m, a, b);
//     int i = n, j = m;
//     while (i > 0 && j > 0)
//     {
//         if (a[i - 1] == b[j - 1])
//         {
//             ans += a[i - 1];
//             i--;
//             j--;
//         }
//         else
//         {
//             if (dp[i - 1][j] > dp[i][j - 1])
//             {
//                 ans += a[i - 1];
//                 i--;
//             }
//             else
//             {
//                 ans += b[j - 1];
//                 j--;
//             }
//         }
//     }

//     while (i > 0)
//     {
//         ans += a[i - 1];
//         i--;
//     }
//     while (j > 0)
//     {
//         ans += b[j - 1];
//         j--;
//     }

//     reverse(ans.begin(), ans.end());
//     return ans;
// }

// int solve(int A)
// {
//     if (A == 0)
//         return 1;
//     if (A == 1)
//         return 3;
//     int MOD = (int)1e9 + 7;
//     long long ans = ((A) % MOD * ((int)pow(2, A - 1) - 1) % MOD + 3) % MOD;
//     return (int)ans;
// }

// long solve(int A, int B)
// {

//     int idx = 0;

//     while (idx < B)
//     {
//         if (A == 1)
//         {
//             idx++;
//             break;
//         }
//         else if (A % 2 == 0)
//             A /= 2;
//         else
//             A * 3 + 1;
//         idx++;
//     }
//     if (idx == B)
//         return A;

//     int a = (B - idx) % 3;
//     if (a % 3 == 0)
//         return 1;
//     else if (a % 3 == 1)
//         return 4;
//     return 2;
// }

// // User function template for C++
// class Solution
// {
// public:
//     string addBinary(string &s1, string &s2)
//     {
//         // your code here
//         string ans = 0;
//         int carry = 0;
//         int r1 = s1.size() - 1, r2 = s2.size() - 1;

//         while (r1 >= 0 || r2 >= 0)
//         {
//             int temp = 0;
//             if (r1 >= 0)
//                 temp += s1[r1] - '0';
//             if (r2 >= 0)
//                 temp += s2[r2] - '0';
//             temp += carry;

//             if (temp == 1)
//             {
//                 carry = 0;
//                 ans += '1';
//             }
//             else if (temp == 0)
//             {
//                 ans += '0';
//                 carry = 0;
//             }
//             else if (temp == 2)
//             {
//                 ans += '0';
//                 carry = 1;
//             }
//             else
//             {
//                 temp += '1';
//                 carry = 1;
//             }
//             r1--;
//             r2--;
//         }

//         reverse(ans.begin(), ans.end());
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     bool isvowel(char a)
//     {
//         if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
//             return true;
//         return false;
//     }
//     int maxFreqSum(string s)
//     {
//         vector<int> vec(26, 0);
//         int n = s.size();
//         int vow = 0, con = 0, ans = 1;
//         for (int i = 0; i < n; ++i)
//         {
//             vec[s[i] - 'a']++;
//             if (isvowel(s[i]))
//                 vow = max(vow, vec[s[i] - 'a']);
//             else
//                 con = max(con, vec[s[i] - 'a']);

//             ans = max(ans, max(con, vow));
//         }

//         return ans;
//     }
// };

// int finds(vector<int> &vec, int l, int r, int target, unordered_map<int, int> &hash)
// {
//     if (l > r)
//         return -1;
//     int mid = l + (r - l) / 2;

//     if (vec[mid] >= target)
//     {
//         if (mid == 0)
//             return hash[vec[mid]];

//         if (vec[mid - 1] < target)
//             return hash[vec[mid]];
//         else
//             return finds(vec, l, mid - 1, target, hash);
//     }

//     else
//         return finds(vec, mid + 1, r, target, hash);
// }

// vector<int> solve(vector<int> &A, vector<int> &B)
// {

//     vector<int> vec;
//     sort(A.begin(), A.end());
//     unordered_map<int, int> hash;
//     int n = A.size();
//     for (int i = 0; i < n; ++i)
//     {
//         hash[A[i]] = i;
//     }

//     for (int i = 0; i < B.size(); ++i)
//     {
//         int a = finds(A, 0, A.size() - 1, B[i], hash);
//         vec.push_back(a);
//     }
//     return vec;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int id;
//     cin >> id;
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         int x1, y1, x2, y2, x3, y3;
//         cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

//         float x, y, z;
//         x = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
//         y = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
//         z = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

//         float ang1, ang2, ang3;
//         ang1 = acos((x * x + y * y - z * z) / 2 * x * y) * 180.0 / M_PI;
//         ang2 = acos((x * x + z * z - y * y) / 2 * x * z) * 180.0 / M_PI;
//         ang3 = acos((z * z + y * y - x * x) / 2 * z * y) * 180.0 / M_PI;

//         string side = "Scalene";
//         if (x == y || y == z || y == x)
//             side = "Isosceles";
//         string angle = "Acute";
//         if (ang1 == 90 || ang2 == 90 || ang3 == 90)
//             angle = "Right";
//         if (ang1 > 90 || ang2 > 90 || ang3 > 90)
//             angle = "Obtuse";
//         if (id == 1)
//             cout << side << " triangle" << '\n';
//         else
//             cout << side << " " << angle << " triangle" << '\n';
//     }
//     return 0;
// }

// class Solution
// {
// public:
//     int dps(vector<vector<int>> &dp, int idx, vector<int> &nums, int x, int sum)
//     {

//         if (idx >= nums.size())
//             return 0;
//         if (sum < 0)
//             return 0;
//         if (dp[idx][sum] != -1)
//             return dp[idx][sum];
//         if (sum - min(nums[idx], x) == 0)
//             return dp[idx][sum] = 1;
//         int take = 0;
//         if (sum - min(nums[idx], x) > 0)
//             take = dps(dp, idx + 1, nums, x, sum - min(nums[idx], x));
//         int dtake = dps(dp, idx + 1, nums, x, sum);

//         return dp[idx][sum] = max(take, dtake);
//     }
//     vector<bool> subsequenceSumAfterCapping(vector<int> &nums, int k)
//     {
//         int n = nums.size();
//         vector<bool> vec(n);
//         for (int i = 1; i <= n; ++i)
//         {
//             vector<vector<int>> dp(n, vector<int>(k + 1, -1));
//             if (dps(dp, 0, nums, i, k) > 0)
//                 vec[i - 1] = true;
//         }

//         return vec;
//     }
// };

// class Solution
// {
// public:
//     bool isVowel(char c)
//     {
//         c = tolower(c); // convert to lowercase
//         return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
//     }

//     string cv(string &s)
//     {
//         int n = s.size();
//         string ans = "";
//         for (int i = 0; i < n; ++i)
//         {
//             if (isVowel(s[i]))
//                 ans += '*';
//             else
//                 ans += s[i];
//         }

//         return ans;
//     }

//     vector<string> spellchecker(vector<string> &wordlist, vector<string> &queries)
//     {

//         vector<string> ans;

//         unordered_map<string, int> hash;
//         unordered_map<string, string> hash2;

//         int n = wordlist.size();

//         for (int i = 0; i < n; ++i)
//         {
//             hash[wordlist[i]]++;
//             string b = wordlist[i];
//             transform(b.begin(), b.end(), b.begin(), ::tolower);
//             string a = cv(b);
//             if (hash2.find(a) == hash2.end())
//                 hash2[a] = wordlist[i];

//             if (hash2.find(b) == hash2.end())
//                 hash2[b] = wordlist[i];
//         }

//         int m = queries.size();

//         for (int i = 0; i < m; ++i)
//         {
//             if (hash.find(queries[i]) != hash.end())
//                 ans.push_back(queries[i]);
//             else
//             {
//                 string b = queries[i];
//                 transform(b.begin(), b.end(), b.begin(), ::tolower);
//                 if (hash2.find(b) != hash2.end())
//                     ans.push_back(hash2[b]);
//                 else if (hash2.find(cv(b)) != hash2.end())
//                     ans.push_back(hash2[b]);
//                 else
//                     ans.push_back("");
//             }
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int canBeTypedWords(string text, string brokenLetters)
//     {
//         int n = text.size(), words = 1;
//         vector<vector<int>> vec;
//         vector<int> temp(26, 0), te(26, 0);
//         for (int i = 0; i < n; ++i)
//         {
//             if (text[i] == ' ')
//             {
//                 vec.push_back(temp);
//                 temp = te;
//                 words++;
//             }
//             else
//                 temp[text[i] - 'a']++;
//         }
//         vec.push_back(temp);

//         int m = brokenLetters.size();

//         for (int i = 0; i < m; ++i)
//         {
//             n = vec.size();
//             if (n == 0)
//                 break;
//             for (int j = n - 1; j >= 0; --j)
//             {
//                 if (vec[j][brokenLetters[i] - 'a'] > 0)

//                     vec.erase(vec.begin() + j);
//             }
//         }
//         return (int)vec.size();
//     }
// };

// class Solution
// {
// public:
//     bool check(int a, int b)
//     {
//         if (gcd(a, b) > 1)
//             return true;
//         return false;
//     }
//     vector<int> replaceNonCoprimes(vector<int> &nums)
//     {

//         stack<int> st;
//         st.push(nums[0]);
//         int n = nums.size();
//         int first, second;
//         for (int i = 1; i < n; ++i)
//         {
//             if (!st.empty())
//             {
//                 first = st.top();
//                 second = nums[i];
//                 if (check(first, second))
//                 {

//                     st.pop();
//                     int temp = lcm(first, second);

//                     while (!st.empty() && check(st.top(), temp))
//                     {
//                         temp = lcm(st.top(), temp);
//                         st.pop();
//                     }
//                     st.push(temp);
//                 }
//             }
//             else
//                 st.push(nums[i]);
//         }

//         vector<int> vec;
//         n = st.size();
//         for (int i = 0; i < n; ++i)
//         {
//             vec.push_back(st.top());
//             st.pop();
//         }
//         return vec;
//     }
// };

// class Solution
// {
// public:
//     bool pos(vector<int> &stalls, int x, int k)
//     {
//         int n = stalls.size();
//         k--;
//         int prev = stalls[0];
//         for (int i = 1; i < n; ++i)
//         {
//             if (stalls[i] - prev >= x)
//                 k--;
//             if (k == 0)
//                 return true;
//         }

//         return false;
//     }

//     int aggressiveCows(vector<int> &stalls, int k)
//     {
//         // code here
//         sort(stalls.begin(), stalls.end());

//         int n = stalls.size();

//         int r = stalls[n - 1] - stalls[0];

//         int l = 1;

//         while (l <= r)
//         {

//             int mid = l + (r - l) / 2;

//             if (pos(stalls, mid, k))
//                 l = mid;
//             else
//                 r = mid;
//         }

//         return l;
//     }
// };

// struct MyCompare
// {
//     bool operator()(const std::pair<std::string, int> &a,
//                     const std::pair<std::string, int> &b) const
//     {

//         // 1. Primary Sort: Compare by the integer (.second) in DESCENDING order.
//         if (a.second != b.second)
//         {
//             return a.second > b.second;
//         }

//         // 2. Secondary Sort (Tie-Breaker): If integers are equal,
//         //    compare by the string (.first) in ASCENDING order.
//         return a.first < b.first;
//     }
// };

// class FoodRatings
// {
// public:
//     unordered_map<string, string> hash;
//     unordered_map<string, int> hash3;
//     map<string, set<pair<string, int>, MyCompare>> hash2;

//     vector<string> foods, cuisines;
//     vector<int> ratings;
//     // cuisine  i is the  type of cuisine the ith food is.

//     FoodRatings(vector<string> &foods, vector<string> &cuisines,
//                 vector<int> &ratings)
//     {

//         int n = foods.size();
//         this->foods = foods;
//         this->cuisines = cuisines;
//         this->ratings = ratings;
//         for (int i = 0; i < n; ++i)
//         {
//             hash3[foods[i]] = ratings[i];
//             hash[foods[i]] = cuisines[i];
//             hash2[cuisines[i]].insert({foods[i], ratings[i]});
//         }
//     }

//     void changeRating(string food, int newRating)
//     {
//         string cuisine = hash[food];
//         hash2[cuisine].erase({food, hash3[food]});
//         hash3[food] = newRating;
//         hash2[cuisine].insert({food, hash3[food]});
//     }

//     string highestRated(string cuisine)
//     {
//         return hash2[cuisine].begin()->first;
//     }
// };

// /**
//  * Your FoodRatings object will be instantiated and called as such:
//  * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
//  * obj->changeRating(food,newRating);
//  * string param_2 = obj->highestRated(cuisine);
//  */

// /*
// #include<iostream>
// using namespace std;
// */

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         int n, k;
//         cin >> n >> k;
//         long long ans = 0;

//         int now = 0;
//         vector<long int> wealth(n), pref(n);
//         for (int i = 0; i < n; ++i)
//             cin >> wealth[i];
//         for (int i = 0; i < n; ++i)
//             cin >> pref[i];

//         int prefer = 0;
//         long long money = 0;

//         for (int i = 0; i < n - 1; ++i)
//         {
//             if (prefer != pref[i + 1])
//             {
//                 if (wealth[i + 1] - k > -wealth[i])
//                 {
//                     prefer = pref[i + 1];
//                     money += wealth[i + 1] - k;
//                 }
//                 else
//                     money -= wealth[i + 1];
//             }
//         }

//         cout << money << '\n';
//     }
//     return 0;
// }

// class TaskManager
// {
// public:
//     struct MyCompare
//     {
//         bool operator()(const vector<int> &a,
//                         const vector<int> &b) const
//         {
//             if (a[2] == b[2])
//                 return a[1] > b[1];
//             return a[2] >
//                    b[2];
//         }
//     };
//     vector<vector<int>> tasks;
//     set<vector<int>, MyCompare> s;
//     map<int, pair<int, int>> hash;

//     TaskManager(vector<vector<int>> &tasks)
//     {
//         this->tasks = tasks;

//         int n = tasks.size();
//         for (int i = 0; i < n; ++i)
//         {
//             s.insert(tasks[i]);
//             hash[tasks[i][1]] = {tasks[i][0], tasks[i][1]};
//         }
//     }

//     void add(int userId, int taskId, int priority)
//     {
//         s.insert({userId, taskId, priority});
//     }

//     void edit(int taskId, int newPriority)
//     {

//         pair<int, int> p = hash[taskId];

//         s.erase({p.first, taskId, p.second});
//         s.insert({p.first, taskId, newPriority});
//         hash[taskId] = {p.first, newPriority};
//     }

//     void rmv(int taskId)
//     {
//         pair<int, int> p = hash[taskId];
//         s.erase({p.first, taskId, p.second});
//     }

//     int execTop()
//     {
//         if (s.empty())
//             return -1;
//         vector<int> vec = *s.begin();
//         s.erase(s.begin());
//         return vec[0];
//     }
// };

// /**
//  * Your TaskManager object will be instantiated and called as such:
//  * TaskManager* obj = new TaskManager(tasks);
//  * obj->add(userId,taskId,priority);
//  * obj->edit(taskId,newPriority);
//  * obj->rmv(taskId);
//  * int param_4 = obj->execTop();
//  */

// class Spreadsheet
// {
// public:
//     vector<vector<int>> vec;
//     Spreadsheet(int rows)
//     {
//         vec.resize(rows + 1);
//         for (int i = 0; i <= rows; ++i)
//             vec[i].resize(26, 0);
//     }

//     void setCell(string cell, int value)
//     {
//         int col = cell[0] - 'A', n = cell.size();

//         string s = cell.substr(1, n);
//         int row = stoi(s);

//         vec[row][col] = value;
//     }

//     void resetCell(string cell)
//     {
//         int col = cell[0] - 'A', n = cell.size();

//         string s = cell.substr(1, n);
//         int row = stoi(s);
//         vec[row][col] = 0;
//     }

//     int getValue(string formula)
//     {
//         string a = "", b = "";
//         int i = 1;
//         while (formula[i] != '+')
//         {
//             a += formula[i];
//         }
//         int n = formula.size();
//         while (i < n)
//             b += formula[i];
//         int first = 0, second = 0;
//         int n1 = a.size(), n2 = b.size();
//         if (isalpha(a[0]))
//         {
//             string c = a.substr(1, n1 - 1);
//             int row = stoi(c);
//             first = vec[row][a[0] - 'A'];
//         }
//         else
//             first = stoi(a);

//         if (isalpha(b[0]))
//         {
//             string c = b.substr(1, n2 - 1);
//             int row = stoi(c);
//             second = vec[row][b[0] - 'A'];
//         }
//         else
//             second = stoi(b);

//         return first + second;
//     }
// };

// /**
//  * Your Spreadsheet object will be instantiated and called as such:
//  * Spreadsheet* obj = new Spreadsheet(rows);
//  * obj->setCell(cell,value);
//  * obj->resetCell(cell);
//  * int param_3 = obj->getValue(formula);
//  */

// class Solution
// {
// public:
//     void setMatrixZeroes(vector<vector<int>> &mat)
//     {
//         int idx = 1;

//         int n = mat.size(), m = mat[0].size();
//         for (int i = 0; i < n; ++i)
//         {
//             if (mat[i][0] == 0)
//             {
//                 idx = 0;
//                 break;
//             }
//         }

//         for (int i = 0; i < m; ++i)
//         {
//             if (mat[0][i] == 0)
//             {
//                 mat[0][0] = 0;
//                 break;
//             }
//         }

//         for (int i = 1; i < n; ++i)
//         {
//             for (int j = 1; j < m; ++j)
//             {

//                 if (mat[i][j] == 0)
//                 {
//                     mat[i][0] = 0;
//                     mat[0][j] = 0;
//                 }
//             }
//         }
//         for (int i = 1; i < n; ++i)
//         {
//             for (int j = 1; j < m; ++j)
//             {

//                 if (mat[i][0] == 0 || mat[0][j] == 0)
//                     mat[i][j] = 0;
//             }
//         }
//         for (int i = 0; i < m; ++i)
//         {
//             if (mat[0][0] == 0)
//                 mat[0][i] = 0;
//         }

//         for (int i = 0; i < n; ++i)
//         {
//             if (idx == 0)
//                 mat[i][0] = 0;
//         }
//     }
// };

// class Router
// {
// public:
//     deque<vector<int>> dq;
//     unordered_map<int, deque<int>> hash;
//     map<tuple<int, int, int>, bool> hash2;
//     int sz = 0;

//     Router(int memoryLimit) { sz = memoryLimit; }

//     bool addPacket(int source, int destination, int timestamp)
//     {

//         vector<int> vec;
//         tuple<int, int, int> tp{source, destination, timestamp};
//         vec.push_back(source);
//         vec.push_back(destination);
//         vec.push_back(timestamp);

//         if (dq.size() == sz)
//         {
//             vector<int> v = dq.front();
//             if (v == vec)
//                 return false;
//             tuple<int, int, int> tp1{v[0], v[1], v[2]};
//             hash[v[1]].pop_front();
//             hash2[tp1] = false;
//             dq.pop_front();
//         }

//         if (hash2[tp] == false)
//         {
//             dq.push_back(vec);
//             hash2[tp] = true;
//             hash[destination].push_back(timestamp);
//             return true;
//         }

//         return false;
//     }

//     vector<int> forwardPacket()
//     {
//         vector<int> vec;
//         if (!dq.empty())
//         {
//             vec = dq.front();
//             tuple<int, int, int> tp{vec[0], vec[1], vec[2]};
//             dq.pop_front();
//             hash2[tp] = false;
//             hash[vec[1]].pop_front();
//         }
//         return vec;
//     }

//     int getCount(int destination, int startTime, int endTime)
//     {

//         auto it1 = lower_bound(hash[destination].begin(),
//                                hash[destination].end(), startTime);
//         auto it2 = upper_bound(hash[destination].begin(),
//                                hash[destination].end(), endTime);
//         return (int)distance(it1, it2);
//     }
// };

// /**
//  * Your Router object will be instantiated and called as such:
//  * Router* obj = new Router(memoryLimit);
//  * bool param_1 = obj->addPacket(source,destination,timestamp);
//  * vector<int> param_2 = obj->forwardPacket();
//  * int param_3 = obj->getCount(destination,startTime,endTime);
//  */

// class Solution
// {
// public:
//     void check(vector<int> &vec, vector<int> &nums, int &mini, int count,
//                int &n)
//     {
//         if (count > mini)
//             return;
//         if (vec == nums)
//         {
//             mini = min(mini, count);
//             return;
//         }

//         // window size 1
//         for (int i = 0; i < n; ++i)
//         {
//             int a = vec[i];
//             vec.erase(vec.begin() + i);
//             for (int j = 0; j < n; ++j)
//             {
//                 if (j != i)
//                 {
//                     vec.insert(vec.begin() + j, a);
//                     check(vec, nums, mini, count + 1, n);
//                     vec.erase(vec.begin() + j);
//                 }
//             }
//             vec.insert(nums.begin() + i, a);
//         }
//         // window size 2
//         if (n >= 2)
//             return;
//         for (int i = 0; i < n - 1; ++i)
//         {
//             auto start = vec.begin() + i;
//             auto end = vec.begin() + i + 2;
//             vector<int> temp(start, end);
//             vec.erase(start, end);
//             for (int j = 0; j < n - 1; ++j)
//             {
//                 if (j != i)
//                 {
//                     vec.insert(vec.begin() + j, temp.begin(), temp.end());
//                     check(vec, nums, mini, count + 1, n);
//                     vec.erase(vec.begin() + j, vec.begin() + j + 2);
//                 }
//             }
//             vec.insert(vec.begin() + i, temp.begin(), temp.end());
//         }
//         // window size 3
//         if (n >= 3)
//             return;
//         for (int i = 0; i < n - 2; ++i)
//         {
//             auto start = vec.begin() + i;
//             auto end = vec.begin() + i + 3;
//             vector<int> temp(start, end);
//             vec.erase(start, end);
//             for (int j = 0; j < n - 2; ++j)
//             {
//                 if (j != i)
//                 {
//                     vec.insert(vec.begin() + j, temp.begin(), temp.end());
//                     check(vec, nums, mini, count + 1, n);
//                     vec.erase(vec.begin() + j, vec.begin() + j + 3);
//                 }
//             }
//             vec.insert(vec.begin() + i, temp.begin(), temp.end());
//         }
//         // window size 4
//         if (n >= 4)
//             return;
//         for (int i = 0; i < n - 3; ++i)
//         {
//             auto start = vec.begin() + i;
//             auto end = vec.begin() + i + 3;
//             vector<int> temp(start, end);
//             vec.erase(start, end);
//             for (int j = 0; j < n - 3; ++j)
//             {
//                 if (j != i)
//                 {
//                     vec.insert(vec.begin() + j, temp.begin(), temp.end());
//                     check(vec, nums, mini, count + 1, n);
//                     vec.erase(vec.begin() + j, vec.begin() + j + 3);
//                 }
//             }
//             vec.insert(vec.begin() + i, temp.begin(), temp.end());
//         }
//         // window size 5
//         if (n >= 5)
//             return;
//         for (int i = 0; i < n - 4; ++i)
//         {
//             auto start = vec.begin() + i;
//             auto end = vec.begin() + i + 4;
//             vector<int> temp(start, end);
//             vec.erase(start, end);
//             for (int j = 0; j < n - 4; ++j)
//             {
//                 if (j != i)
//                 {
//                     vec.insert(vec.begin() + j, temp.begin(), temp.end());
//                     check(vec, nums, mini, count + 1, n);
//                     vec.erase(vec.begin() + j, vec.begin() + j + 4);
//                 }
//             }
//             vec.insert(vec.begin() + i, temp.begin(), temp.end());
//         }
//     }

//     int minSplitMerge(vector<int> &nums1, vector<int> &nums2)
//     {
//         int mini = INT_MAX;
//         int count = 0;
//         int n = nums1.size();
//         check(nums1, nums2, mini, count, n);

//         return mini;
//     }
// };

// class MovieRentingSystem
// {
// public:
//     map<int, set<pair<int, int>>> hash;
//     map<pair<int, int>, int> hash1;
//     set<tuple<int, int, int>> rented;

//     MovieRentingSystem(int n, vector<vector<int>> &entries)
//     {

//         for (int i = 0; i < n; ++i)
//         {
//             hash[entries[i][1]].insert({entries[i][2], entries[i][0]});
//             hash1[{entries[i][0], entries[i][1]}] = entries[i][2];
//         }
//     }

//     vector<int> search(int movie)
//     {
//         vector<int> vec;
//         set<pair<int, int>> s = hash[movie];
//         int count = 0;
//         for (auto it = s.begin(); it != s.end() && count < 5; ++it, ++count)
//         {
//             vec.push_back(it->second);
//         }

//         return vec;
//     }

//     void rent(int shop, int movie)
//     {

//         int price = hash1[{shop, movie}];
//         hash[movie].erase({price, shop});
//         rented.insert({price, shop, movie});
//     }

//     void drop(int shop, int movie)
//     {
//         int price = hash1[{shop, movie}];
//         rented.erase({price, shop, movie});

//         hash[movie].insert({price, shop});
//     }

//     vector<vector<int>> report()
//     {
//         vector<vector<int>> ans;
//         auto it = rented.begin();
//         int count = 0;
//         while (count < 5 && it != rented.end())
//         {
//             auto [price, shop, movie] = *it;
//             vector<int> temp(2);
//             temp[0] = shop;
//             temp[1] = movie;
//             ans.push_back(temp);
//             ++it;
//         }
//         return ans;
//     };
// };

// /**
//  * Your MovieRentingSystem object will be instantiated and called as such:
//  * MovieRentingSystem* obj = new MovieRentingSystem(n, entries);
//  * vector<int> param_1 = obj->search(movie);
//  * obj->rent(shop,movie);
//  * obj->drop(shop,movie);
//  * vector<vector<int>> param_4 = obj->report();
//  */

// class Solution
// {
// public:
//     bool dfs(vector<int> &vis, vector<vector<int>> &adj, int node, int parent)
//     {

//         int n = adj[node].size();

//         for (int i = 0; i < n; ++i)
//         {
//             if (vis[adj[node][i]] != -1 && vis[adj[node][i]] != parent)
//                 return true;
//             else
//             {
//                 if (vis[adj[node][i]] == -1)
//                 {
//                     vis[adj[node][i]] = node;
//                     return dfs(vis, adj, adj[node][i], node);
//                 }
//             }
//         }
//         return false;
//     }

//     bool isCycle(int V, vector<vector<int>> &edges)
//     {
//         // Code here
//         vector<vector<int>> adj(V);
//         vector<int> vis(V, -1);

//         int n = edges.size();

//         for (int i = 0; i < n; ++i)
//         {
//             adj[edges[i][0]].push_back(adj[i][1]);
//             adj[edges[i][1]].push_back(adj[i][0]);
//         }
//         for (int i = 0; i < V; ++i)
//         {
//             if (dfs(vis, adj, i, -1))
//                 return true;
//         }
//         return false;
//     }
// };

// class Solution
// {
// public:
//     string fractionToDecimal(int numerator, int denominator)
//     {
//         string ans = "";

//         bool point = false;
//         int num = numerator;
//         int den = denominator;
//         ans += to_string(num / den);
//         num = num % den;
//         if (num == 0)
//             return ans;
//         else
//             ans += '.';
//         num *= 10;
//         map<pair<int, int>, bool> hash;
//         int repeating = INT_MAX;
//         while (num > 0)
//         {
//             if (hash.find({num / den, num % den}) != hash.end())
//             {
//                 repeating = num / den;
//                 break;
//             }
//             ans += to_string(num / den);
//             hash[{num / den, num % den}] = true;
//             num = num % den;
//             num *= 10;
//         }

//         if (repeating != INT_MAX)
//         {
//             int l = 0;
//             while (ans[l] != '.')
//                 l++;

//             l++;
//             while (l < ans.size())
//             {
//                 if (ans[l] == repeating + '0')
//                     break;
//                 l++;
//             }
//             ans.insert(l, 1, '(');
//             ans += ')';
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int sum(vector<vector<int>> &dp, vector<vector<int>> &triangles, int row, int col)
//     {
//         int n = triangles.size();
//         if (row >= triangles.size())
//             return 0;
//         if (dp[row][col] != -1)
//             return dp[row][col];

//         return dp[row][col] = triangles[row][col] +
//                               min(sum(dp, triangles, row + 1, col + 1),
//                                   sum(dp, triangles, row + 1, col));
//     }
//     int minimumTotal(vector<vector<int>> &triangle)
//     {
//         int n = triangle.size();
//         int m = triangle[n - 1].size();
//         vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

//         return sum(dp, triangle, 0, 0);
//     }
// };

// class Solution
// {
// public:
//     int triangleNumber(vector<int> &nums)
//     {
//         sort(nums.begin(), nums.end());
//         int n = nums.size();
//         if (n <= 2)
//             return 0;
//         int l = 0, r = 1;
//         // we'll use upperbound
//         int ans = 0;
//         while (l < n && r < n)
//         {

//             int find = nums[l] + nums[r] - 1;
//             auto it = upper_bound(nums.begin(), nums.end(), find);
//             if (it == nums.end())
//             {

//                 if (nums[n - 1] <= find)
//                     ans += max(0, n - 1 - r);
//                 l++;
//                 r = l + 1;
//             }
//             else
//             {
//                 ans += it - nums.begin() - r - 1;
//                 r++;
//             }
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
//                                        vector<int> &newInterval)
//     {
//         // code here
//         vector<vector<int>> vec;

//         int lower = INT_MAX;
//         int upper = INT_MIN;
//         bool wait = false;

//         int n = intervals.size();

//         for (int i = 0; i < n; ++i)
//         {

//             if (intervals[i][0] <= newInterval[0] && intervals[i][1] >= newInterval[0])
//             {
//                 lower = intervals[i][0];
//                 wait = true;
//             }
//             if (wait)
//             {
//                 if (intervals[i][0] <= newInterval[1] && intervals[i][1] >= newInterval[1])
//                 {
//                     upper = intervals[i][1];
//                     wait = false;
//                     vector<int> temp(2);
//                     temp[0] = lower;
//                     temp[1] = upper;
//                     vec.push_back(temp);
//                 }
//             }
//             else
//                 vec.push_back(intervals[i]);
//         }
//         vector<int> temp(2);
//         temp[0] = lower;
//         temp[1] = upper;
//         if (wait)
//         {
//             vec.push_back(temp);
//         }
//         else
//         {
//             if (lower >= intervals[n - 1][1])
//             {
//                 vec.push_back(newInterval);
//             }
//         }

//         return vec;
//     }
// };

// class Solution
// {
// public:
//     double largestTriangleArea(vector<vector<int>> &points)
//     {
//         double ans = 0;

//         int n = points.size();

//         for (int i = 0; i < n; ++i)
//         {
//             double x1 = points[i][0];
//             double y1 = points[i][1];
//             for (int j = i + 1; j < n; ++j)
//             {
//                 double x2 = points[j][0];
//                 double y2 = points[j][1];
//                 double side1 = sqrt(pow(2, x1 - x2) + pow(2, y1 - y2));

//                 for (int k = j + 1; k < n; k++)
//                 {
//                     double x3 = points[k][0];
//                     double y3 = points[k][1];
//                     double side2 = sqrt(pow(2, x1 - x3) + pow(2, y1 - y3));
//                     double side3 = sqrt(pow(2, x2 - x3) + pow(2, y2 - y3));

//                     double s = 0.5 * (side1 + side2 + side3);
//                     double area = s * (s - side1) * (s - side2) * (s - side3);
//                     ans = max(ans, area);
//                 }
//             }
//         }
//         return sqrt(ans);
//     }
// };

// class Solution
// {
// public:
//     int total(vector<vector<int>> &dp, vector<int> &values, int start, int end)
//     {
//         int front_vertex = start + 1;
//         if (end - start < 3)
//             return dp[start][end] = 0;
//         int mini = INT_MAX;
//         for (int i = start + 1; i < end; ++i)
//         {
//             int temp = values[start] * values[front_vertex] * values[i] + total(dp, values, start, i) + total(dp, values, i, end);

//             mini = min(mini, temp);
//         }
//         return dp[start][end] = mini;
//     }

//     int minScoreTriangulation(vector<int> &values)
//     {
//         int n = values.size();
//         vector<vector<int>> dp(n, vector<int>(n, -1));

//         return total(dp, values, 0, n - 1);
//     }
// };

// class Solution
// {
// public:
//     int triangularSum(vector<int> &nums)
//     {
//         int n = nums.size();

//         for (int i = 0; i < n; ++i)
//         {

//             for (int j = n - 1; j > i; --j)
//             {
//                 nums[j] = (nums[j] + nums[j - 1]) % 10;
//             }
//         }

//         return nums[n - 1];
//     }
// };

// class Solution
// {
// public:
//     int makeTheIntegerZero(int num1, int num2)
//     {
//         int i = 1;
//         int k = 0;
//         while (true)
//         {

//             long long temp = num1 - i * num2;
//             if (temp <= 0)
//                 return -1;
//             if (pow(2, k) >= temp)
//                 return k;

//             k++;
//         }

//         return -1;
//     }
// };

// class Solution
// {
// public:
//     int peopleAwareOfSecret(int n, int delay, int forget)
//     {
//         deque<pair<int, int>> know, share;
//         share.emplace_back(1, 1);
//         pair<int, int> p;
//         long long know_cnt = 1, share_cnt = 0;
//         long long mod = 1e9 + 7;
//         for (int i = 2; i <= n; ++i)
//         {

//             if (!know.empty() && know.front().first == i - delay)
//             {
//                 know_cnt -= know.front().second;
//                 share_cnt = (share_cnt + know.front().second) % mod;
//                 know_cnt = (know_cnt + share_cnt) % mod;
//                 know.pop_front();
//                 share.emplace_back(i, share_cnt);
//                 know.emplace_back(i, know_cnt);
//             }

//             if (!share.empty() && share.front().first == i - forget)
//             {

//                 share_cnt -= share.front().second;
//                 share.pop_front();
//             }
//         }
//         return (know_cnt + share_cnt) % mod;
//     }
// };

// int sum(vector<vector<int>> &dp, vector<vector<int>> &triangle, int row, int col)
// {
//     int n = triangle.size();
//     int m = triangle[col].size();
//     if (row >= n - 1)
//         return 0;
//     if (dp[row][col] != INT_MIN)
//         return dp[row][col];
//     return dp[row][col] = triangle[row][col] + min(sum(dp, triangle, row + 1, col), sum(dp, triangle, row + 1, col + 1));
// }

// int minimumPathSum(vector<vector<int>> &triangle, int n)
// {
//     vector<vector<int>> dp(n + 1, vector<int>(n + 1, INT_MIN));

//     return sum(dp, triangle, 0, 0);
// }

// class Solution
// {
// public:
//     bool check(vector<vector<int>> &visited, vector<vector<char>> &mat, int idx, string &word, int row, int col)
//     {
//         int n = mat.size(), m = mat[0].size();
//         if (idx >= word.size())
//             return true;

//         if (row >= n || col >= m || visited[row][col] == true)
//             return false;

//         visited[row][col] = true;
//         if (mat[row][col] == word[idx])
//         {

//             bool one = check(visited, mat, idx + 1, word, row + 1, col);
//             bool two = check(visited, mat, idx + 1, word, row - 1, col);
//             bool three = check(visited, mat, idx + 1, word, row, col + 1);
//             bool four = check(visited, mat, idx + 1, word, row, col - 1);

//             if (one || two || three || four)
//                 return true;
//         }

//         visited[row][col] = false;
//         return false;
//     }

//     bool isWordExist(vector<vector<char>> &mat, string &word)
//     {
//         // Code here
//         int n = mat.size(), m = mat[0].size();
//         vector<vector<int>> visited(n, vector<int>(m, false));
//         for (int i = 0; i < n; ++i)
//         {
//             for (int j = 0; j < m; ++j)
//             {
//                 if (word[0] == mat[i][j])
//                 {
//                     bool found = false;
//                     found = check(visited, mat, 0, word, i, j);
//                     if (found)
//                         return true;
//                 }
//             }
//             return false;
//         }
//     }
// };

// class Solution
// {
// public:
//     int trap(vector<int> &height)
//     {
//         int n = height.size();
//         vector<int> lmax(n, 0), rmax(n, 0);
//         int lm = height[0];
//         for (int i = 1; i < n; ++i)
//         {
//             lmax[i] = lm;
//             lm = max(lm, height[i]);
//         }
//         int rm = height[n - 1];
//         for (int i = n - 2; i >= 0; --i)
//         {
//             rmax[i] = rm;
//             rm = max(rm, height[i]);
//         }
//         int ans = 0;

//         for (int i = 1; i < n - 1; ++i)
//         {
//             if (height[i] <= lmax[i] && height[i] <= rmax[i])
//                 ans += max(0, min(lmax[i], rmax[i]) - height[i]);
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     string removeSubstring(string s, int k)
//     {
//         stack<char> st;

//         int temp1 = 0, temp2 = 0;

//         int n = s.size();
//         bool build = false;

//         for (int i = 0; i < n; ++i)
//         {
//             if (build)
//                 temp1 = 0;

//             build = false;
//             if (s[i] == '(')
//             {
//                 temp1++;
//                 st.push('(');
//             }
//             else
//             {
//                 build = true;
//                 temp2++;
//             }
//             if (temp2 > temp1)
//             {
//                 st.push(')');
//                 temp2--;
//             }

//             if (temp1 >= k && temp2 >= k)
//             {
//                 int t = k;
//                 while (t > 0)
//                 {
//                     st.pop();
//                     t--;
//                     temp1--;
//                     temp2--;
//                 }
//             }
//         }

//         string ans = "";
//         if (temp1 >= k && temp2 >= k)
//         {
//             int t = k;
//             while (t > 0)
//             {
//                 st.pop();
//                 t--;
//                 temp1--;
//             }
//         }
//         while (!st.empty())
//         {

//             ans += st.top();
//             st.pop();
//         }

//         int l = 0, r = ans.size() - 1;
//         while (l < r)
//         {
//             swap(ans[l], ans[r]);
//             l++;
//             r--;
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     void dfs(vector<vector<int>> &heights, vector<vector<bool>> &visited, int row, int col)
//     {
//         int n = heights.size(), m = heights[0].size();
//         if (row < 0 || col < 0 || row >= n || col >= m || visited[row][col] == true)
//             return;

//         visited[row][col] = true;

//         int h = heights[row][col];

//         if (row >= 1 && heights[row - 1][col] >= h)
//             dfs(heights, visited, row - 1, col);
//         if (col = 1 && heights[row][col - 1] >= h)
//             dfs(heights, visited, row, col - 1);
//         if (row + 1 < n && heights[row + 1][col] >= h)
//             dfs(heights, visited, row + 1, col);
//         if (col + 1 < m && heights[row][col + 1] >= h)
//             dfs(heights, visited, row, col + 1);
//     }

//     vector<vector<int>> pacificAtlantic(vector<vector<int>> &heights)
//     {
//         int n = heights.size();

//         int m = heights[0].size();

//         vector<vector<bool>> visited(n, vector<bool>(m, false)), visited2(n, vector<bool>(m, false));

//         for (int i = 0; i < n; ++i)
//         {
//             dfs(heights, visited, i, 0);
//             dfs(heights, visited2, i, m - 1);
//         }
//         for (int i = 0; i < m; ++i)
//         {
//             dfs(heights, visited, 0, i);
//             dfs(heights, visited2, n - 1, i);
//         }

//         vector<vector<int>> ans;
//         vector<int> temp(2);

//         for (int i = 0; i < n; ++i)
//         {
//             for (int j = 0; j < n; ++j)
//             {
//                 if (visited[i][j] && visited2[i][j])
//                 {
//                     temp[0] = i;
//                     temp[1] = j;
//                     ans.push_back(temp);
//                 }
//             }
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int swimInWater(vector<vector<int>> &grid)
//     {
//         int time = grid[0][0];
//         int n = grid.size();

//         std::priority_queue<
//             std::tuple<int, int, int>,
//             std::vector<std::tuple<int, int, int>>,
//             std::greater<std::tuple<int, int, int>>>
//             pq;

//         vector<vector<int>> vec(50, vector<int>(50, INT_MAX));
//         vec[0][0] = time;
//         pq.push({time, 0, 0});
//         tuple<int, int, int> t;
//         while (!pq.empty())
//         {
//             auto [ct, row, col] = pq.top();
//             pq.pop();
//             if (row + 1 < n)
//             {
//                 int nt;
//                 if (ct < grid[row + 1][col])
//                     nt = grid[row + 1][col];
//                 else
//                     nt = ct;
//                 if (vec[row + 1][col] > ct)
//                 {
//                     vec[row + 1][col] = nt;
//                     pq.push({ct, row + 1, col});
//                 }
//             }
//             if (col - 1 >= 0)
//             {
//                 int nt;
//                 if (ct < grid[row][col - 1])
//                     nt = grid[row][col - 1];
//                 else
//                     nt = ct;
//                 if (vec[row][col - 1] > ct)
//                 {
//                     vec[row][col - 1] = nt;
//                     pq.push({ct, row, col - 1});
//                 }
//             }
//             if (col + 1 < n)
//             {
//                 int nt;
//                 if (ct < grid[row][col + 1])
//                     nt = grid[row][col + 1];
//                 else
//                     nt = ct;
//                 if (vec[row][col + 1] > ct)
//                 {
//                     vec[row][col + 1] = nt;
//                     pq.push({ct, row, col + 1});
//                 }
//             }
//         }

//         return vec[n - 1][n - 1];

//         // {grid value, time};
//     }
// };

// class Solution
// {
// public:
//     vector<int> avoidFlood(vector<int> &rains)
//     {
//         set<int> s;
//         int n = rains.size();
//         unordered_map<int, int> hash;

//         vector<int> ans(n, -1);
//         int count = 0;
//         for (int i = 0; i < n; ++i)
//         {

//             if (rains[i] == 0)
//                 s.insert(i);
//             else
//             {
//                 if (hash.find(rains[i]) != hash.end())
//                 {
//                     auto it = s.lower_bound(hash[i]);
//                     if (it == s.end())
//                         return {};
//                     else
//                     {
//                         ans[*it] = hash[i];
//                         s.erase(it);
//                     }
//                 }
//             }

//             hash[rains[i]] = i;
//         }

//         while (!s.empty())
//         {
//             ans[*s.begin()] = rains[0];
//             s.erase(s.begin());
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
//     {
//         int n = spells.size(), m = potions.size();
//         vector<int> ans(n, 0);
//         sort(potions.begin(), potions.end());
//         for (int i = 0; i < n; ++i)
//         {

//             long long temp1 = spells[i];

//             for (int j = 0; j < m; ++j)
//             {
//                 auto it = lower_bound(potions.begin(), potions.end(), success / temp1);
//                 ans[i] = it - potions.end();
//             }
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     long long minTime(vector<int> &skill, vector<int> &mana)
//     {
//         int n = skill.size(), m = mana.size();
//         vector<long long> f(n + 1, 0);
//         long long now = f[0];

//         for (int j = 0; j < m; ++j)
//         {
//             long long x = mana[j];
//             for (int i = 1; i < n; ++i)
//             {
//                 now = max(now, skill[i - 1] * x, f[i]);
//             }
//             f[n - 1] = now + skill[n - 1] * x;

//             for (int i = n - 2; i >= 0; --i)
//             {
//                 f[i] = f[i + 1] - skill[i + 1] * x;
//             }
//         }

//         return f[n - 1];
//     }
// };

// class Solution
// {
// public:
//     int maximumEnergy(vector<int> &energy, int k)
//     {

//         vector<int> pref(k, 0), ans(k, INT_MIN);
//         int n = energy.size();

//         for (int i = 0; i < n; ++i)
//         {
//             pref[i % k] += energy[i];
//         }

//         for (int i = 0; i < n; ++i)
//         {
//             ans[i % k] = max(ans[i % k], pref[i % k]);
//             pref[i % k] -= energy[i];
//             ans[i % k] = max(ans[i % k], pref[i % k]);
//         }

//         int ansr = INT_MIN;

//         for (int i = 0; i < k; ++i)
//             ansr = max(ansr, ans[i]);

//         return ansr;
//     }
// };

// // User Function Template
// class Solution
// {
// public:
//     vector<int> dijkstra(int V, vector<vector<int>> &edges, int src)
//     {
//         // Code here
//         vector<vector<pair<int, int>>> adj(V);
//         int n = edges.size();
//         for (int i = 0; i < n; ++i)
//         {
//             int node1 = edges[i][0];
//             int node2 = edges[i][1];
//             int wt = edges[i][2];

//             adj[node1].push_back({wt, node2});
//             adj[node2].push_back({wt, node1});
//         }

//         priority_queue<pair<int, int>> pq;
//         vector<int> dist(V, 1e9);
//         dist[src] = 0;
//         pq.push({src, 0});

//         while (!pq.empty())
//         {

//             int weight = pq.top().first;
//             int node = pq.top().second;
//             int sz = adj[node].size();
//             for (int i = 0; i < sz; ++i)
//             {
//                 int d = adj[node][i].first;
//                 int node3 = adj[node][i].second;

//                 if (weight + d < dist[node3])
//                 {
//                     dist[node3] = weight + d;
//                     pq.push({dist[node3], node3});
//                 }
//             }
//         }

//         return dist;
//     }
// };

// class Solution
// {

// public:
//     long long dam(vector<vector<long long>> &dp, vector<int> &power, int idx, int skip, unordered_map<int, int> &hash)
//     {
//         if (idx < 0)
//             return 0;
//         if (dp[idx][skip] != -1)
//             return dp[idx][skip];
//         int temp = 0;
//         int id = idx;
//         while (id >= 1 && (power[id - 1] == power[id] - 1 || power[id - 1] == power[id] - 2))
//         {

//             temp++;
//             id--;
//         }
//         long long take = power[idx] * hash[power[idx]] + dam(dp, power, idx - temp - 1, temp, hash);
//         long long dtake = dam(dp, power, idx - 1, 0, hash);

//         return dp[idx][skip] = max(take, dtake);
//     }

//     long long maximumTotalDamage(vector<int> &power)
//     {
//         vector<int> vec;
//         sort(power.begin(), power.end());
//         int n = power.size();
//         vec.push_back(power[0]);
//         unordered_map<int, int> hash;

//         for (int i = 0; i < n; ++i)
//             hash[power[i]]++;

//         for (int i = 1; i < n; ++i)
//             if (power[i] != power[i - 1])
//                 vec.push_back(power[i]);

//         int m = vec.size() - 1;

//         vector<vector<long long>> dp(n + 1, vector<long long>(4, -1));

//         return dam(dp, vec, n - 1, 0, hash);
//     }
// };

// class Solution
// {
// public:
//     vector<string> removeAnagrams(vector<string> &words)
//     {
//         vector<string> ans;

//         int n = words.size();
//         unordered_map<string, vector<int>> hash;
//         for (int i = 0; i < n; ++i)
//         {
//             vector<int> vec;
//             int m = words[i].size();

//             for (int j = 0; j < m; ++j)
//                 vec[words[i][j] - 'a']++;

//             hash[words[i]] = vec;
//         }

//         stack<int> st;

//         for (int i = 0; i < n; ++i)
//         {
//             if (!st.empty())
//             {
//                 if (hash[words[st.top()]] != hash[words[i]])
//                 {
//                     ans.push_back(words[i]);
//                     st.push(i);
//                 }
//             }
//             else
//             {
//                 ans.push_back(words[i]);
//                 st.push(i);
//             }
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     bool hasIncreasingSubarrays(vector<int> &nums, int k)
//     {
//         int n = nums.size();

//         int l = 0, r = 1;
//         int temp = 1;
//         bool nomid = true;
//         while (l < n && r < n)
//         {

//             if (nums[l] < nums[r])
//             {
//                 temp++;
//                 temp = k + 1;
//                 nomid = true;
//             }
//             else
//             {
//                 if (temp == k)
//                 {
//                     temp++;
//                     nomid = false;
//                 }
//                 else
//                 {
//                     if (nomid)
//                         l = l - k + 1;
//                     temp = 1;
//                 }
//             }
//             l++;
//             r++;
//             if (temp == 2 * k)
//                 return true;
//         }

//         return false;
//     }
// };

// class Solution
// {
// public:
//     int maxIncreasingSubarrays(vector<int> &nums)
//     {
//         int n = nums.size();
//         vector<int> pref(n, 1), suf(n, 1);

//         int temp = 1, temp2 = 1;
//         for (int i = 1; i < n; ++i)
//         {

//             if (nums[i - 1] < nums[i])
//                 temp++;
//             else
//                 temp = 1;

//             if (nums[n - i] > nums[n - i - 1])
//                 temp2++;
//             else
//                 temp2 = 1;
//             suf[n - i] = temp2;

//             pref[i] = temp;
//         }
//         int ans = 1;
//         for (int i = 0; i < n - 1; ++i)
//         {
//             ans = max(ans, min(suf[i + 1], pref[i]));
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int findSmallestInteger(vector<int> &nums, int value)
//     {
//         int n = nums.size();

//         vector<int> hash(value, 0);

//         for (int i = 0; i < n; ++i)
//         {
//             if (nums[i] < 0)
//             {
//                 int temp = nums[i] % value;
//                 temp += value;
//                 hash[temp % value]++;
//             }
//             else
//                 hash[abs(nums[i]) % value]++;
//         }

//         int count = INT_MAX;
//         int num = 0;

//         for (int i = 0; i < value; ++i)
//         {
//             if (hash[i] < count)
//             {
//                 count = hash[i];
//                 num = i;
//             }
//         }
//         return value * count + num;
//     }
// };

// class Solution
// {
// public:
//     bool dfs(vector<bool> &vis, vector<vector<int>> &adj, int p)
//     {

//         int sz = adj[p].size();

//         for (int i = 0; i < sz; ++i)
//         {
//             if (vis[adj[p][i]])
//             {
//                 if (adj[p][i] != p)
//                     return true;
//             }
//             vis[adj[p][i]] = true;

//             if (dfs(vis, adj, adj[p][i]))
//                 return true;
//         }

//         return false;
//     }
//     bool isCycle(int V, vector<vector<int>> &edges)
//     {
//         vector<bool> vis(V, false);

//         vector<vector<int>> adj(V);

//         int n = edges.size();

//         for (int i = 0; i < n; ++i)
//         {

//             int n1 = edges[i][0], n2 = edges[i][1];

//             adj[n1].push_back(n2);
//             adj[n2].push_back(n1);
//         }

//         for (int i = 0; i < V; ++i)
//         {
//             if (vis[i] == false)
//             {
//                 if (dfs(vis, adj, -1))
//                     return true;
//             }
//         }

//         return false;
//     }
// };

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <iterator>
// using namespace std;

// int main()
// {
//     // YOUR CODE GOES HERE
//     // Please take input and print output to standard input/output (stdin/stdout)
//     // E.g. 'cin' for input & 'cout' for output
//     int n;
//     cin >> n;
//     vector<int> vec(n);
//     for (int i = 0; i < n; ++i)
//         cin >> vec[i];

//     int q;
//     cin >> q;
//     for (int i = 0; i < q; ++i)
//     {
//         int x;
//         cin >> x;
//         auto it = lower_bound(vec.begin(), vec.end(), x);
//         if (it == vec.end() || *it != x)
//         {
//             cout << distance(upper_bound(vec.begin(), vec.end(), x), vec.begin()) << '\n';
//         }
//         else
//             cout << distance(it, vec.begin()) << '\n';
//     }

//     return 0;
// }

// class Solution
// {
// public:
//     int maxDistinctElements(vector<int> &nums, int k)
//     {
//         int sm = nums[0] - k;
//         sort(nums.begin(), nums.end());

//         int n = nums.size();
//         int ans = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             if (abs(nums[i] - sm) <= k || nums[i] - k >= sm)
//             {
//                 ans++;
//                 sm = nums[i] - min((nums[i] - sm), nums[i] - k);
//                 sm++;
//             }
//         }
//         return ans;
//     }
// };

// void sortTuples(vector<vector<int>> &arr)
// {
//     // Write your code here

//     sort(arr.begin(), arr.end(), [](vector<int> &a, vector<int> &b)
//          {
//              int n = a.size();
//              if (a[n - 1] <= b[n - 1])
//                  return true;

//              return false; });
// }

// class Solution
// {
// public:
//     string rt(string &s, int b)
//     {

//         string t = "";
//         int n = s.size();
//         for (int i = b; i < n; ++i)
//             t += s[i];
//         for (int i = 0; i < b; ++i)
//             t += s[i];
//         return t;
//     }

//     void add(string &s, int a)
//     {

//         int n = s.size();

//         for (int i = 0; i < n; ++i)
//         {
//             if (i & 1)
//             {
//                 int b = s[i] - '0';
//                 b = (a + b) % 10;
//                 s[i] = b + '0';
//             }
//         }
//     }

//     string bfs(string &s, int a, int b)
//     {

//         std::priority_queue<
//             std::string,
//             std::vector<std::string>,
//             std::greater<std::string>>
//             pq;

//         pq.push(s);
//         string ans = s;
//         unordered_map<string, bool> hash;
//         while (!pq.empty())
//         {
//             int n = pq.size();

//             for (int i = 0; i < n; ++i)
//             {
//                 string t = pq.top();
//                 pq.pop();
//                 if (hash[t] == true)
//                     continue;
//                 hash[t] = true;
//                 if (t < ans)
//                     ans = t;

//                 pq.push(rt(t, b));
//                 add(t, a);
//                 pq.push(t);
//             }
//         }
//         return ans;
//     }

//     string findLexSmallestString(string s, int a, int b)
//     {
//         return bfs(s, a, b);
//     }
// };

// // int Solution::solve(vector<int> &A, int B)
// // {
// //     int n = A.size();
// //     priority_queue<int> pq;
// //     for (int i = 0; i < n; ++i)
// //     {
// //         pq.push(A[i]);
// //     }
// //     int ans = 0;
// //     while (!pq.empty())
// //     {
// //         if (B == 0)
// //             break;

// //         int a = pq.top();
// //         pq.pop();
// //         ans += a;
// //         a--;
// //         pq.push(a);
// //     }

// //     return ans;
// // }

// class Solution
// {
// public:
//     int maxFrequency(vector<int> &nums, int k, int numOperations)
//     {
//         long int maxi = *max_element(nums.begin(), nums.end());

//         int n = nums.size();
//         vector<long int> vec(maxi + 1, 0);

//         for (int i = 0; i < n; ++i)
//             vec[nums[i]]++;

//         for (int i = 1; i < n; ++i)
//             vec[i] += vec[i - 1];

//         int m = vec.size();
//         long int ans = 1;
//         for (int i = 1; i < m; ++i)
//         {

//             int left = max(0, i - k - 1);
//             int right = min((long int)(i + k + 1), maxi);

//             int target = vec[i] - vec[i - 1];

//             long int temp = target + min((long int)numOperations, vec[right] - vec[left] - target);

//             ans = max(ans, temp);
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     bool hasSameDigits(string s)
//     {
//         string temp = s;

//         while (true)
//         {

//             string temp1 = "";

//             int n = temp.size();

//             for (int i = 1; i < n; ++i)
//             {
//                 temp1 += (temp[i - 1] - '0' + temp[i] - '0') % 10 + '0';
//             }
//             temp = temp1;
//             if (temp.size() == 2)
//                 break;
//         }

//         if (temp[0] == temp[1])
//             return true;

//         return false;
//     }
// };

// class Solution
// {
// public:
//     vector<int> com, v;

//     bool good(vector<int> v)
//     {

//         for (int i = 1; i <= 5; ++i)
//         {
//             if (v[i] != i && v[i] != 0)
//                 return false;
//         }
//         return true;
//     }

//     bool p = false;
//     void comp(vector<int> &ct, int num)
//     {

//         for (int i = 1; i <= 5; ++i)
//         {
//             if (ct[i] > i)
//                 return;
//         }
//         if (num > 0 && good(ct))
//             com.push_back(num);

//         for (int i = 1; i <= 5; ++i)
//         {
//             int temp = num * 10 + i;
//             ct[i]++;
//             comp(ct, temp);
//             ct[i]--;
//         }
//     }

//     Solution() : v(6, 0)
//     {                                     // Initialize member v here
//         vector<int> initial_counts(6, 0); // Temporary count vector for the initial call
//         comp(initial_counts, 0);          // Start the recursive generation
//     }

//     int nextBeautifulNumber(int n)
//     {
//         auto it = lower_bound(com.begin(), com.end(), n + 1);

//         return *it;
//     }
// };

// // string Solution::solve(string A)
// // {

// //     unordered_map<char, int> hash, hash2;

// //     int n = A.size();

// //     for (int i = 0; i < n; ++i)
// //         hash[A[i]]++;
// //     string ans = "";
// //     for (int i = 0; i < n; ++i)
// //     {
// //         if (hash2.find(A[i]) == hash.end())
// //         {
// //             ans += A[i];
// //             ans += hash[A[i]] + '0';
// //         }

// //         hash2[A[i]]++;
// //     }
// // }

// vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source)
// {
//     // Write your code here.
//     vector<int> dist(vertices, 1e9);
//     dist[source] = 0;

//     vector<vector<pair<int, int>>> adj(vertices);

//     int n = vec.size();

//     for (int i = 0; i < n; ++i)
//     {
//         adj[vec[i][0]].push_back({vec[i][1], vec[i][2]});
//         adj[vec[i][1]].push_back({vec[i][0], vec[i][2]});
//     }

//     std::priority_queue<
//         std::pair<int, int>,
//         std::vector<std::pair<int, int>>,
//         std::greater<std::pair<int, int>>>
//         pq;

//     n = adj[source].size();

//     for (int i = 0; i < n; ++i)
//         pq.push({adj[source][i].second, adj[source][i].first});

//     while (!pq.empty())
//     {

//         auto [dis, desti] = pq.top();
//         pq.pop();

//         int m = adj[desti].size();

//         for (int i = 0; i < m; ++i)
//         {
//             auto [dista, node] = adj[desti][i];
//             if (dis + dista < dist[node])
//             {
//                 dist[node] = dis + dista;
//                 pq.push({dist[node], node});
//             }
//         }
//     }

//     return dist;
// }

// class Solution
// {
// public:
//     string maxSumOfSquares(int num, int sum)
//     {
//         string ans = "";
//         for (int i = 1; i < num; ++i)
//         {
//             ans += min(sum, 9) + '0';
//             sum -= min(sum, 9);
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     long long minOperations(vector<int> &nums1, vector<int> &nums2)
//     {
//         long long ans = 0;
//         int temp = nums1[0];

//         int n = nums1.size();
//         int d = nums2[n];
//         for (int i = 0; i < n; ++i)
//         {
//             ans += abs(nums2[i] - nums1[i]);
//             if (abs(nums1[i] - d) < abs(temp - d))
//                 temp = nums1[i];
//         }

//         return ans + temp + 1;
//     }
// };

// class Bank
// {
// public:
//     vector<long long> balance;
//     int n;
//     Bank(vector<long long> &balance)
//     {
//         this->balance = balance;
//         n = balance.size() + 1;
//     }

//     bool transfer(int account1, int account2, long long money)
//     {
//         if (account1 > n || account1 < 1 || account2 > n || account2 < 1)
//             return false;
//         if (balance[account1 - 1] >= money)
//         {
//             balance[account1 - 1] -= money;
//             balance[account2 - 1] += money;
//             return true;
//         }
//         return false;
//     }

//     bool deposit(int account, long long money)
//     {
//         if (account > n || account < 1)
//             return false;
//         balance[account - 1] += money;
//         return true;
//     }

//     bool withdraw(int account, long long money)
//     {
//         if (account < 1 || account > n)
//             return false;

//         balance[account - 1] -= money;
//         return true;
//     }
// };

// /**
//  * Your Bank object will be instantiated and called as such:
//  * Bank* obj = new Bank(balance);
//  * bool param_1 = obj->transfer(account1,account2,money);
//  * bool param_2 = obj->deposit(account,money);
//  * bool param_3 = obj->withdraw(account,money);
//  */

// class Solution
// {
// public:
//     int countValidSelections(vector<int> &nums)
//     {
//         int n = nums.size();
//         vector<int> pref(n), suf(n);
//         int prefi = 0, suff = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             pref[i] = prefi;
//             suf[n - i - 1] = suff;
//             suff += nums[n - i - 1];
//             prefi += nums[i];
//         }
//         int ans = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             if (nums[i] == 0)
//             {
//                 if (pref[i] == suf[i])
//                     ans++;
//             }
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int smallestNumber(int n)
//     {
//         if (n >= 1 && n <= 3)
//             return 3;
//         // if(n>=4 && n<=7) return 7;
//         // if(n>=8 && n<=15) return 15;
//         // if(n>=16 && n<=31) return 31;
//         // if(n>=32 && n<=63) return 63;

//         // if(n>=64 && n<=127) return 127;
//         int l = 2, r = 3;

//         for (int i = 0; i < 12; ++i)
//         {
//             int rr = pow(2, r + i) - 1;
//             if (n >= (int)pow(2, l + i) && n <= rr)
//                 return rr;
//         }

//         return 3;
//     }
// };

// bool place(vector<int> &stalls, int k, int dist)
// {

//     int n = stalls.size();
//     int last = stalls[0];
//     for (int i = 1; i < n; ++i)
//     {
//         if (stalls[i] - last >= dist)
//         {
//             k--;
//             last = stalls[i];
//         }
//         if (k == 0)
//             return true;
//     }

//     return false;
// }

// int aggressiveCows(vector<int> &stalls, int k)
// {

//     sort(stalls.begin(), stalls.end());
//     int n = stalls.size();
//     int high = stalls[n - 1];
//     int low = 1;

//     while (low <= high)
//     {

//         int mid = low / 2 + (high - low) / 2;

//         if (stalls, k, mid)
//             low = mid;
//         else
//             high = mid - 1;
//     }

//     return low;
// }

// int knap(vector<vector<int>> &dp, vector<int> &profit, vector<int> &weight, int idx, int wt, int n)
// {

//     if (idx >= n)
//         return 0;

//     if (dp[idx][wt] != -1)
//         return dp[idx][wt];

//     int take = 0, dtake = 0;

//     if (wt >= weight[idx])
//         take = profit[idx] + knap(dp, profit, weight, idx, wt - weight[idx], n);

//     dtake = knap(dp, profit, weight, idx + 1, wt, n);

//     return dp[idx][wt] = dtake + take;
// }

// int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight)
// {

//     vector<vector<int>> dp(n + 1, vector<int>(w + 1, -1));

//     return knap(dp, profit, weight, 0, w, n);
// }

// // vector<string> Solution::deserialize(string A)
// // {

// //     vector<string> vec;

// //     string temp = "", emp = "";

// //     int n = A.size();

// //     for (int i = 0; i < n; ++i)
// //     {
// //         if (!(isdigit(A[i])) && A[i] != '~')
// //         {
// //             temp += A[i];
// //         }
// //         if (A[i] == '~')
// //         {
// //             vec.push_back(temp);
// //             temp = emp;
// //         }
// //     }

// //     return vec;
// // }

// class Solution
// {
// public:
//     int rob(vector<int> &dp, vector<int> &arr, int idx)
//     {
//         int n = arr.size();
//         if (idx >= n)
//             return 0;

//         if (dp[idx] != -1)
//             return dp[idx];

//         int take, dtake = 0;

//         take = arr[idx] + rob(dp, arr, idx + 2);
//         dtake = rob(dp, arr, idx + 1);

//         return dp[idx] = max(dp[idx], max(take, dtake));
//     }

//     int findMaxSum(vector<int> &arr)
//     {
//         // code here
//         int n = arr.size();
//         vector<int> dp(n + 1, -1);

//         return rob(dp, arr, 0);
//     }
// };

// class Solution
// {
// public:
//     int minNumberOperations(vector<int> &target)
//     {
//         stack<int> st;

//         int n = target.size();
//         int ans = target[0];
//         for (int i = 0; i < n; ++i)
//         {
//             if (!st.empty() && st.top() < target[i])
//             {
//                 ans += target[i] - st.top();
//             }
//             st.push(target[i]);
//         }

//         return ans;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;

// long long maxRankDistance(const vector<vector<int>> &arrays)
// {
//     // Write your code here

//     vector<tuple<int, int, int>> vec;

//     int n = arrays.size();

//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 1; j <= arrays[i][0]; ++j)
//         {
//             vec.push_back({arrays[i][j], j, i});
//         }
//     }

//     sort(vec.begin(), vec.end());

//     int r = vec.size() - 1, l = 0, m = vec.size();
//     long long maxi1 = INT_MIN, maxi2 = INT_MIN;
//     auto [last_ele, last_rank, last_belong] = vec[r];
//     while (l < m)
//     {
//         auto [ele, rank, belong] = vec[l];

//         if (last_belong != belong)
//         {
//             maxi1 = r - l;
//             break;
//         }
//         l++;
//     }
//     auto [first_ele, first_rank, first_belong] = vec[0];
//     while (r >= 0)
//     {
//         auto [ele, rank, belong] = vec[r];
//         if (first_belong != belong)
//         {
//             maxi2 = r;
//             break;
//         }
//         r--;
//     }

//     return max(maxi1, maxi2);
// }

// class Solution
// {
// public:
//     int maxWater(vector<int> &arr)
//     {
//         int l = 0, n = arr.size(), r = n - 1;

//         int ans = 0;

//         while (l < r)
//         {
//             ans = max(ans, min(arr[l], arr[r]) * (r - l));
//             if (arr[l] <= arr[r])
//                 l++;
//             else
//                 r--;
//         }

//         return ans;
//     }
// };

// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

// class Solution
// {
// public:
//     ListNode *modifiedList(vector<int> &nums, ListNode *head)
//     {
//         int n = nums.size();

//         vector<int> vec(1e5 + 1, 0);

//         for (int i = 0; i < n; ++i)
//             vec[nums[i]]++;

//         ListNode *temp = head;
//         ListNode *prev = head;
//         ListNode *head1;
//         int i = 0;
//         while (temp != NULL)
//         {
//             i++;
//             while (temp != NULL && vec[temp->val] > 0)
//             {
//                 temp = temp->next;
//             }
//             if (i != 1)
//                 prev->next = temp;
//             prev = temp;
//             if (i == 1)
//                 head1 = prev;

//             temp = temp->next;
//         }

//         return head1;
//     }
// };

// class Solution
// {
// public:
//     int ways(vector<int> &dp, int n)
//     {

//         if (n == 1)
//             return 1;
//         if (n == 0)
//             return 0;
//         if (dp[n] != 0)
//             return dp[n];

//         int way1 = 1 + ways(dp, n - 1);
//         int way2 = 1 + ways(dp, n - 2);

//         return dp[n] += way1 + way2;
//     }

//     int countWays(int n)
//     {
//         vector<int> dp(n + 1);
//         return ways(dp, n);
//     }
// };

// class Solution
// {
// public:
//     bool canSortArray(vector<int> &nums)
//     {
//         int n = nums.size();
//         vector<int> temp, temp1;
//         for (int i = 0; i < n; ++i)
//         {
//             if (temp1.size() == 0 || __builtin_popcount(nums[i]) == __builtin_popcount(temp1.back()))
//             {
//                 temp1.push_back(nums[i]);
//             }
//             else
//             {
//                 sort(temp1.begin(), temp1.end());
//                 int n = temp1.size();

//                 for (int i = 0; i < n; ++i)
//                     temp.push_back(temp1[i]);
//                 temp1.clear();
//             }
//         }

//         sort(nums.begin(), nums.end());
//         return nums == temp;
//     }
// };

// class Solution
// {
// public:
//     string lexPalindromicPermutation(string s, string target)
//     {
//         map<char, int> hash;
//         int n = s.size();
//         for (int i = 0; i < n; ++i)
//         {
//             hash[s[i]]++;
//         }
//         string ans = "";
//         int odd = 0;
//         char odd_char;
//         int l = 0;
//         for (auto it = hash.begin(); it != hash.end(); ++it)
//         {

//             string temp;
//             if (it->second % 2 != 0)
//             {
//                 odd++;
//                 odd_char = it->first;
//                 if (odd > 1)
//                     return "";
//                 temp.append(it->second / 2, it->first);
//                 ans.insert(0, temp);
//                 ans.insert((int)ans.size(), temp);
//             }
//             else
//             {
//                 temp.append(it->second, it->first);
//                 ans.insert(l, temp);
//             }

//             l = ans.size() / 2;
//         }

//         if (odd == 1)
//         {
//             ans.insert(ans.begin() + (int)ans.size() / 2, odd_char);
//         }

//         if (ans > target)
//             return ans;
//         return "";
//     }
// };

// class Solution
// {
// public:
//     int countUnguarded(int m, int n, vector<vector<int>> &guards, vector<vector<int>> &walls)
//     {

//         vector<vector<int>> g(n, vector<int>(m, 0)), w(n, vector<int>(m, 0)), hash(n, vector<int>(m, 0));
//         long long ans = n * m;
//         int n1 = guards.size(), m1 = walls.size();
//         ans -= n1 - m1;
//         for (int i = 0; i < n1; ++i)
//         {
//             g[guards[i][0]][guards[i][1]] = 1;
//         }
//         for (int i = 0; i < m1; ++i)
//         {
//             w[walls[i][0]][walls[i][1]] = 1;
//         }

//         for (int i = 0; i < n; ++i)
//         {
//             for (int j = 0; j < m; ++j)
//             {

//                 if (g[i][j])
//                 {

//                     // up
//                     for (int k = i; k >= 0; --k)
//                     {
//                         if (g[k][j])
//                             break;
//                         if (hash[k][j])
//                             continue;
//                         hash[k][j] = true;
//                         ans--;
//                     }
//                     // down
//                     for (int k = i; k < n; ++k)
//                     {
//                         if (g[k][j])
//                             break;
//                         if (hash[k][j])
//                             continue;
//                         hash[k][j] = true;
//                         ans--;
//                     }
//                     // left
//                     for (int k = j; k >= 0; --k)
//                     {
//                         if (g[i][k])
//                             break;
//                         if (hash[i][k])
//                             continue;
//                         hash[i][k] = true;
//                         ans--;
//                     }

//                     // right
//                     for (int k = j; k < m; ++k)
//                     {
//                         if (g[i][k])
//                             break;
//                         if (hash[i][k])
//                             continue;
//                         hash[i][k] = true;
//                         ans--;
//                     }
//                 }
//             }
//         }

//         return ans;
//     }
// };

// bool dfs(vector<vector<int>> &adj, vector<bool> &vis, int parent, int current)
// {

//     int n = adj[current].size();

//     for (int i = 0; i < n; ++i)
//     {
//         if (vis[adj[current][i]])
//         {
//             if (adj[current][i] != parent)
//                 return true;
//         }

//         if (dfs(adj, vis, current, adj[current][i]))
//             return true;
//     }

//     return false;
// }

// string cycleDetection(vector<vector<int>> &edges, int n, int m)

// {

//     vector<vector<int>> adj(n + 1);

//     int n1 = edges.size();

//     for (int i = 0; i < n1; ++i)
//     {
//         adj[edges[i][0]].push_back(edges[i][1]);
//         adj[edges[i][1]].push_back(edges[i][0]);
//     }

//     vector<bool> vis(n + 1, false);

//     for (int i = 1; i <= n; ++i)
//     {
//         if (!vis[i])
//         {
//             if (dfs(adj, vis, -1, i))
//                 return "Yes";
//         }
//     }
//     return "No";
// }

// class Solution
// {
// public:
//     vector<int> queryResults(int limit, vector<vector<int>> &queries)
//     {
//         unordered_map<int, int> hash1, hash2;
//         vector<int> ans;
//         int n = queries.size();
//         for (int i = 0; i < n; ++i)
//         {
//             int ball = queries[i][0];
//             int new_color = queries[i][1];

//             if (hash1.find(ball) != hash1.end())
//             {
//                 int old_color = hash1[ball];

//                 hash2[old_color]--;
//                 if (hash2[old_color] <= 0)
//                     hash2.erase(old_color);
//             }
//             hash1[ball] = new_color;
//             hash2[new_color]++;
//             ans.push_back((int)hash2.size());
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int minCost(string colors, vector<int> &neededTime)
//     {
//         int n = colors.size();
//         pair<char, int> prev = {colors[0], 0};
//         int ans = 0;

//         for (int i = 1; i < n; ++i)
//         {
//             if (prev.first == colors[i])
//             {
//                 ans += min(prev.second, neededTime[i]);
//                 if (prev.second < neededTime[i])
//                     prev.second = neededTime[i];
//             }
//             else
//             {
//                 prev.first = colors[i];
//                 prev.second = neededTime[i];
//             }
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     vector<long long> findXSum(vector<int> &nums, int k, int x)
//     {
//         // one set for top k elements one set for other elements
//         long long sum = 0;
//         int n = nums.size();
//         set<pair<int, int>, greater<pair<int, int>>> s1, s2;
//         unordered_map<int, int> hash;
//         vector<long long> ans;

//         for (int i = 0; i < k; ++i)
//         {

//             if (!s2.empty())
//             {
//                 if (hash.find(nums[i]) != hash.end())
//                 {

//                     s2.erase({hash[nums[i]], nums[i]});
//                     hash[nums[i]]++;
//                     s2.insert({hash[nums[i]], nums[i]});
//                 }
//                 else
//                     s2.insert({1, nums[i]});
//             }
//             else
//             {
//                 s2.insert({1, nums[i]});
//             }
//             hash[nums[i]]++;
//         }
//         int i = 0;
//         for (auto [num, count] : s2)
//         {
//             i++;
//             sum += (long long)num * (long long)count;
//             s1.insert({count, num});
//             s2.erase({count, num});

//             if (i == x)
//                 break;
//         }
//         ans.push_back(sum);

//         int l = 0, r = k;

//         while (l < n && r < n)
//         {
//             int take_out = nums[l], put_in = nums[r];
//             int freq_take_out = hash[nums[l]];
//             int freq_put_in = 0;
//             if (hash.find(nums[r]) != hash.end())
//             {
//                 freq_put_in = hash[nums[r]];
//                 if (s1.find({freq_put_in, put_in}) != s1.end())
//                 {
//                     s1.erase({freq_put_in, put_in});
//                     s1.insert({freq_put_in + 1, put_in});
//                     sum -= nums[l];
//                 }
//                 else
//                 {

//                     s2.erase({freq_put_in, put_in});
//                     s2.insert({freq_put_in + 1, put_in});
//                 }
//             }
//             else
//             {
//                 s2.insert({nums[r], 1});
//             }
//             if (s1.find({take_out, freq_take_out}) != s1.end())
//             {
//                 s1.erase({freq_take_out, take_out});
//                 s1.insert({freq_take_out - 1, take_out});
//                 sum -= nums[l];
//             }
//             else
//             {

//                 s2.erase({freq_take_out, take_out});
//                 s2.insert({freq_take_out - 1, take_out});
//             }

//             while (((int)s1.size() < x && (int)s2.size() > 0))
//             {
//                 auto [n2, c2] = *s2.begin();
//                 s1.insert({n2, c2});
//                 sum += n2 * c2;
//             }
//             while (*s1.rbegin() < *s2.begin() && (int)s1.size() < x)
//             {
//                 auto [n1, c1] = *s1.rbegin();
//                 auto [n2, c2] = *s2.begin();

//                 sum -= n1 * c1;
//                 sum += n2 * c2;
//             }

//             ans.push_back(sum);

//             l++;
//             r++;
//         }

//         return ans;
//     }
// };

// /// @brief
// /// @param image
// /// @param n
// /// @param m
// /// @param x
// /// @param y
// /// @param p
// /// @return
// vector<vector<int>> floodFill(vector<vector<int>> &image, int n, int m, int x, int y, int p)
// {
//     vector<vector<int>> ans = image;
//     queue<pair<int, int>> q;
//     q.push({x, y});
//     vector<vector<bool>> vis(n, vector<bool>(m, false));
//     int c = image[x][y];
//     while (!q.empty())
//     {
//         int sz = q.size();
//         for (int i = 0; i < sz; ++i)
//         {
//             auto [x1, y1] = q.front();
//             ans[x1][y1] = p;

//             if (vis[x1][y1])
//                 continue;
//             if (x1 >= 1 && image[x1 - 1][y1] == c)
//             {
//                 q.push({x1 - 1, y1});
//             }
//             if (y1 >= 1 && image[x1][y1 - 1] == c)
//             {
//                 q.push({x1, y1 - 1});
//             }
//             if (x1 < n - 1 && image[x1 + 1][y1] == c)
//             {
//                 q.push({x1 + 1, y1});
//             }
//             if (y1 < m - 1 && image[x1][y1 + 1] == c)
//             {
//                 q.push({x1, y1 + 1});
//             }
//         }
//     }

//     return ans;
// }

// vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
// {
//     vector<vector<int>> ans = image;
//     int oldcolor = image[x][y];
//     int n = image.size(), m = image[0].size();
//     queue<pair<int, int>> q;

//     q.push({x, y});
//     ans[x][y] = newColor;

//     while (!q.empty())
//     {

//         auto [x1, y1] = q.front();
//         q.pop();

//         if (x1 >= 1 && ans[x1 - 1][y1] != newColor && image[x1 - 1][y1] == oldcolor)
//         {
//             ans[x1 - 1][y1] = newColor;
//             q.push({x1 - 1, y1});
//         }
//         if (y1 >= 1 && ans[x1][y1 - 1] != newColor && image[x1][y1 - 1] == oldcolor)
//         {
//             ans[x1][y1 - 1] = newColor;
//             q.push({x1, y1 - 1});
//         }

//         if (x1 < n - 1 && ans[x1][y1] != newColor && image[x1 + 1][y1] == oldcolor)
//         {
//             ans[x1 + 1][y1] = newColor;
//             q.push({x1 + 1, y1});
//         }

//         if (y1 < m - 1 && ans[x1][y1 + 1] != newColor && image[x1][y1 + 1] == oldcolor)
//         {
//             ans[x1][y1 + 1] = newColor;
//             q.push({x1, y1 + 1});
//         }
//     }

//     return ans;
// }

// int shortestPathBinaryMatrix(vector<vector<int>> &matrix, pair<int, int> src, pair<int, int> dest)
// {
//     int x_s, y_s, x_d, y_d;
//     x_s = src.first;
//     y_s = src.second;
//     x_d = dest.first;
//     y_d = dest.second;
//     int n = matrix.size(), m = matrix[0].size();
//     vector<int> d1 = {1, 0, -1, 0};
//     vector<int> d2 = {0, 1, 0, -1};

//     queue<tuple<int, int, int>> q;
//     q.push({x_s, y_s, 1});

//     while (!q.empty())
//     {

//         int sz = q.size();
//         for (int i = 0; i < sz; ++i)
//         {
//             auto [x, y, dist] = q.front();
//             q.pop();
//             if (x == x_d && y == y_d)
//                 return dist + 1;
//             matrix[x][y] = 0;
//             for (int i = 0; i < 4; ++i)
//             {
//                 if (x + d1[i] >= 0 && x + d1[i] < n && y + d2[i] >= 0 && y + d2[i] < m && (matrix[x + d1[i]][y + d2[i]] == 1))
//                 {
//                     q.push({x + d1[i], y + d2[i], dist + 1});
//                 }
//             }
//         }
//     }

//     return -1;
// }

// class Solution
// {
// public:
//     long int mini(vector<vector<int>> &dp, vector<vector<int>> &grid, int x, int y)
//     {
//         int n = grid.size();
//         int m = grid[0].size();
//         if (x == n - 1 && y == m - 1)
//             return dp[x][y] = grid[x][y];

//         if (dp[x][y] != -1)
//             return dp[x][y];
//         long int right = INT_MAX;
//         if (x < n - 1)
//             right = mini(dp, grid, x + 1, y);
//         long int down = INT_MAX;
//         if (y < m - 1)
//             down = mini(dp, grid, x, y + 1);
//         return dp[x][y] = grid[x][y] + min(down, right);
//     }

//     int minPathSum(vector<vector<int>> &grid)
//     {
//         int n = grid.size(), m = grid[0].size();

//         vector<vector<int>> dp(n, vector<int>(m, -1));

//         return mini(dp, grid, 0, 0);
//     }
// };

// class Solution
// {
// public:
//     void dfs(vector<bool> &vis, vector<vector<int>> &adj, priority_queue<int, vector<int>, greater<int>> &pq, unordered_map<int, int> &hash, int node, int ct)
//     {
//         if (vis[node])
//             return;
//         hash[node] = ct;
//         vis[node] = true;
//         int sz = adj[node].size();
//         for (int i = 0; i < sz; ++i)
//         {
//             if (!vis[adj[node][i]])
//                 dfs(vis, adj, pq, hash, adj[node][i], ct);
//         }
//     }

//     vector<int> processQueries(int c, vector<vector<int>> &connections, vector<vector<int>> &queries)
//     {
//         vector<int> ans;
//         unordered_map<int, int> hash;
//         vector<bool> vis(c + 1, false);
//         vector<vector<int>> adj(c + 1, vector<int>(c + 1));
//         int n = connections.size();
//         for (int i = 0; i < n; ++i)
//         {
//             int n1 = connections[i][0];
//             int n2 = connections[i][1];
//             adj[n1].push_back(n2);
//             adj[n2].push_back(n1);
//         }

//         vector<priority_queue<int, vector<int>, greater<int>>> vec;
//         int ct = 0;
//         for (int i = 1; i <= c; ++i)
//         {
//             if (!vis[i])
//             {
//                 priority_queue<int, vector<int>, greater<int>> pq;
//                 dfs(vis, adj, pq, hash, i, ct);
//                 ct++;
//             }
//         }

//         int m = queries.size();

//         for (int i = 0; i < m; ++i)
//         {
//             if (queries[i][0] == 1)
//             {

//                 int grid_belong = hash[queries[i][1]];
//                 if (grid_belong != -1)
//                     ans.push_back(grid_belong);
//                 else
//                 {
//                     while (!vec[grid_belong].empty() && hash[vec[grid_belong].top()] == -1)
//                         vec[grid_belong].pop();
//                     if (vec[grid_belong].empty())
//                         ans.push_back(-1);
//                     else
//                         ans.push_back(vec[grid_belong].top());
//                 }
//             }
//             else
//             {
//                 hash[queries[i][1]] = -1;
//             }
//         }

//         return ans;
//     }
// };

// // stations[i] represents the number of power stations in the ith city.
// // power station at city i can provide power to all cities j such that
// // |i - j| <= r and 0 <= i, j <= n - 1. The power of a city is the total
// // number of power stations it is being provided power from. 3  7 11 9 5
// //  mini = minimum of the prefix sum array ,maxi is mini +k for binary
// //  search.
// // 1 2 4 5 0
// // 1 3 6 9 5
// // 3  7  11 9    5

// class Solution
// {
// public:
//     bool pos(vector<long long> &cur, long long k, int r, long long ans)
//     {

//         int n = cur.size();
//         long long left = k;
//         long long sum = 0;
//         queue<pair<int, long long>> q;
//         for (int i = 0; i < n; ++i)
//         {
//             if (cur[i] + sum < ans)
//             {
//                 if (left < ans - (cur[i] + sum) || left == 0)
//                     return false;
//                 left -= ans - (cur[i] + sum);
//                 q.push({i + 2 * r, ans - (cur[i] + sum)});
//                 sum += ans - (cur[i] + sum);
//             }

//             if (!q.empty() && q.front().first == i)
//             {
//                 sum -= (ans - q.front().second);
//                 q.pop();
//             }
//         }

//         return true;
//     }

//     long long maxPower(vector<int> &stations, int r, int k)
//     {

//         long long sum = 0;
//         int n = stations.size();
//         vector<long long> current(n, 0);

//         for (int i = 0; i < n; ++i)
//         {

//             current[i] = stations[i] + sum;
//             if (i >= r)
//                 sum -= stations[i - r];
//             sum += stations[i];
//         }
//         sum = 0;
//         long long mini = INT_MAX, maxi = INT_MIN;
//         for (int i = n - 1; i >= 0; --i)
//         {
//             current[i] += sum;

//             mini = min(mini, current[i]);
//             maxi = max(maxi, current[i]);
//             if (i <= n - 1 - r)
//                 sum -= stations[i + r];
//             sum += stations[i];
//         }

//         long long l = mini, rr = maxi + k;
//         long long ans = 0;
//         while (l <= rr)
//         {
//             long long mid = l + (rr - l) / 2;
//             if (pos(current, k, r, mid))
//             {
//                 ans = max(ans, mid);
//                 l = mid + 1;
//             }
//             else
//                 rr = mid - 1;
//         }
//         for (int i = 0; i < (int)stations.size(); ++i)
//             cout << current[i] << " ";
//         return ans;
//     }
// };

// vector<int> shortestPath(vector<pair<int, int>> edges, int n, int m, int s, int t)
// {

//     vector<int> ans;
//     vector<int> parent(n + 1, -1);

//     queue<pair<int, int>> q;
//     q.push({s, 0});
//     vector<vector<int>> adj(n);
//     for (int i = 0; i < m; ++i)
//     {
//         adj[edges[i].first].push_back(edges[i].second);
//         adj[edges[i].second].push_back(edges[i].first);
//     }

//     while (!q.empty())
//     {

//         int sz = q.size();

//         auto [node, distance] = q.front();
//         q.pop();
//         if (node == t)
//             break;

//         for (int i = 0; i < sz; ++i)
//         {
//             int nd = adj[node][i];
//             parent[nd] = node;
//             q.push({nd, distance + 1});
//         }
//     }
//     int p = t;
//     ans.push_back(t);
//     while (true)
//     {

//         if (p == -1)
//             break;

//         ans.push_back(parent[p]);
//         p = parent[p];
//     }

//     reverse(ans.begin(), ans.end());
//     return ans;
// }

// //   struct TreeNode {
// //       int val;
// //       TreeNode *left;
// //       TreeNode *right;
// //       TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// //   };

// // vector<vector<int> > Solution::levelOrder(TreeNode* A) {

// //         queue<TreeNode*> q;
// //         q.push(A);
// //         vector<vector<int>> ans;
// //         while(!q.empty()){
// //             int sz=q.size();
// //             vector<int> vec;
// //             for(int i=0; i<sz; ++i){
// //                  TreeNode* temp=q.front();
// //                     q.pop();
// //                     vec.push_back(temp->val);
// //                     q.push(temp->left);
// //                     q.push(temp->right);

// //             }
// //                    ans.push_back(vec);

// //         }

// //         return ans;

// // }

// #include <bits/stdc++.h>
// int shortestPath(int v, int e, vector<vector<int>> &edges, int src, int dest)
// {
//     vector<bool> vis(v + 1, false);
//     vector<vector<int>> adj(v + 1);

//     for (int i = 0; i < e; ++i)
//     {
//         int node1 = edges[i][0];
//         int node2 = edges[i][1];

//         adj[node1].push_back(node2);
//         adj[node2].push_back(node1);
//     }

//     queue<pair<int, int>> q;
//     q.push({src, 0});

//     while (!q.empty())
//     {

//         auto [node, distance] = q.front();
//         q.pop();

//         int sz = adj[node].size();
//         if (node == dest)
//             return distance;
//         for (int i = 0; i < sz; ++i)
//         {
//             int nd = adj[node][i];
//             if (!vis[nd])
//             {
//                 q.push({nd, distance + 1});
//             }
//             vis[nd] = true;
//         }
//     }

//     return -1;
// }

// class Solution
// {
// public:
//     int ans = 0;
//     bool check(vector<vector<int>> &grid, vector<vector<bool>> vis)
//     {

//         int n = grid.size();
//         int m = grid[0].size();

//         for (int i = 0; i < n; ++i)
//         {
//             for (int j = 0; j < m; ++j)
//             {
//                 if (grid[i][j] >= 0 && vis[i][j] == false)
//                     return false;
//                 if (grid[i][j] == -1 && vis[i][j])
//                     return false;
//             }
//         }

//         return true;
//     }

//     void backt(vector<vector<int>> &grid, vector<vector<bool>> &vis, int i, int j)
//     {
//         int n = grid.size();
//         int m = grid[0].size();
//         if (i < 0 || j < 0 || i >= n || j >= m)
//             return;

//         if (grid[i][j] == 2)
//         {
//             if (check(grid, vis))
//                 ans++;
//             return;
//         }
//         vis[i][j] = true;

//         if (i - 1 >= 0 && !vis[i - 1][j] && grid[i - 1][j] >= 0)
//             backt(grid, vis, i - 1, j);
//         if (j - 1 >= 0 && !vis[i][j - 1] && grid[i][j - 1] >= 0)
//             backt(grid, vis, i, j - 1);
//         if (i + 1 < n && !vis[i + 1][j] && grid[i + 1][j] >= 0)
//             backt(grid, vis, i + 1, j);
//         if (j + 1 < m && !vis[i][j + 1] && grid[i][j + 1] >= 0)
//             backt(grid, vis, i, j + 1);
//     }

//     int uniquePathsIII(vector<vector<int>> &grid)
//     {
//         int n = grid.size();
//         int m = grid[0].size();
//         vector<vector<bool>> vis(n, vector<bool>(m, false));
//         pair<int, int> st;
//         bool found = false;
//         for (int i = 0; i < n; ++i)
//         {
//             for (int j = 0; j < m; ++j)
//             {
//                 if (grid[i][j] == 1)
//                 {
//                     st.first = i;
//                     st.second = j;
//                     found = true;
//                     break;
//                 }
//             }
//             if (found)
//                 break;
//         }
//         backt(grid, vis, st.first, st.second);

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     std::string decimal_to_binary(int n)
//     {
//         if (n == 0)
//             return "0";
//         std::string binary;
//         while (n > 0)
//         {
//             binary.push_back('0' + (n % 2));
//             n /= 2;
//         }
//         std::reverse(binary.begin(), binary.end());
//         return binary;
//     }
//     int minimumOneBitOperations(int n)
//     {
//         string s = decimal_to_binary(n);

//         int ans = 0;
//         int sz = s.size();
//         int sign = 1;

//         for (int i = 0; i < sz; ++i)
//         {

//             if (s[i] == '1')
//             {
//                 ans += sign * (int)pow(2, n - i);
//                 sign = -sign;
//             }
//         }

//         return ans;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;

// string reverseStringWordWise(string &input)
// {
//     vector<string> vec;
//     string temp = "";

//     int n = input.size();

//     for (int i = 0; i < n; ++i)
//     {
//         if (input[i] == ' ')
//         {
//             vec.push_back(temp);
//             temp = "";
//         }
//         else
//         {
//             temp += input[i];
//         }
//     }
//     string ans = "";
//     if (temp.size() > 0)
//         vec.push_back(temp);
//     int m = vec.size();
//     for (int i = m - 1; i >= 0; --i)
//     {
//         ans += vec[i];
//         if (i != 0)
//             ans += " ";
//     }
//     return ans;
// }

// int main()
// {
//     string s;
//     getline(cin, s);
//     string ans = reverseStringWordWise(s);
//     cout << ans << endl;
// }

// class Solution
// {
// public:
//     vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
//     {
//         vector<vector<int>> ans;

//         sort(points.begin(), points.end(), [](const vector<int> &a, const vector<int> &b)
//              {
//                  long int dist1 = a[0] * a[0] + a[1] * a[1];
//                  long int dist2 = b[0] * b[0] + b[1] * b[1];

//                  return dist1 < dist2; });

//         for (int i = 0; i < k; ++i)
//         {
//             ans.push_back(points[i]);
//         }
//     }
// };

// class Solution
// {
// public:
//     int minOperations(vector<int> &nums)
//     {
//         int n = nums.size();
//         stack<int> st;
//         vector<int> vec(n, -1);
//         for (int i = n - 1; i >= 0; --i)
//         {

//             while (st.empty() || (!st.empty() && st.top() > nums[i]))
//             {
//                 st.pop();
//             }
//             if (!st.empty() && st.top() <= nums[i])
//                 vec[i] = st.top();
//             st.push(nums[i]);
//         }
//         int ans = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             if (nums[i] > vec[i])
//                 ans++;
//         }

//         return ans;
//     }
// };

// void dfs(vector<vector<int>> &adj, int node, vector<bool> &vis, vector<int> &vec)
// {

//     int sz = adj[node].size();

//     for (int i = 0; i < sz; ++i)
//     {
//         int n1 = adj[node][i];
//         if (!vis[n1])
//         {
//             vis[n1] = true;
//             vec.push_back(n1);
//             dfs(adj, n1, vis, vec);
//         }
//     }
// }

// vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
// {
//     vector<vector<int>> adj(V);

//     for (int i = 0; i < E; ++i)
//     {
//         int node1 = edges[i][0];
//         int node2 = edges[i][1];
//         adj[node1].push_back(node2);
//         adj[node2].push_back(node1);
//     }
//     vector<vector<int>> ans;

//     vector<bool> vis(V, false);

//     for (int i = 0; i < V; ++i)
//     {
//         vector<int> vec;
//         if (!vis[i])
//         {
//             vec.push_back(i);
//             vis[i] = true;
//             dfs(adj, i, vis, vec);
//         }

//         sort(vec.begin(), vec.end());
//         ans.push_back(vec);
//     }

//     return ans;
// }

// long countSalutes(string A)
// {

//     int n = A.size();

//     // vector<pair<long long,long long>> pref(n);

//     long long left = 0, right = 0, ans = 0;

//     for (int i = n - 1; i >= 0; --i)
//     {

//         // pref[i].first=right;
//         // pref[i].second=left;
//         if (A[i] == '<')
//         {
//             left++;
//         }

//         else
//         {
//             right++;
//             ans += left;
//         }
//     }

//     return ans;
// }

// class Solution
// {
// public:
//     int knap(vector<pair<int, int>> &vec, vector<vector<vector<int>>> &dp,
//              int m, int n, int idx)
//     {
//         int sz = vec.size();
//         if (idx >= sz || m < 0 || n < 0)
//         {

//             return 0;
//         }
//         if (dp[idx][m][n] != -1)
//             return dp[idx][m][n];
//         int take = 0, dtake = 0;
//         int zeroes = vec[idx].first;
//         int first = vec[idx].second;

//         if (m >= zeroes && n >= first)
//             take = 1 + knap(vec, dp, m - zeroes, n - zeroes, idx + 1);

//         dtake = knap(vec, dp, m, n, idx + 1);

//         return dp[idx][m][n] = max(take, dtake);
//     }

//     int findMaxForm(vector<string> &strs, int m, int n)
//     {
//         int sz = strs.size();

//         vector<pair<int, int>> vec(sz, {0, 0});
//         for (int i = 0; i < sz; ++i)
//         {
//             int sz1 = strs[i].size();
//             for (int j = 0; j < sz1; ++j)
//             {
//                 if (strs[i][j] == '0')
//                     vec[i].first++;
//                 else
//                     vec[i].second++;
//             }
//         }
//         vector<vector<vector<int>>> dp(
//             sz, vector<vector<int>>(m + 1, vector<int>(n + 1, -1)));

//         return knap(vec, dp, m, n, 0);
//     }
// };

// bool check(vector<int> &nums, int k)
// {

//     int n = nums.size();
//     int temp;

//     for (int i = 0; i < n; ++i)
//     {

//         if (i + k > n)
//             break;
//         temp = nums[i];
//         for (int j = i; j < min(i + k, n); ++j)
//             temp = gcd(temp, nums[i]);

//         if (temp == 1)
//             return true;
//     }

//     return false;
// }

// class Solution
// {
// public:
//     int minOperations(vector<int> &nums)
//     {
//         int n = nums.size();
//         // int mini=INT_MAX;
//         // int n1s=0;
//         // int ans=0;
//         // for(int i=0; i<n; ++i){
//         //     if(nums[i]==1) n1s++;
//         //     for(int j=i;j<n; ++j){
//         //         if(gcd(nums[i],nums[j])==1) {
//         //             mini=min(mini,j-i);
//         //             break;
//         //         }
//         //     }
//         //     if(mini==INT_MAX){
//         //         if(i<n-1){
//         //             int a=gcd(nums[i],nums[i+1]);
//         //             if(nums[i+1]==a)
//         //             continue;
//         //             nums[i+1]=a;
//         //             ans++;
//         //         }
//         //     }
//         // }
//         // if(mini==INT_MAX) return -1;
//         // return ans+mini+n-max(1,n1s);
//         int ones = 0;
//         for (int i = 0; i < n; ++i)
//             if (nums[i] == 1)
//                 ones++;

//         for (int i = 1; i < n; ++i)
//         {

//             if (check(nums, i))
//                 return i - 1 + n - ones;
//         }

//         return -1;
//     }
// };

// int sum(vector<int> &nums, vector<int> &dp, int idx)
// {
//     int n = nums.size();
//     if (idx >= n)
//         return 0;
//     if (dp[idx] != -1)
//         return dp[idx];
//     int take = 0, dtake = 0;
//     take = nums[idx] + sum(nums, dp, idx + 2);
//     dtake = sum(nums, dp, idx + 1);

//     return dp[idx] = max(dp[idx], max(take, dtake));
// }

// int maximumNonAdjacentSum(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> dp(n + 1, -1);

//     return sum(nums, dp, 0);
// }

// void maximumsumsubarray()
// {

//     int n;
//     cin >> n;
//     vector<int> vec(n);
//     for (int i = 0; i < n; ++i)
//         cin >> vec[i];

//     vector<int> maxi(n, INT_MIN);
//     maxi[0] = max(maxi[0], vec[0]);
//     int ans = INT_MIN;
//     int prev = vec[0];
//     for (int i = 1; i < n; ++i)
//     {
//         int next = max(vec[i], prev + vec[i]);
//         ans = max(ans, next);
//         prev = next;
//     }

//     cout << ans << '\n';
// }

// #pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n, k;
//     cin >> n >> k;
//     vector<long int> vec(n);
//     long int maxi = INT_MIN;
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> vec[i];
//         maxi = max(maxi, vec[i]);
//     }

//     while (k--)
//     {
//         long int nextmaxi = INT_MIN;
//         for (int i = 0; i < n; ++i)
//         {
//             vec[i] = maxi - vec[i];
//             nextmaxi = max(maxi, nextmaxi);
//         }
//         maxi = nextmaxi;
//     }

//     for (int i = 0; i < n; ++i)
//         cout << vec[i] << ' ';

//     return 0;
// }

// class Solution
// {
// public:
//     bool isOneBitCharacter(vector<int> &bits)
//     {
//         int n = bits.size();
//         if (n == 1)
//             return true;

//         int i = 0;
//         while (i < n)
//         {
//             if (bits[i] == 0 && i == n - 1)
//                 return true;
//             if (bits[i] == 0)
//                 i++;
//             else
//                 i += 2;
//         }
//     }
// };

// class Solution
// {
// public:
//     long int jump(vector<long int> &dp, vector<int> &arr, int idx)
//     {
//         int n = arr.size();
//         if (idx == n - 1)
//             return 0;
//         if (idx >= n)
//             return INT_MAX;
//         if (dp[idx] != INT_MAX)
//             return dp[idx];
//         long int mini = INT_MAX;
//         for (int i = 1; i <= arr[idx]; ++i)
//         {
//             dp[idx] = min(mini, min(jump(dp, arr, idx + i), dp[idx]));
//         }

//         return dp[idx];
//     }

//     int minJumps(vector<int> &arr)
//     {
//         // code here
//         int n = arr.size();
//         vector<long int> dp(n + 1, INT_MAX);
//         long int a = jump(dp, arr, 0);
//         if (a >= INT_MAX)
//             return -1;
//         return a;
//     }
// };

// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

// class Solution
// {
// public:
//     ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
//     {
//         ListNode *temp1 = list1;
//         ListNode *temp2 = list2;
//         ListNode *head;
//         if (list1 == NULL)
//         {
//             head = list2;
//         }
//         else if (list2 == NULL)
//             head = list1;
//         else
//         {
//             if (list1->val <= list2->val)
//             {
//                 head = list1;
//             }
//             else
//                 head = list2;
//         }

//         while (temp1 != NULL && temp2 != NULL)
//         {

//             if (temp1->val <= temp2->val)
//             {
//                 if (temp1->next != NULL)
//                 {
//                     if (temp1->next->val >= temp2->val)
//                     {
//                         ListNode *temp = temp1;
//                         temp1 = temp1->next;
//                         temp->next = temp2;
//                     }
//                 }
//                 else
//                 {
//                     temp1->next = temp2;
//                     temp1 = NULL;
//                 }
//             }
//             else
//             {

//                 if (temp2->next != NULL)
//                 {
//                     if (temp2->next->val >= temp1->val)
//                     {
//                         ListNode *temp = temp2;
//                         temp2 = temp2->next;
//                         temp->next = temp1;
//                     }
//                 }
//                 else
//                 {
//                     temp2->next = temp1;
//                     temp2 = NULL;
//                 }
//             }
//         }
//         return head;
//     }
// };

// class Solution
// {
// public:
//     int findFinalValue(vector<int> &nums, int original)
//     {
//         unordered_set<int> s;
//         int n = nums.size();
//         for (int i = 0; i < n; ++i)
//         {
//             s.insert(nums[i]);
//         }
//         while (true)
//         {
//             if (s.find(original) != s.end())
//                 original *= 2;
//             else
//                 return original;
//         }

//         return -1;
//     }
// };

// class Solution
// {
// public:
//     int intersectionSizeTwo(vector<vector<int>> &intervals)
//     {

//         sort(intervals.begin(), intervals.end(), [](const vector<int> &a, const vector<int> &b)
//              {
//                  if (a[1] != b[1])
//                      return a[1] < b[1];

//                  return a[0] < b[0]; });
//         int ans = 2;
//         int lts = intervals[0][1] - 1;
//         int ltb = intervals[0][1];
//         int n = intervals.size();
//         for (int i = 1; i < n; ++i)
//         {
//             int nis = intervals[i][0];
//             int nib = intervals[i][1];

//             if (nis > ltb)
//             {
//                 ans += 2;
//                 lts = nib - 1;
//                 ltb = nib;
//             }
//             else
//             {
//                 if (lts < nis)
//                 {
//                     ans++;
//                     lts = ltb;
//                     ltb = nib;
//                 }
//             }
//         }

//         return ans;
//     }
// };

// /// @brief
// /// @param n
// /// @param m
// /// @param time
// /// @param cap
// /// @return
// bool pos(int n, int m, vector<int> &time, long long cap)
// {
//     int j = 0;
//     int sz = time.size();
//     for (int i = 1; i <= n; ++i)
//     {
//         long long left = cap;
//         while (m > 0)
//         {
//             if (j < sz && time[j] <= left)
//             {
//                 m--;
//                 left -= time[j];
//                 j++;
//             }
//             else
//                 break;
//         }
//         if (j >= m || m == 0)
//             break;
//     }
//     if (m == 0)
//         return true;

//     return false;
// }

// long long ayushGivesNinjatest(int n, int m, vector<int> time)
// {
//     long long sum = accumulate(time.begin(), time.end(), 0LL);
//     long long left = 0, right = sum;
//     long long ans = LLONG_MAX;
//     while (left <= right)
//     {
//         long long mid = left + (right - left) / 2;
//         bool happen = pos(n, m, time, mid);

//         if (happen)
//         {
//             right = mid - 1;
//             ans = mid;
//         }
//         else
//             left = mid + 1;
//     }

//     return ans;
// }

// bool pos(vector<int> &A, int B, long long cap)
// {

//     int n = A.size();
//     int j = 0;
//     for (int i = 1; i <= B; ++i)
//     {
//         long long left = cap;

//         while (B > 0)
//         {

//             if (A[j] <= left)
//             {
//                 left -= A[j];
//                 B--;
//                 j++;
//             }
//             else
//                 break;
//         }

//         if (B == 0)
//             return true;
//         return false;
//     }
// }

// int books(vector<int> &A, int B)
// {

//     int ans = -1;

//     int right = accumulate(A.begin(), A.end(), 0);

//     int left = 1;
//     while (left <= right)
//     {
//         int mid = left + (right - left) / 2;

//         bool happen = pos(A, B, mid);
//         if (happen)
//         {
//             ans = mid;
//             right = mid - 1;
//         }
//         else
//             left = mid + 1;
//     }

//     return ans;
// }

// int count(string &s, int len)
// {

//     map<vector<int>, int> hash;
//     vector<int> vec(26, 0);

//     int n = s.size();
//     for (int i = 0; i < len; ++i)
//     {
//         vec[s[i] - 'a']++;
//     }
//     hash[vec]++;
//     for (int i = len; i < n; ++i)
//     {
//         char rem = s[i - len];
//         vec[rem - 'a']--;
//         vec[s[i] - 'a']++;
//         hash[vec]++;
//     }
//     int ans = 0;
//     for (auto it = hash.begin(); it != hash.end(); ++it)
//     {
//         int b = it->second;
//         ans += (b * (b + 1) / 2);
//     }

//     return ans;
// }

// int sherlockAndAnagrams(string s)
// {
//     int n = s.size();
//     int ans = 0;
//     for (int i = 1; i <= n; ++i)
//     {
//         ans += count(s, i);
//     }
//     return ans;
// }

// long maximumSum(vector<long> a, long m)
// {
//     long long prefix = 0;
//     long long ans = 0;
//     set<long long> s;
//     int n = a.size();
//     long long sum = 0;
//     for (int i = 0; i < n; ++i)
//     {
//         prefix = (prefix + a[i] % m);
//         ans = max(ans, prefix);

//         auto it = s.upper_bound(prefix);
//         if (it != s.end())
//         {
//             ans = max(ans, prefix + m - *it);
//         }
//         s.insert(prefix);
//     }

//     return ans;
// }

// int dfs(vector<vector<bool>> &vis, vector<vector<int>> &matrix, int row, int col)
// {
//     int n = matrix.size(), m = matrix[0].size();
//     if (row < 0 || col < 0 || row >= n || col >= m)
//         return 0;
//     if (vis[row][col])
//         return 0;
//     if (matrix[row][col] == 0)
//         return 0;
//     vis[row][col] = true;
//     int up, down, left, right, dru, drd, dlu, dld;
//     up = dfs(vis, matrix, row - 1, col);
//     down = dfs(vis, matrix, row + 1, col);
//     left = dfs(vis, matrix, row, col - 1);
//     right = dfs(vis, matrix, row, col + 1);
//     dru = dfs(vis, matrix, row - 1, col + 1);
//     drd = dfs(vis, matrix, row + 1, col + 1);
//     dlu = dfs(vis, matrix, row - 1, col - 1);
//     dld = dfs(vis, matrix, row + 1, col - 1);

//     return 1 + up + down + left + right + dru + drd + dlu + dld;
// }

// int connectedCell(vector<vector<int>> matrix)
// {
//     int n = matrix.size(), m = matrix[0].size();
//     vector<vector<bool>> vis(n, vector<bool>(m, false));

//     int maxi = 0;

//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < m; ++j)
//         {
//             if (!vis[i][j])
//             {
//                 maxi = max(maxi, dfs(vis, matrix, i, j));
//             }
//         }
//     }
//     return maxi;
// }

// class Solution
// {
// public:
//     bool checkValidString(string s)
//     {
//         int n = s.size();
//         stack<int> st, st1;
//         int cnt = 0;

//         for (int i = 0; i < n; ++i)
//         {
//             if (s[i] == '(')
//                 st.push(i);
//             else if (s[i] == ')')
//             {
//                 if (st.size() > 0)
//                     st.pop();
//                 else if (st1.size() > 0)
//                 {
//                     st1.pop();
//                 }
//                 else
//                     return false;
//             }
//             else
//             {
//                 st1.push(i);
//             }
//         }
//         while (st.size() > 0)
//         {
//             if (st1.size() > 0)
//             {
//                 int pindex = st.top();
//                 int sindex = st1.top();
//                 if (sindex < pindex)
//                     return false;
//                 st.pop();
//                 st1.pop();
//             }
//             else
//                 return false;
//         }
//         return true;
//     }
// };

// class Solution
// {
// public:
//     int minimumFlips(int n)
//     {
//         bitset<32> a(n);
//         string s = a.to_string().substr(a.to_string().find('1'));
//         int cnt = 0;
//         int m = s.size();
//         int i = 0, j = m - 1;
//         while (i < j)
//         {
//             if (s[i] != s[j])
//                 cnt += 2;
//             i++;
//             j--;
//         }
//         return cnt;
//     }
// };

// class Solution
// {
// public:
//     int totalWaviness(int num1, int num2)
//     {
//         int ans = 0;
//         for (int i = num1; i <= num2; ++i)
//         {
//             string s = to_string(i);
//             int sz = s.size();
//             int j = 1;
//             while (j < sz - 1)
//             {
//                 if ((s[j] < s[j + 1] && s[j] < s[j - 1]) || (s[j] > s[j + 1] && s[j] > s[j - 1]))
//                     ans++;
//                 j++;
//             }
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int MOD = 1e+9;
//     int dfs(vector<vector<vector<int>>> &dp, vector<vector<int>> &grid, int k, int row, int col, int sum)
//     {

//         int n = grid.size();
//         int m = grid[0].size();

//         if (row >= n || col >= m)
//             return 0;
//         sum += grid[row][col];
//         if (dp[row][col][sum % k] != -1)
//             return dp[row][col][sum % k];

//         if (row == n - 1 && col == m - 1)
//         {
//             if (sum % k == 0)
//                 return dp[row][col][sum % k] = 1;
//             return dp[row][col][sum % k] = 0;
//         }

//         int down = dfs(dp, grid, k, row + 1, col, sum) % MOD;
//         int right = dfs(dp, grid, k, row, col + 1, sum) % MOD;
//         return dp[row][col][sum % k] = (down + right) % MOD;
//     }

//     int numberOfPaths(vector<vector<int>> &grid, int k)
//     {
//         int n = grid.size(), m = grid[0].size();
//         vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(k, -1)));
//         return dfs(dp, grid, k, 0, 0, 0);
//     }
// };

// int sum(vector<vector<int>> &dp, vector<vector<int>> &A, int idx, int row)
// {
//     int n = A.size();
//     if (idx >= n || row < 0 || row > 1)
//         return 0;
//     if (dp[row][idx] != -1)
//         return dp[row][idx];
//     int take = 0, dtake = 0;

//     int next_row = (row + 1) % 2;
//     take = A[row][idx] + max(sum(dp, A, idx + 2, row), sum(dp, A, idx + 2, next_row));
//     dtake = max(sum(dp, A, idx + 1, row), sum(dp, A, idx + 1, next_row));

//     return dp[row][idx] = max(dp[row][idx], max(take, dtake));
// }

// int adjacent(vector<vector<int>> &A)
// {
//     int n = A.size();
//     vector<vector<int>> dp(2, vector<int>(n + 1, -1));
//     return max(sum(dp, A, 0, 0), sum(dp, A, 0, 1));
// }

// class Solution
// {
// public:
//     int lengthOfLongestSubstring(string s)
//     {
//         int n = s.size();
//         int l = 0, r = n - 1;
//         vector<int> vec(26, -1);
//         int ans = 1;
//         while (l < n && r < n)
//         {
//             if (vec[s[r]] < 0)
//             {
//                 vec[s[r]] = r;
//             }
//             else
//             {
//                 if (l < vec[s[r]])
//                 {
//                     l = vec[s[r]] + 1;
//                 }
//                 vec[s[r]] = r;
//             }
//             ans = max(ans, r - l + 1);
//             r++;
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int knap(vector<vector<int>> &dp, vector<int> &nums, int idx, int sum)
//     {
//         int n = nums.size();

//         if (idx >= n)
//         {
//             if (sum % 3 == 0)
//                 return 0;
//             else
//                 return INT_MIN;
//         }
//         int rem = (sum + nums[idx]) % 3;
//         if (dp[idx][rem] != -1)
//             return dp[idx][rem];

//         int take = 0, dtake = 0;
//         take = nums[idx] + knap(dp, nums, idx + 1, sum);
//         dtake = knap(dp, nums, idx + 1, sum);

//         return dp[idx][rem] = max(max(take, dtake), dp[idx][rem]);
//     }

//     int maxSumDivThree(vector<int> &nums)
//     {
//         int n = nums.size();
//         vector<vector<int>> dp(n + 1, vector<int>(3, -1));
//         int a = knap(dp, nums, 0, 0);
//         return max(a, 0);
//     }
// };

// int move(vector<vector<int>> &dp, vector<vector<int>> &A, int row, int col)
// {

//     int n = A.size(), m = A[0].size();

//     if (col >= m || row >= n)
//         return 0;

//     if (dp[row][col] != -1)
//         return dp[row][col];

//     return dp[row][col] = A[row][col] + min(move(dp, A, row + 1, col), move(dp, A, row + 1, col + 1));
// }

// int solve(vector<vector<int>> &A)
// {
//     int n = A.size(), m = A[0].size();
//     vector<vector<int>> dp(n, vector<int>(m, -1));
//     return move(dp, A, 0, 0);
// }

// class Solution
// {
// public:
//     vector<bool> prefixesDivBy5(vector<int> &nums)
//     {
//         int n = nums.size();
//         vector<bool> ans(n, false);
//         int cnt = 0;

//         int base = 1;
//         for (int i = 0; i < n; ++i)
//         {
//             cnt += nums[i] * base;
//             if (cnt % 5 == 0)
//                 ans[i] = true;

//             base *= 2;
//         }
//         return ans;
//     }
// };

// int sum(vector<vector<int>> &dp, vector<vector<int>> &A, int row, int col)
// {

//     int n = A.size(), m = A[0].size();

//     if (row < 0 || row >= n || col < 0 || col >= m)
//         return 0;
//     if (row == n - 1 && col == m - 1)
//         return A[n - 1][m - 1];

//     return dp[row][col] = A[row][col] + min(sum(dp, A, row + 1, col), sum(dp, A, row, col + 1));
// }

// int minPathSum(vector<vector<int>> &A)
// {

//     int n = A.size();
//     int m = A[0].size();

//     vector<vector<int>> dp(n, vector<int>(m, -1));

//     return sum(dp, A, 0, 0);
// }

// class Solution
// {
// public:
//     vector<int> countDistinct(vector<int> &arr, int k)
//     {
//         // code here
//         unordered_map<int, int> hash;
//         vector<int> ans;
//         int n = arr.size();

//         for (int i = 0; i < k; ++i)
//         {
//             hash[arr[i]]++;
//         }

//         int l = 0, r = k;
//         while (l < n && r < n)
//         {
//             ans.push_back(hash.size());
//             hash[arr[l]]--;
//             if (hash[arr[l]] <= 0)
//                 hash.erase(arr[l]);
//             hash[arr[r]]++;
//             l++;
//             r++;
//         }
//         ans.push_back(hash.size());
//         return ans;
//     }
// };

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         data = x;
//         next = NULL;
//     }
// };

// class Solution
// {
// public:
//     Node *nn(char a)
//     {
//         Node *temp = new Node(a - '0');
//         return temp;
//     }

//     Node *addTwoLists(Node *head1, Node *head2)
//     {
//         long int num1 = 0, num2 = 0;
//         Node *temp1 = head1;
//         Node *temp2 = head2;

//         while (temp1 != NULL)
//         {
//             num1 *= 10;
//             num1 += temp1->data;
//             temp1 = temp1->next;
//         }
//         while (temp2 != NULL)
//         {
//             num2 *= 10;
//             num2 += temp2->data;
//             temp2 = temp2->next;
//         }

//         long int total = num1 + num2;
//         string s = to_string(total);

//         Node *head = nn(s[0]);
//         Node *temp = head;
//         int n = s.size();
//         for (int i = 1; i < n; ++i)
//         {
//             temp->next = nn(s[i]);
//             temp = temp->next;
//         }

//         return head;
//     }
// };

// class Solution
// {
// public:
//     int smallestRepunitDivByK(int k)
//     {

//         long long int n = 1;
//         int cnt = 1;
//         if (gcd(k, 10) != 1)
//             return -1;

//         while (true)
//         {
//             int rem = n % k;
//             if (rem == 0)
//                 return cnt;

//             rem *= 10 + 1;
//             cnt++;
//         }

//         return -1;
//     }
// };

// class Solution
// {
// public:
//     long long get(long long l)
//     {

//         long long base = 1;
//         int i = 1;
//         long long cnt = 0;
//         while (cnt <= l)
//         {
//             int temp = (i + 1) / 2 * (min(2 * base - 1, l) - base + 1);
//             cnt += temp;
//             i++;
//             base *= 2;
//         }

//         return cnt;
//     }

//     long long minOperations(vector<vector<int>> &queries)
//     {

//         int n = queries.size();
//         long long ans = 0;

//         for (int i = 0; i < n; ++i)
//         {
//             ans += (get(queries[i][1]) - get(queries[i][0]) + 1) / 2;
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     bool canJump(vector<int> &nums)
//     {
//         int n = nums.size();

//         for (int i = 0; i < n; ++i)
//         {
//             int next = nums[i];
//             if (next >= n - 1)
//                 return true;
//             for (int j = next + i; j >= 1; --j)
//             {
//                 if (nums[j] + j >= n - 1)
//                     return true;
//             }
//         }
//         return false;
//     }
// };

// int checkPath(vector<vector<int>> &A)
// {

//     pair<int, int> src, dest;
//     bool one = false, two = false;
//     int n = A.size();
//     int m = A[0].size();
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < m; ++j)
//         {
//             if (A[i][j] == 1)
//             {
//                 src.first = i;
//                 src.second = j;
//                 one = true;
//             }

//             if (A[i][j] == 2)
//             {
//                 dest.first = i;
//                 dest.second = j;
//                 two = true;
//             }
//         }
//         if (one && two)
//             break;
//     }

//     vector<vector<bool>> vis(n, vector<bool>(m, false));

//     queue<pair<int, int>> q;
//     q.push(src);
//     vis[src.first][src.second] = true;

//     while (!q.empty())
//     {

//         int k = q.size();
//         for (int i = 0; i < k; ++i)
//         {

//             auto a = q.front();
//             q.pop();

//             if (a == dest)
//                 return 1;

//             vis[a.first][a.second] = true;
//             int x = a.first;
//             int y = a.second;
//             if (x + 1 < n && !vis[x + 1][y] && A[x + 1][y] != 0)
//             {
//                 q.push({x + 1, y});
//                 vis[x + 1][y] = true;
//             }

//             if (x - 1 >= 0 && !vis[x - 1][y] && A[x - 1][y] != 0)
//             {
//                 vis[x - 1][y] = true;
//                 q.push({x - 1, y});
//             }

//             if (y - 1 >= 0 && !vis[x][y - 1] && A[x][y - 1] != 0)
//             {
//                 q.push({x, y - 1});
//                 vis[x][y - 1] = true;
//             }

//             if (y + 1 < m && !vis[x][y + 1] && A[x][y + 1] != 0)
//             {
//                 q.push({x, y + 1});
//                 vis[x][y + 1] = true;
//             }
//         }
//     }

//     return 0;
// }

// class Solution
// {
// public:
//     bool check(vector<int> &piles, int h, int hr)
//     {

//         int sum = 0;
//         int n = piles.size();
//         for (int i = 0; i < n; ++i)
//         {
//             sum += ceil(double(piles[i]) / hr);
//         }

//         return sum <= hr;
//     }

//     int minEatingSpeed(vector<int> &piles, int h)
//     {
//         int maxi = *max_element(piles.begin(), piles.end());

//         int l = maxi, r = maxi;
//         int ans = maxi;
//         while (l <= r)
//         {
//             int mid = l + (r - l) / 2;
//             if (check(piles, h, mid))
//             {
//                 ans = mid;
//                 r = mid - 1;
//             }
//             else
//                 l = mid + 1;
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     bool check(vector<int> &arr, int sum, int k)
//     {

//         int n = arr.size();
//         int cnt = 0;
//         int temp = sum;
//         for (int i = 0; i < n; ++i)
//         {
//             if (arr[i] > temp)
//             {
//                 cnt++;
//                 temp = sum;
//             }
//             temp -= arr[i];
//         }

//         if (cnt > k)
//             return false;

//         return true;
//     }

//     int findPages(vector<int> &arr, int k)
//     {
//         int maxi = INT_MIN;
//         int sum = 0;
//         int n = arr.size();

//         for (int i = 0; i < n; ++i)
//         {
//             maxi = max(maxi, arr[i]);
//             sum += arr[i];
//         }

//         int l = maxi, r = sum;
//         int ans = maxi;
//         while (l <= r)
//         {
//             int mid = l + (r - l) / 2;
//             if (check(arr, mid, k))
//             {
//                 ans = mid;
//                 r = mid - 1;
//             }
//             else
//                 l = mid + 1;
//         }

//         return ans;
//     }
// };

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {

//         int n;
//         cin >> n;
//         if (n & 1)
//         {
//             if (n > 3)
//             {
//                 int i = n - 3;
//                 i = max(i, 0);
//                 i /= 2;
//                 cout << i * (i + 1) + 1 << '\n';
//             }
//             else
//                 cout << 0 << '\n';
//         }
//         else
//         {
//             if (n > 3)
//             {
//                 int i = (n - 2) / 2;
//                 cout << i * i << '\n';
//             }
//             else
//                 cout << 0 << '\n';
//         }
//     }
//     return 0;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         int n;
//         cin >> n;
//         vector<int> A(n), B(n);
//         for (int i = 0; i < n; ++i)
//             cin >> A[i];
//         for (int i = 0; i < n; ++i)
//             cin >> B[i];
//         bool pos = true;
//         for (int i = 0; i < n - 1; ++i)
//         {
//             bool a = A[i] < A[i + 1];
//             bool b = B[i] < B[i + 1];
//             if (a != b)
//             {
//                 pos = false;
//                 break;
//             }
//         }

//         if (pos)
//             cout << "Yes" << '\n';
//         else
//             cout << "No" << '\n';
//     }
//     return 0;
// }

// class Solution
// {
// public:
//     int cntSubarrays(vector<int> &arr, int k)
//     {
//         int n = arr.size();
//         unordered_map<int, int> hash;
//         int ans = 0, sum = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             sum += arr[i];
//             if (hash.find(sum - k) != hash.end())
//                 ans++;
//             hash[sum]++;
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     long long maxSubarraySum(vector<int> &nums, int k)
//     {
//         // Maintain minimum prefix sum ending at every possible index%k.
//         unordered_map<int, long long> hash;

//         long long sum = 0;
//         int n = nums.size();
//         long long maxi = LLONG_MIN;
//         for (int i = 0; i < n; ++i)
//         {

//             sum += nums[i];
//             if (hash.find(i % k) != hash.end())
//             {
//                 maxi = max(maxi, sum - hash[i % k]);
//                 hash[i % k] = min(hash[i % k], sum);
//             }
//             else
//                 hash[i % k] = sum;

//             if ((i + 1) % k == 0)
//                 maxi = max(maxi, sum);
//         }

//         return maxi;
//     }
// };

// vector<int> addArrays(vector<int> &A, vector<int> &B)
// {
//     int n = A.size(), m = B.size();
//     int i = n - 1, j = m - 1, carry = 0;
//     vector<int> ans;
//     while (i >= 0 || j >= 0)
//     {
//         int a = 0, b = 0;
//         if (i >= 0)
//             a = A[i];
//         if (j >= 0)
//             b = B[j];
//         int sum = a + b + carry;
//         int put = (sum) % 10;
//         carry = sum / 10;
//         ans.push_back(put);
//         i--;
//         j--;
//     }
//     reverse(ans.begin(), ans.end());
// }

// bool check(vector<int> &arr, int num, int m)
// {

//     int n = arr.size();
//     int temp = num;
//     int st = 1;

//     for (int i = 0; i < n; ++i)
//     {
//         if (temp < arr[i])
//         {
//             temp = num;
//             st++;
//         }
//         temp -= arr[i];
//     }
//     return st <= m;
// }

// int findPages(vector<int> &arr, int n, int m)
// {
//     // Write your code here.

//     if (m > n)
//         return -1;

//     int l = *max_element(arr.begin(), arr.end());
//     int r = 1e9;
//     int ans;
//     while (l <= r)
//     {

//         int mid = l + (r - l) / 2;
//         if (check(arr, mid, m))
//         {
//             ans = mid;
//             r = mid - 1;
//         }
//         else
//             l = mid + 1;
//     }

//     return ans;
// }

// int canJump(vector<int> &A)
// {
//     int maxi = 0;
//     int n = A.size();

//     for (int i = 0; i < n; ++i)
//     {
//         if (i > maxi)
//             return 0;

//         maxi = max(maxi, i + A[i]);
//     }

//     return 1;
// }

// class Solution
// {
// public:
//     int nums;
//     int dfs(vector<vector<int>> &adj, vector<bool> &vis, vector<int> &values, int current, int parent, int k)
//     {

//         int sz = adj[current].size();
//         int temp = 0;
//         for (int i = 0; i < sz; ++i)
//         {
//             int next = adj[current][i];
//             if (!vis[next])
//             {
//                 vis[next] = true;
//                 temp += dfs(adj, vis, values, next, current, k);
//             }
//         }
//         temp = temp % k;
//         if (temp == 0)
//             nums++;

//         return temp;
//     }

//     int maxKDivisibleComponents(int n, vector<vector<int>> &edges, vector<int> &values, int k)
//     {
//         int n = values.size();
//         vector<vector<int>> adj(n);
//         nums = 0;

//         for (int i = 0; i < n - 1; ++i)
//         {

//             int n1 = edges[i][0];
//             int n2 = edges[i][1];
//             adj[n1].push_back(n2);
//             adj[n2].push_back(n1);
//         }
//         vector<bool> vis(n, false);

//         dfs(adj, vis, values, 0, -1, k);
//         return nums;
//     }
// };

// class Solution
// {
// public:
//     int firstMissingPositive(vector<int> &nums)
//     {
//         int n = nums.size();
//         for (int i = 0; i < n; ++i)
//         {
//             int idx = nums[i] - 1;
//             if (idx >= 0 && idx < n)
//                 nums[idx] = nums[i];
//         }

//         for (int i = 0; i < n; ++i)
//         {
//             if (i + 1 != nums[i])
//                 return i + 1;
//         }

//         return n + 1;
//     }
// };

// #include <bits/stdc++.h>

// class BinaryTreeNode
// {
// public:
//     int data;
//     BinaryTreeNode *left;
//     BinaryTreeNode *right;

//     BinaryTreeNode(int data)
//     {
//         this->data = data;
//         left = NULL;
//         right = NULL;
//     }
// };

// int dfs(BinaryTreeNode *root, int value)
// {

//     if (root == NULL)
//         return 0;

//     int current = root->data;

//     int newcurrent = 0;
//     newcurrent += dfs(root->left, current);
//     newcurrent += dfs(root->right, current);

//     root->data = max(newcurrent, value);
//     return root->data;
// }

// void changeTree(BinaryTreeNode *root)
// {
//     // Write your code here.

//     dfs(root, 0);
// }

// class Solution
// {
// public:
//     vector<int> nextGreaterElements(vector<int> &nums)
//     {
//         int n = nums.size();
//         vector<int> ans(n);

//         stack<int> st1, st2;

//         for (int i = 0; i < n; ++i)
//         {
//             st1.push(i);
//         }

//         for (int i = n - 1; i >= 0; --i)
//         {

//             while (!st2.empty() && st2.top() <= nums[i])
//                 st2.pop();

//             if (!st2.empty())
//                 ans[i] = st2.top();

//             if (st2.empty() || st2.top() <= nums[i])
//             {

//                 while (!st1.empty() && nums[st1.top()] <= nums[i])
//                 {
//                     st1.pop();
//                 }

//                 if (!st1.empty())
//                     ans[i] = nums[st1.top()];
//                 else
//                     ans[i] = -1;
//             }

//             st2.push(nums[i]);
//         }
//         return ans;
//     }
// };

// string solve(string A, string B)
// {

//     int correct = 0;
//     int n = A.size();
//     vector<int> vec1(10), vec2(10);
//     for (int i = 0; i < n; ++i)
//     {
//         if (A[i] != B[i])
//         {
//             vec1[A[i]]++;
//             vec2[B[i]]++;
//         }
//         else
//             correct++;
//     }
//     int another = 0;
//     for (int i = 0; i < 10; ++i)
//         another += min(vec1[i], vec2[i]);
//     string s = "";
//     s += to_string(correct);
//     s += 'A';
//     s += to_string(another);
//     s += 'B';
//     return s;
// }

// class Solution
// {
// public:
//     int countElements(vector<int> &nums, int k)
//     {
//         sort(nums.begin(), nums.end());
//         int ans = 0;
//         int num = nums[0];
//         int n = nums.size();
//         unordered_map<int, int> hash;
//         for (int i = 0; i < n; ++i)
//             hash[nums[i]]++;
//         auto it = nums.begin();
//         while (true && it != nums.end())
//         {
//             it = upper_bound(nums.begin(), nums.end(), num);
//             int count = nums.end() - it;
//             if (count >= k)
//                 ans += hash[num];
//             else
//                 break;
//             num = *it;
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     long long reve(int n)
//     {
//         string s = to_string(n);
//         reverse(s.begin(), s.end());
//         return (long long)stoi(s);
//     }
//     // long long strip(int n){
//     //     while(n>0 && n%10 ==0) n/=10;
//     //     return (long long)n;
//     // }

//     int minMirrorPairDistance(vector<int> &nums)
//     {
//         int n = nums.size();
//         unordered_map<int, int> hash;
//         vector<long long> rev;

//         for (int i = 0; i < n - 1; ++i)
//         {
//             rev.push_back(reve(nums[i]));
//             hash[nums[i]] = i;
//         }
//         int ans = INT_MAX;
//         for (int i = 0; i < n; ++i)
//         {
//             long long a = rev[i];
//             if (hash.find(a) != hash.end())
//             {
//                 int idx = hash[a];
//                 if (idx > i)
//                     ans = min(ans, abs(idx - i));
//             }
//         }

//         if (ans == INT_MAX)
//             return -1;

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int minSubarray(vector<int> &nums, int p)
//     {
//         long long sum = accumulate(nums.begin(), nums.end(), 0LL);
//         int rm = sum % p;
//         if (rm == 0)
//             return 0;
//         int n = nums.size();
//         unordered_map<long long, int> hash;
//         hash[0] = -1;
//         long long temp = 0;
//         int ans = INT_MAX;

//         for (int i = 0; i < n; ++i)
//         {
//             temp += nums[i];

//             int rem = temp % p;
//             long long left = abs(rm - rem);
//             if (rem >= rm)
//                 left = rem - rm;
//             else
//                 left = p - abs(rem - rm);

//             if (hash.find(left) != hash.end())
//             {
//                 int che = INT_MAX;
//                 che = i - hash[left];
//                 ans = min(ans, che);
//             }
//             hash[rem] = i;
//         }

//         if (ans == INT_MAX || ans == n)
//             return -1;
//         return ans;
//     }
// };

// // #include <bits/stdc++.h>

// // template <typename T>
// // class TreeNode
// // {
// // public:
// //     T data;
// //     TreeNode<T> *left;
// //     TreeNode<T> *right;

// //     TreeNode(T data)
// //     {
// //         this->data = data;
// //         left = NULL;
// //         right = NULL;
// //     }
// // };

// // void dfs(TreeNode<int> *root, int distance, map<int, pair<int, int>> &hash, int depth)
// // {

// //     if (root == NULL)
// //         return;
// //     if (hash.find(distance) == hash.end())
// //         hash[distance] = {root->data, depth};
// //     else
// //     {
// //         if (hash[distance].second <= depth)
// //             hash[distance] = {root->data, depth};
// //     }
// //     dfs(root->left, distance - 1, hash, depth + 1);

// //     dfs(root->right, distance + 1, hash, depth + 1);
// // }

// // vector<int> bottomView(TreeNode<int> *root)
// // {
// //     // Write your code here.
// //     map<int, pair<int, int>> hash;
// //     vector<int> ans;
// //     dfs(root, 0, hash, 0);

// //     for (auto it = hash.begin(); it != hash.end(); ++it)
// //         ans.push_back(it->second.first);

// //     return ans;
// // }

// class Solution
// {
// public:
//     bool check(vector<int> &batteries, int k, int n)
//     {

//         int sz = batteries.size();
//         int cnt = 0;
//         int temp = k;
//         int forw = 0;
//         long long sum = 0;

//         for (int i = 0; i < sz; ++i)
//         {
//             if (batteries[i] < k)
//             {
//                 sum += batteries[i];
//                 cnt++;
//             }
//         }
//         long long temp = sum / (long long)cnt;
//         if (temp >= k)
//             return true;

//         return false;
//     }
//     long long maxRunTime(int n, vector<int> &batteries)
//     {
//         long long r = accumulate(batteries.begin(), batteries.end(), 0LL);
//         long long l = 0;

//         long long ans = 0;

//         while (l <= r)
//         {
//             long long mid = l + (r - l) / 2;

//             if (check(batteries, mid, n))
//             {
//                 ans = mid;
//                 l = mid + 1;
//             }
//             else
//                 r = mid - 1;
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int countTrapezoids(vector<vector<int>> &points)
//     {
//         unordered_map<int, int> hash;
//         long int ans = 0, sum = 0;

//         int n = points.size();

//         for (int i = 0; i < n; ++i)
//         {
//             hash[points[i][1]]++;
//         }
//         int MOD = 1e9 + 7;
//         for (auto it = hash.begin(); it != hash.end(); ++it)
//         {
//             int nn = it->second;
//             int a = nn * (nn - 1) / 2;
//             int news = (a * sum) % MOD;
//             ans = (ans + news) % MOD;
//             sum += a;
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     bool canJump(vector<int> &nums)
//     {
//         int maxi = 0;
//         int n = nums.size();

//         for (int i = 0; i < n; ++i)
//         {
//             if (maxi > i)
//                 return false;
//             maxi = max(maxi, i + nums[i]);
//         }
//         return true;
//     }
// };

// class Solution
// {
// public:
//     int minimumEffortPath(vector<vector<int>> &heights)
//     {

//         priority_queue<tuple<int, int, int>,         // 1. Data Type
//                        vector<tuple<int, int, int>>, // 2. Container
//                        greater<tuple<int, int, int>> // 3. Comparator (Min-Heap)
//                        >
//             pq;

//         int n = heights.size();
//         int m = heights[0].size();
//         vector<vector<bool>> vis(n, vector<bool>(m, false));
//         vector<int> a{1, 0, -1, 0};
//         vector<int> b{0, 1, 0, -1};
//         pq.push({0, 0, 0});
//         while (!pq.empty())
//         {

//             auto [effortsf, x, y] = pq.top();
//             if (x == n - 1 && y == m - 1)
//                 return effortsf;

//             vis[x][y] = true;
//             for (int i = 0; i < 4; ++i)
//             {
//                 int nx = x + a[i];
//                 int ny = y + b[i];
//                 int cv = heights[x][y];
//                 if (nx < n && nx >= 0 && ny < m && ny >= 0 && !vis[nx][ny])
//                 {
//                     int neffort = max(abs(heights[nx][ny] - cv), effortsf);
//                     pq.push({neffort, nx, ny});
//                 }
//             }
//         }

//         return -1;
//     }
// };

// // User function template for C++

// class Solution
// {
// public:
//     void floydWarshall(vector<vector<int>> &dist)
//     {
//         // Code here
//         int n = dist.size();
//         for (int i = 0; i < n; ++i)
//         {
//             int via_idx = i;
//             for (int i = 0; i < n; ++i)
//             {
//                 int l = i;
//                 for (int j = 0; j < n; ++j)
//                 {
//                     int r = j;
//                     if (dist[l][via_idx] != 1e8 && dist[via_idx][r] != 1e8)
//                         dist[i][j] = min(dist[l][via_idx] + dist[via_idx][r], dist[i][j]);
//                 }
//             }
//         }
//     }
// };

// class Solution
// {
// public:
//     long subarrayXor(vector<int> &arr, int k)
//     {
//         long ans = 0;
//         int n = arr.size();

//         unordered_map<int, int> hash;
//         hash[0] = 1;
//         long int xo = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             xo ^= arr[i];
//             if (hash.find(xo ^ k) != hash.end())
//             {
//                 ans += hash[xo ^ k];
//             }
//             hash[xo]++;
//         }

//         return ans;
//     }
// };

// #include <bits/stdc++.h>
// int getLongestSubarray(vector<int> &nums, int k)
// {
//     // Write your code here
//     unordered_map<int, int> hash;

//     int n = nums.size();
//     hash[0] = -1;
//     long int sum = 0;
//     int ans = 0;
//     for (int i = 0; i < n; ++i)
//     {
//         sum += nums[i];
//         int check = sum - k;

//         if (hash.find(check) != hash.end())
//             ans = max(ans, i - hash[check]);
//         else
//             hash[sum] = i;
//     }

//     return ans;
// }

// class Solution
// {
// public:
//     int countTrapezoids(vector<vector<int>> &points)
//     {
//         unordered_map<double, unordered_set<double>> hash;

//         int n = points.size();

//         for (int i = 0; i < n; ++i)
//         {
//             double x1 = points[i][0];
//             double y1 = points[i][1];
//             for (int j = i + 1; j < n; ++j)
//             {
//                 double x2 = points[j][0];
//                 double y2 = points[j][1];
//                 double m = (y2 - y1) / (x2 - x1);
//                 double c = y2 - m * x2;
//                 hash[m].insert(c);
//             }
//         }

//         int ans = 0;
//         for (auto it = hash.begin(); it != hash.end(); ++it)
//         {

//             int sz = it->second.size();

//             ans += sz * (sz - 1) / 2;
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int countTrapezoids(vector<vector<int>> &points)
//     {
//         map<pair<int, int>, unordered_map<int, int>> hash;
//         map<pair<int, int>, int> mp;

//         int n = points.size();

//         for (int i = 0; i < n; ++i)
//         {
//             int x1 = points[i][0];
//             int y1 = points[i][1];
//             for (int j = i + 1; j < n; ++j)
//             {
//                 int x2 = points[j][0];
//                 int y2 = points[j][1];
//                 int A = y2 - y1;
//                 int B = x2 - x1;
//                 int C = B * y1 - A * x1;

//                 mp[{x1 + x2, y1 + y2}]++;

//                 int g = std::gcd(std::gcd(abs(A), abs(B)), abs(C));

//                 if (g)
//                     A /= g, B /= g, C /= g;

//                 if (B < 0 || (B == 0 && A < 0))
//                 {
//                     B = -B;
//                     A = -A;
//                     C = -C;
//                 }
//                 hash[{A, B}][C]++;
//                 if (hash[{A, B}][C] > 1 && mp[{x1 + x2, y1 + y2}] > 0)
//                     continue;
//                 mp[{x1 + x2, y1 + y2}]++;
//             }
//         }

//         int ans = 0;
//         for (auto it = hash.begin(); it != hash.end(); ++it)
//         {

//             int add = 0;
//             int sub = 0;
//             for (auto it2 = it->second.begin(); it2 != it->second.end();
//                  ++it2)
//             {
//                 sub += it2->second * (it2->second - 1) / 2;
//                 add += it2->second;
//             }
//             ans += add * (add - 1) / 2 - sub;
//         }
//         for (auto it = mp.begin(); it != mp.end(); ++it)
//         {
//             int temp = it->second;
//             ans -= temp * (temp - 1) / 2;
//         }

//         return ans;
//     }
// };
// class Solution
// {
// public:
//     int countPartitions(vector<int> &nums)
//     {

//         int n = nums.size();
//         vector<int> suf(n, 0);
//         int sum = 0;

//         for (int i = n - 1; i >= 0; --i)
//         {
//             suf[i] = sum;
//             sum += nums[i];
//         }

//         sum = 0;
//         int ans = 0;
//         for (int i = 0; i < n - 1; ++i)
//         {
//             sum += nums[i];
//             int temp = sum - suf[i];
//             if (!(temp % 2))
//                 ans++;
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int countCollisions(string directions)
//     {
//         int n = directions.size();

//         int ans = 0;
//         int l = 0;
//         int dub = 0;
//         int r = 0;
//         for (int i = n - 1; i >= 0; --i)
//         {
//             char cur1 = directions[i];
//             if (directions[i] == 'L')
//                 l++;
//             else if (l > 0)
//             {
//                 ans += l;
//                 l = 0;
//             }

//             char cur2 = directions[n - i - i];
//             if (cur2 == 'R')
//                 r++;
//             else if (r > 0)
//             {

//                 ans += r;
//                 r = 0;
//             }
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int countTrapezoids(vector<vector<int>> &points)
//     {
//         map<pair<int, int>, unordered_map<int, int>> hash;
//         map<pair<int, int>, unordered_map<int, map<pair<int, int>, int>>> mp;

//         int n = points.size();
//         int count = 0;

//         for (int i = 0; i < n; ++i)
//         {
//             int x1 = points[i][0];
//             int y1 = points[i][1];
//             for (int j = i + 1; j < n; ++j)
//             {
//                 int x2 = points[j][0];
//                 int y2 = points[j][1];
//                 int A = y2 - y1;
//                 int B = x2 - x1;
//                 int C = B * y1 - A * x1;

//                 int g = std::gcd(std::gcd(abs(A), abs(B)), abs(C));

//                 if (g)
//                     A /= g, B /= g, C /= g;

//                 if (B < 0 || (B == 0 && A < 0))
//                 {
//                     B = -B;
//                     A = -A;
//                     C = -C;
//                 }
//                 hash[{A, B}][C]++;

//                 mp[{A, B}][C][{x1 + x2, y1 + y2}]++;
//                 if (mp[{A, B}][C][{x1 + x2, y1 + y2}] == 1)
//                     count++;
//             }
//         }

//         int ans = 0;
//         for (auto it = hash.begin(); it != hash.end(); ++it)
//         {

//             int add = 0;
//             int sub = 0;
//             for (auto it2 = it->second.begin(); it2 != it->second.end();
//                  ++it2)
//             {
//                 sub += it2->second * (it2->second - 1) / 2;
//                 add += it2->second;
//             }
//             ans += add * (add - 1) / 2 - sub;
//         }
//         // for (auto it = mp.begin(); it != mp.end(); ++it) {
//         //     int temp = it->second;
//         //     ans -= temp * (temp - 1) / 2;
//         // }

//         return ans - count;
//     }
// };

// class Solution
// {
// public:
//     vector<int> asteroidCollision(vector<int> &asteroids)
//     {
//         vector<int> ans;
//         stack<int> st;
//         int n = asteroids.size();
//         st.push(asteroids[0]);

//         for (int i = 1; i < n; ++i)
//         {
//             int cur = asteroids[i];
//             int abs_cur = abs(cur);
//             if (!st.empty())
//             {
//                 if (st.top() * cur >= 0)
//                     st.push(cur);
//                 continue;
//             }
//             while (!st.empty())
//             {
//                 if (st.top() * cur <= 0)
//                 {

//                     int topper = st.top();
//                     int abs_topper = abs(topper);
//                     if (abs_topper == abs_cur)
//                     {
//                         st.pop();
//                         break;
//                     }

//                     else
//                     {
//                         if (abs_cur > abs_topper)
//                         {
//                             st.pop();
//                             if (st.empty())
//                             {
//                                 st.push(abs_cur * (abs_cur / cur));
//                                 break;
//                             }
//                         }
//                         else
//                         {

//                             break;
//                         }
//                     }
//                 }
//             }
//         }

//         while (!st.empty())
//         {
//             ans.push_back(st.top());
//             st.pop();
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     string toBinary(int x)
//     {
//         if (x == 0)
//             return "0";
//         string s = "";
//         while (x > 0)
//         {
//             s += char('0' + (x % 2));
//             x /= 2;
//         }
//         reverse(s.begin(), s.end());
//         return s;
//     }

//     int binaryToDecimal(string s)
//     {
//         int result = 0;
//         for (char c : s)
//         {
//             result = result * 2 + (c - '0');
//         }
//         return result;
//     }

//     vector<int> minOperations(vector<int> &nums)
//     {

//         int n = nums.size();
//         vector<int> ans(n);

//         for (int i = 0; i < n; ++i)
//         {
//             string temp = toBinary(nums[i]);
//             int l = 0, r = temp.size() - 1;
//             while (l <= r)
//             {
//                 temp[r] = temp[l];
//                 r--;
//                 l++;
//             }
//             ans[i] = abs(nums[i] - binaryToDecimal(temp));
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int binaryToDecimal(const string &s)
//     {
//         int result = 0;
//         for (char c : s)
//         {
//             result = result * 2 + (c - '0');
//         }
//         return result;
//     }

//     int toBinary(int x)
//     {
//         if (x == 0)
//             return 0;
//         string s;
//         while (x > 0)
//         {
//             s.push_back((x & 1) ? '1' : '0');
//             x >>= 1;
//         }
//         return binaryToDecimal(s);
//     }

//     bool comp(int &a, int &b)
//     {
//         int a1 = toBinary(a);
//         int b1 = toBinary(b);
//         if (a1 == b1)
//             return a < b;
//         return a1 < b1;
//     }
//     vector<int> sortByReflection(vector<int> &nums)
//     {
//         sort(nums.begin(), nums.end(), comp);
//         return nums;
//     }
// };
// // ©leetcode

// class Solution
// {
// public:
//     // const int MAXN = 500000;
//     vector<bool> prime;

//     void precompute()
//     {
//         prime.resize(500000, true);
//         prime[0] = prime[1] = false;
//         for (int i = 2; i * i <= 500000; i++)
//             if (prime[i])
//                 for (int j = i * i; j <= 500000; j += i)
//                     prime[j] = false;
//     }

//     Solution() { precompute(); }

//     int largestPrime(int n)
//     {

//         int ans = 0;
//         int limit = prime.size();
//         int sum = 0;
//         int i = -1;
//         while (sum < n && i < limit)
//         {
//             i++;
//             if (!prime[i])
//                 continue;
//             sum += i + 2;
//             if (sum > n)
//                 break;
//             if (prime[sum])
//                 ans = sum;
//         }

//         return ans;
//     }
// };
// // ©leetcode

// class Solution
// {
// public:
//     long long totalScore(int hp, vector<int> &damage, vector<int> &requirement)
//     {
//         long long ans = 0;
//         int n = damage.size();

//         vector<int> pref(n);
//         long long sum = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             pref[i] = sum;
//             sum += damage[i];
//         }

//         sum = 0;
//         int l = 0;
//         for (int i = 0; i < n; ++i)
//         {

//             sum += damage[i];
//             long long left = hp - sum + pref[l];
//             while (left < requirement[i] && l <= i)
//             {
//                 l++;
//                 left = hp - sum + pref[l];
//             }
//             ans += i - l + 1;
//         }
//         return ans;
//     }
// };

// int solve(vector<int> &A)
// {
//     unordered_map<int, int> hash;
//     int c0 = 0, c1 = 0;

//     int n = A.size();
//     int ans = 0;

//     for (int i = 0; i < n; ++i)
//     {
//         if (A[i] == 0)
//             c0++;
//         else
//             c1++;
//         int s = c1 - c0;
//         if (hash.find(s - 1) != hash.end())
//         {
//             ans = max(ans, i - hash[s - 1]);
//         }
//         if (hash.find(s) == hash.end())
//             hash[s] = i;
//     }
//     return ans;
// }

// class Solution
// {
// public:
//     int countTriples(int n)
//     {
//         int ans = 0;
//         for (int i = 1; i <= n; ++i)
//         {
//             for (int j = i; j <= n; ++j)
//             {
//                 if (i * i + j * j <= n * n)
//                     ans += 2;
//             }
//         }

//         return ans;
//     }
// };

// vector<int> slidingMaximum(const vector<int> &A, int B)
// {

//     vector<int> ans;
//     int n = A.size();
//     deque<int> q;
//     for (int i = 0; i < B; ++i)
//     {
//         while (!q.empty() && A[q.back()] < A[i])
//         {
//             q.pop_back();
//         }
//         q.push_back(i);
//     }
//     ans.push_back(A[q.front()]);
//     for (int i = B; i < n; ++i)
//     {
//         while (!q.empty() && A[q.back()] < A[i])
//         {
//             q.pop_back();
//         }
//         while (!q.empty() && q.back() <= i - B)
//             q.pop_back();
//         q.push_back(i);
//         ans.push_back(A[q.front()]);
//     }
//     return ans;
// }

// class Solution
// {
// public:
//     int specialTriplets(vector<int> &nums)
//     {
//         int ans = 0;
//         unordered_map<int, int> hash, temp;
//         int n = nums.size();
//         for (int i = 2; i < n; ++i)
//             hash[nums[i]]++;
//         temp[nums[0]]++;
//         int mod = 1e9 + 7;
//         for (int i = 1; i < n; ++i)
//         {
//             temp[nums[i]]++;
//             int right = hash[nums[i] * 2] - temp[nums[i] * 2];
//             int left = temp[nums[i] * 2];

//             ans = (ans + left * right) % mod;
//         }

//         return ans;
//     }
// };

// string lcp(string &a, string &b)
// {
//     int n = a.size();
//     int m = b.size();
//     string ans = "";
//     for (int i = 0; i < min(n, m); ++i)
//     {
//         if (a[i] == b[i])
//             ans += a[i];
//         else
//             return ans;
//     }
//     return "";
// }

// string longestCommonPrefix(vector<string> &A)
// {

//     int n = A.size();
//     string first = "";
//     if (n >= 1)
//         first = A[0];
//     else
//         return "";
//     for (int i = 1; i < n; ++i)
//     {
//         first = lcp(first, A[i]);
//         if (first == "")
//             return "";
//     }

//     return first;
// }

// class Solution
// {
// public:
//     int countPermutations(vector<int> &complexity)
//     {
//         int mini = complexity[0];
//         int n = complexity.size();

//         for (int i = 1; i < n; ++i)
//         {
//             if (complexity[i] == mini)
//                 return 0;
//         }
//         long int ans = 1;
//         int mod = 1e9 + 7;
//         for (int i = n - 1; i >= 1; --i)
//         {
//             ans = (ans * i) % mod;
//         }

//         return ans;
//     }
// };

// int solve(vector<int> &A, int B)
// {

//     int n = A.size();
//     if (n == 1)
//         return n;

//     sort(A.begin(), A.end());

//     int a = A[0];

//     for (int i = 1; i < n; ++i)
//     {
//         if (A[i] - a != 0 && A[i] - a != B && A[i] - a != 2 * B)
//             return 0;
//     }
//     return 1;
// }

// #pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         int n;
//         cin >> n;
//         vector<int> ans;
//         unordered_map<string, int> hash;
//         string a;
//         int c;
//         for (int i = 0; i < 3 * n; ++i)
//         {
//             cin >> a >> c;
//             hash[a] += c;
//         }

//         for (auto it = hash.begin(); it != hash.end(); ++it)
//             ans.push_back(it->second);

//         sort(ans.begin(), ans.end());
//         for (int i = 0; i < hash.size(); ++i)
//             cout << ans[i] << '\n';
//     }
//     return 0;
// }

// #pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {

//         unordered_map<int, int> hash;
//         int n;
//         cin >> n;
//         int cnt = 0, a = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> a;
//             hash[a]++;
//         }

//         int ans = n;
//         for (auto it = hash.begin(); it != hash.end(); ++it)
//         {
//             int change = n - it->second;
//             ans = min(ans, change * it->first);
//         }

//         cout << ans << '\n';
//     }
//     return 0;
// }

// #pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {

//         int n;
//         cin >> n;
//         int a;
//         unordered_map<int, int> hash;
//         for (int i = 0; i < 2 * n; ++i)
//         {
//             cin >> a;
//             hash[a]++;
//         }
//         bool pos = true;
//         for (auto it = hash.begin(); it != hash.end(); ++it)
//         {
//             if (it->second == 1)
//             {
//                 pos = false;
//                 break;
//             }
//         }
//         if (pos)
//             cout << "YES";
//         else
//             cout << "NO";
//         cout << '\n';
//     }
//     return 0;
// }

// // class Solution
// // {
// // public:
// //     int ans = 0;
// //     int dfs(map<TreeNode*t,int>& hash, TreeNode *n)
// //     {

// //         if (n == NULL)
// //             return 0;

// //         if (hash.find(n) != hash.end())
// //             return hash.end();
// //         int a = 0, b = 0;
// //         a = max(a, dfs(hash, n->left));
// //         b = max(a, dfs(hash, n->right));
// //         int value = n->val;
// //         ans = max(ans, val + a + b);
// //         return hash[n] = max(value, value + max(a, b));
// //     }

// //     int maxPathSum(TreeNode *root)
// //     {
// //         map<TreeNode *, int> hash;
// //         ans = max(ans, dfs(hash, root));
// //         return ans;
// //     }
// // };

// class Solution
// {
// public:
//     int countCoveredBuildings(int n, vector<vector<int>> &buildings)
//     {
//         unordered_map<string, int> mini, maxi;
//         int n = buildings.size();
//         for (int i = 0; i < n; ++i)
//         {
//             int x = buildings[i][0];
//             string xx = "x" + to_string(x);
//             int y = buildings[i][1];
//             string yy = "y" + to_string(y);
//             if (maxi.find(xx) != maxi.end())
//                 maxi[xx] = max(maxi[xx], y);
//             else
//                 maxi[xx] = y;
//             if (mini.find(xx) != mini.end())
//                 mini[xx] = min(mini[xx], y);
//             else
//                 mini[xx] = y;
//             if (maxi.find(yy) != maxi.end())
//                 maxi[yy] = max(maxi[yy], x);
//             else
//                 maxi[yy] = x;
//             if (mini.find(yy) != mini.end())
//                 mini[yy] = min(mini[yy], x);
//             else
//                 mini[yy] = x;
//         }

//         int ans = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             int x = buildings[i][0];
//             string xx = "x" + to_string(x);
//             int y = buildings[i][1];
//             string yy = "y" + to_string(y);
//             int llx = mini[xx];
//             int ulx = maxi[xx];
//             int lly = mini[yy];
//             int uly = maxi[yy];
//             if (y < ulx && y > llx && x < uly && x > lly)
//                 ans++;
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     bool cmp(vector<string> &v1, vector<string> &v2)
//     {

//         if (v1[1] == v2[1])
//             return v1[0] > v2[0];

//         return v1[1] < v2[1];
//     }
//     vector<int> countMentions(int numberOfUsers, vector<vector<string>> &events)
//     {
//         vector<int> ans(numberOfUsers, 0);
//         int n = events.size();
//         sort(events.begin(), events.end(), cmp);
//         deque<pair<int, int>> dq;

//         int cnt = 0;

//         for (auto &v : events)
//         {

//             string &event = v[0];
//             int ts = stoi(v[1]);
//             string &mention = v[2];
//             while (!dq.empty() && dq.front().first <= ts)
//                 dq.pop_front();
//             if (event == "OFFLINE")
//             {

//                 dq.push_back({ts + 60, stoi(mention)});
//             }
//             else
//             {
//                 if (mention == "ALL")
//                 {
//                     cnt++;
//                 }
//                 else if (mention == "HERE")
//                 {
//                     cnt++;
//                     for (auto [ts, id] : dq)
//                     {
//                         ans[id]--;
//                     }
//                 }
//                 else
//                 {
//                     string temp = "";
//                     for (char c : mention)
//                     {
//                         if (c <= '9' && c >= '0')
//                             temp += c;
//                         else
//                         {
//                             if (temp.size())
//                             {
//                                 ans[stoi(temp)]++;
//                                 temp = "";
//                             }
//                         }
//                     }
//                 }
//             }
//         }

//         for (int i = 0; i < ans.size(); ++i)
//             ans[i] += cnt;

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int minDeletionSize(vector<string> &strs)
//     {
//         int n = strs.size();
//         int m = strs[0].size();
//         vector<int> dp(m, 1);
//         int maxi = 0;
//         for (int i = 0; i < m; ++i)
//         {
//             for (int j = i + 1; j < m; ++j)
//             {
//                 int cnt = 0;
//                 for (int k = 0; k < n; ++k)
//                 {
//                     if (strs[k][j] >= strs[k][i])
//                         cnt++;
//                 }
//                 if (cnt == n)
//                     dp[j] = max(dp[j], dp[i] + 1);
//                 maxi = max(maxi, dp[j]);
//             }
//         }

//         return m - maxi;
//     }
// };

// class Solution
// {
// public:
//     int bestClosingTime(string customers)
//     {
//         int pen = 0;
//         int no_customers = 0;
//         int n = customers.size();
//         vector<int> vec(n, 0);
//         int x = 0;
//         for (int i = n - 1; i >= 0; --i)
//         {
//             if (customers[i] == 'Y')
//                 x++;
//             vec[i] = x;
//         }
//         x = 0;
//         int ans = 0;
//         int current = INT_MAX;
//         for (int i = 0; i < n; ++i)
//         {
//             if (current > vec[i] + x)
//             {
//                 ans = i;
//                 current = vec[i] + x;
//             }
//             if (customers[i] == 'N')
//                 x++;
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int mostBooked(int n, vector<vector<int>> &meetings)
//     {
//         sort(meetings.begin(), meetings.end());
//         priority_queue<long int, vector<long int>, greater<long int>> pq1;
//         priority_queue<pair<long int, int>, vector<pair<long int, int>>,
//                        greater<pair<long int, int>>>
//             pq2;

//         int m = meetings.size();
//         vector<int> vis(n, 0);
//         for (int i = 0; i < n; ++i)
//         {
//             pq1.push(i);
//         }

//         for (int i = 0; i < m; ++i)
//         {

//             long int next_start = meetings[i][0];
//             long int next_end = meetings[i][1];
//             long int duration = next_end - next_start;
//             while (!pq2.empty() && next_start >= pq2.top().first)
//             {
//                 pq1.push(pq2.top().second);
//                 pq2.pop();
//             }
//             if (!pq1.empty())
//             {
//                 pq2.push({next_end, pq1.top()});
//                 vis[pq1.top()]++;
//                 pq1.pop();
//             }
//             else
//             {
//                 int latest_end = pq2.top().first;
//                 int latest_room = pq2.top().second;
//                 pq2.pop();
//                 pq2.push({(long int)latest_end + (long int)duration, latest_room});
//                 vis[latest_room]++;
//             }
//         }
//         int maxi = 0;
//         int ans = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             if (vis[i] > maxi)
//             {
//                 ans = i;
//                 maxi = vis[i];
//             }
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     bool check(vector<vector<int>> &grid, int row, int col)
//     {
//         int n = grid.size(), m = grid[0].size();
//         for (int i = row; i < row + 3; ++i)
//         {
//             int temp = 0;
//             for (int j = col; j < col + 3; ++j)
//             {
//                 temp += grid[i][j];
//             }
//             if (temp != 15)
//                 return false;
//         }

//         for (int j = col; j < col + 3; ++j)
//         {
//             int temp = 0;
//             for (int i = row; i < row + 3; ++i)
//             {
//                 temp += grid[i][j];
//             }
//             if (temp != 15)
//                 return false;
//         }
//         int temp = 0;
//         int temp2 = 0;
//         for (int a = 0; a < 3; ++a)
//         {
//             temp += grid[row + a][col + a];
//             temp2 += grid[row + 2 - a][col + a];
//         }
//         if (temp != 15 || temp2 != 15)
//             return false;

//         return true;
//     }

//     int numMagicSquaresInside(vector<vector<int>> &grid)
//     {
//         int n = grid.size();
//         int m = grid[0].size();
//         if (n < 3 || m < 3)
//             return 0;

//         int ans = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             if (n - i < 2)
//                 break;
//             for (int j = 0; j < m; ++j)
//             {
//                 if (m - j < 2)
//                     break;
//                 if (check(grid, i, j))
//                     ans++;
//             }
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     bool check(vector<vector<int>> &cells, int idx, int row, int col)
//     {

//         vector<vector<int>> temp(row + 1, vector<int>(col + 1, 0));

//         for (int i = 0; i < idx; ++i)
//         {
//             int rows = cells[i][0];
//             int cols = cells[i][1];
//             temp[row][col] = 1;
//         }

//         priority_queue<pair<int, int>> pq;
//         for (int i = 0; i < col; ++i)
//         {
//             if (temp[0][i] == 0)
//                 pq.push({0, i});
//         }

//         vector<int> v = {1, 0, 0};
//         vector<int> v1 = {0, 1, -1};
//         vector<vector<bool>> vis(row + 1, vector<bool>(col + 1, 0));
//         while (!pq.empty())
//         {
//             auto [rows, cols] = pq.top();
//             pq.pop();
//             if (vis[rows][cols])
//                 continue;
//             vis[rows][cols] = true;
//             if (rows == row)
//                 return true;
//             for (int i = 0; i < 3; ++i)
//             {
//                 int new_r = rows + v[i];
//                 int new_c = cols + v1[i];
//                 if (new_r < row && new_c < col && temp[new_r][new_c] == 0 && vis[new_r][new_c] == false)
//                 {
//                     pq.push({new_r, new_c});
//                 }
//             }
//         }

//         return false;
//     }

//     int latestDayToCross(int row, int col, vector<vector<int>> &cells)
//     {

//         int sz = cells.size();

//         int l = 0, r = sz;
//         int ans = 0;
//         while (l <= r)
//         {
//             int mid = l + (r - l) / 2;
//             if (check(cells, mid, row, col))
//             {
//                 ans = mid;
//                 l = mid + 1;
//             }
//             else
//                 r = mid - 1;
//         }
//     }
// };

// class Solution
// {
// public:
//     int repeatedNTimes(vector<int> &nums)
//     {
//         unordered_map<int, int> hash;
//         int n = nums.size();

//         for (int i = 0; i < n; ++i)
//         {
//             hash[nums[i]]++;
//             if (hash[nums[i]] > 1)
//                 return nums[i];
//         }

//         return 0;
//     }
// };

// class Solution
// {
// public:
//     int maxTwoEvents(vector<vector<int>> &events)
//     {

//         auto cmp = [](const vector<int> &a, const vector<int> &b)
//         {
//             return a[2] < b[2];
//         };
//         priority_queue<vector<int>, vector<vector<int>>, decltype(cmp)> pq(cmp);
//         sort(events.begin(), events.end(), [](const vector<int> &a, const vector<int> &b)
//              { return a[1] < b[1]; });
//         int n = events.size();
//         for (int i = 0; i < n; ++i)
//             pq.push(events[i]);
//         int ans = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             while (!pq.empty() && pq.top()[0] <= events[i][1])
//                 pq.pop();
//             if (!pq.empty())
//             {
//                 ans = max(ans, events[i][2] + pq.top()[2]);
//             }
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int numOfWays(int n)
//     {
//         int t1 = 6, t2 = 6;
//         for (int i = 1; i < n; ++i)
//         {
//             int newt1 = t1 * 2 + t2 * 2;
//             int newt2 = t1 * 2 + t2 * 3;
//             t1 = newt1;
//             t2 = newt2;
//         }

//         return t1 + t2;
//     }
// };

// class Solution
// {
// public:
//     vector<bool> isPrime;
//     const int N = 1e5;
//     unordered_map<int, int> hash;
//     vector<int> temp;
//     void prime()
//     {
//         isPrime[0] = isPrime[1] = false;

//         for (int i = 2; i * i <= N; i++)
//         {
//             if (isPrime[i])
//             {
//                 for (int j = i * i; j <= N; j += i)
//                 {
//                     isPrime[j] = false;
//                 }
//             }
//         }
//     }

//     void cal()
//     {
//         for (int i = 2; i <= 50000; ++i)
//         {
//             if (isPrime[i])
//                 temp.push_back(i);
//         }

//         int sz = temp.size();
//         for (int i = 0; i < sz; ++i)
//         {
//             int first = temp[i];
//             for (int j = i + 1; j < sz; ++j)
//             {
//                 int second = temp[j];
//                 int temp2 = first * second;
//                 if (temp2 > 100000)
//                     break;
//                 hash[temp2] = 1 + temp2 + first + second;
//             }
//         }
//     }

//     Solution()
//     {
//         isPrime.resize(100000, true);
//         prime();

//         cal();
//     }

//     int sumFourDivisors(vector<int> &nums)
//     {
//         int ans = 0;
//         int n = nums.size();
//         for (int i = 0; i < n; ++i)
//         {
//             if (hash.find(nums[i]) != hash.end())
//                 ans += hash[nums[i]];
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     long long maxMatrixSum(vector<vector<int>> &matrix)
//     {
//         int cnt = 0;
//         int mini = INT_MAX;
//         int n = matrix.size();
//         int ans = 0;

//         for (int i = 0; i < n; ++i)
//         {
//             for (int j = 0; j < n; ++j)
//             {
//                 if (matrix[i][j] < 0)
//                     cnt++;
//                 mini = min(mini, abs(matrix[i][j]));
//                 ans += abs(matrix[i][j]);
//             }
//         }

//         if (cnt % 2 == 0)
//             return ans;
//         else
//             return ans - abs(mini);
//     }
// };

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution
// {
// public:
//     void traverse(int level, TreeNode *root, vector<int> &vec)
//     {
//         if (root == NULL)
//             return;
//         vec[level] += root->val;
//         traverse(level + 1, root->left, vec);
//         traverse(level + 1, root->right, vec);
//     }

//     int maxLevelSum(TreeNode *root)
//     {
//         vector<int> vec(10000, 0);
//         int ans = 1;
//         int maxi = INT_MIN;

//         for (int i = 0; i < 10000; ++i)
//         {
//             if (vec[i] > maxi)
//             {
//                 ans = i + 1;
//                 maxi = vec[i];
//             }
//         }
//         return ans;
//     }
// };

// vector<int> primesum(int A)
// {

//     vector<bool> isPrime(A + 1, true);
//     isPrime[0] = isPrime[1] = false;

//     for (int i = 2; i * i <= A; ++i)
//     {
//         if (isPrime[i])
//         {
//             for (int j = i * i; j <= A; j += i)
//             {
//                 isPrime[j] = false;
//             }
//         }
//     }

//     for (int i = 1; i < A; ++i)
//     {
//         if (isPrime[i] && isPrime[A - i])
//             return {i, A - i};
//     }

//     return {};
// }

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution
// {
// public:
//     int MOD;
//     void sum(TreeNode *root, long int &total_sum1)
//     {
//         if (root == NULL)
//             return;
//         sum(root->left, total_sum1);
//         total_sum1 += root->val;
//         sum(root->right, total_sum1);
//     }

//     long int traverse(TreeNode *root, long int &maxi, long int &total_sum1)
//     {
//         if (root == NULL)
//             return;
//         long int left = traverse(root->left, maxi, total_sum1);
//         long int right = traverse(root->right, maxi, total_sum1);
//         long int total_sum2 = root->val + left + right;
//         long int s1 = total_sum2;
//         long int s2 = total_sum1 - total_sum2;
//         maxi = max(maxi, (s2 * s1) % MOD);
//         return total_sum2;
//     }
//     int maxProduct(TreeNode *root)
//     {

//         long int maxi = INT_MIN;
//         long int total_sum1 = 0, total_sum2 = 0;
//         MOD = 1e9 + 7;
//         sum(root, total_sum1);
//         traverse(root, maxi, total_sum1);

//         return maxi % MOD;
//     }
// };

// class Solution
// {
// public:
//     int maxDotProduct(vector<int> &nums1, vector<int> &nums2)
//     {
//         int n = nums1.size();
//         int m = nums2.size();
//         int ans = nums1[n - 1] * nums2[m - 1];
//         vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

//         for (int j = m - 1; j >= 0; --j)
//         {
//             dp[n - 1][j] = nums1[n - 1] * nums2[j];
//             ans = max(ans, dp[n - 1][j]);
//         }
//         for (int i = n - 2; i >= 0; --i)
//         {
//             for (int j = m - 1; j >= 0; --j)
//             {
//                 dp[i][j] = nums1[i] * nums2[j];

//                 dp[i][j] = max(dp[i][j], dp[i][j] + dp[i + 1][j + 1]);
//                 ans = max(ans, dp[i][j]);
//             }
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int countSubarrays(vector<int> &arr, int k)
//     {
//         // code here
//         int n = arr.size();

//         int l = 0, r = 0, ans = 0;
//         int count = 0;
//         while (l < n && r < n)

//         {
//             if (arr[r] % 2)
//                 count++;

//             if (count == k)
//                 ans++;
//             while (count > k)
//                 if (arr[l] % 2)
//                     count--;
//             l++;
//             ans++;
//         }
//         return ans;
//     }
// };

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution
// {
// public:
//     int maxi;
//     void traverse(TreeNode *root, int ht)
//     {
//         if (root == NULL)
//             return;

//         maxi = max(maxi, ht);
//         traverse(root->left, ht + 1);
//         traverse(root->right, ht + 1);
//     }

//     void travel(TreeNode *root, unordered_map<TreeNode *, bool> &hash, int ht)
//     {

//         if (ht == maxi)
//             hash[root] = true;
//         if (root == NULL)
//             return;
//         travel(root->left, hash, ht + 1);
//         travel(root->right, hash, ht + 1);
//     }

//     TreeNode *ans(TreeNode *root, unordered_map<TreeNode *, bool> &hash)
//     {

//         if (root == NULL)
//             return NULL;
//         if (hash.find(root) != hash.end())
//             return root;
//         TreeNode *left = ans(root->left, hash);
//         TreeNode *right = ans(root->right, hash);

//         if (left == NULL)
//             return right;
//         if (right == NULL)
//             return left;
//         if (left != NULL && right != NULL)
//             return root;
//     }

//     TreeNode *subtreeWithAllDeepest(TreeNode *root)
//     {
//         maxi = 0;
//         unordered_map<TreeNode *, bool> hash;
//         traverse(root, 1);
//         travel(root, hash, 1);
//         return ans(root, hash);
//     }
// };

// class Solution
// {
// public:
//     int lcs(vector<vector<int>> &dp, string &s1, string &s2, int i, int j)
//     {

//         if (i < 0 || j < 0)
//             return 0;
//         if (dp[i][j] != -1)
//             return dp[i][j];
//         if (s1[i] == s2[j])
//             return dp[i][j] = 1 + lcs(dp, s1, s2, i - 1, j - 1);

//         return dp[i][j] = min(int(s1[i]) + lcs(dp, s1, s2, i - 1, j), int(s2[i]) + lcs(dp, s1, s2, i, j - 1));
//     }

//     int minimumDeleteSum(string s1, string s2)
//     {
//         int n = s1.size();
//         int m = s2.size();
//         vector<vector<int>> dp(n, vector<int>(m, -1));
//         lcs(dp, s1, s2, n - 1, m - 1);
//         return dp[n - 1][m - 1];
//     }
// };

// class Solution
// {
// public:
//     int largestRectangleArea(vector<int> &heights)
//     {
//         int n = heights.size();
//         vector<int> temp(n, -1);
//         stack<int> st, st2;
//         for (int i = 0; i < n; ++i)
//         {

//             while (!st.empty() && heights[st.top()] >= heights[i])
//                 st.pop();
//             if (!st.empty())
//                 temp[i] = st.top();
//             st.push(i);
//         }
//         int ans = heights[0];
//         for (int i = n - 1; i >= 0; --i)
//         {
//             while (!st2.empty() && heights[i] < heights[st2.top()])
//                 st2.pop();
//             if (!st2.empty())
//             {
//                 ans = max(ans, (st2.top() - temp[i] - 1) * heights[i]);
//             }
//             else
//                 ans = max(ans, (n - temp[i] - 1) * heights[i]);
//             st2.push(i);
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int largestRectangleArea(vector<int> &heights)
//     {
//         int n = heights.size();
//         vector<int> temp(n, -1);
//         stack<int> st, st2;
//         for (int i = 0; i < n; ++i)
//         {

//             while (!st.empty() && heights[st.top()] >= heights[i])
//                 st.pop();
//             if (!st.empty())
//                 temp[i] = st.top();
//             st.push(i);
//         }
//         int ans = heights[0];
//         for (int i = n - 1; i >= 0; --i)
//         {
//             while (!st2.empty() && heights[i] < heights[st2.top()])
//                 st2.pop();
//             if (!st2.empty())
//             {
//                 ans = max(ans, (st2.top() - temp[i] - 1) * heights[i]);
//             }
//             else
//                 ans = max(ans, (n - temp[i] - 1) * heights[i]);
//             st2.push(i);
//         }
//         return ans;
//     }

//     int maximalRectangle(vector<vector<char>> &matrix)
//     {
//         int n = matrix.size();
//         int m = matrix[0].size();
//         vector<int> temp(m, 0);

//         int ans = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             for (int j = 0; j < m; ++j)
//             {
//                 int mat = matrix[i][j] - '0';
//                 if (mat == 0)
//                     temp[j] = 0;
//                 else
//                     temp[j]++;
//             }
//             ans = max(ans, largestRectangleArea(temp));
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     string minWindow(string s, string t)
//     {
//         int n = s.size();
//         int m = t.size();
//         if (m > n)
//             return "";

//         unordered_map<char, int> hash1, hash2;
//         unordered_map<char, bool> hash, hash3;
//         for (char c : t)
//         {
//             hash1[c]++;
//             hash[c] = true;
//         }

//         int l = 0, r = 0;
//         int ansl = 0, ansr = INT_MAX, ans = 0;
//         while (l < n && r < n)
//         {
//             if (hash == hash3)
//             {
//                 if (r - l < ansr - ansl)
//                 {
//                     ansr = r;
//                     ansl = l;
//                 }
//                 if (hash1.count(s[l]))
//                 { // Only process if char is in T
//                     hash2[s[l]]--;
//                     if (hash2[s[l]] < hash1[s[l]])
//                         hash3[s[l]] = false;
//                 }
//                 l++;
//             }
//             else
//             {
//                 if (hash1.find(s[r]) != hash1.end())
//                 {
//                     hash2[s[r]]++;
//                     if (hash2[s[r]] >= hash1[s[r]])
//                         hash3[s[r]] = true;
//                 }
//                 r++;
//             }
//         }

//         while (hash == hash3)
//         {
//             if (r - l < ansr - ansl)
//             {
//                 ansr = r;
//                 ansl = l;
//             }
//             if (hash1.count(s[l]))
//             { // Only process if char is in T
//                 hash2[s[l]]--;
//                 if (hash2[s[l]] < hash1[s[l]])
//                     hash3[s[l]] = false;
//             }
//             l++;
//         }

//         if (ansr == INT_MAX)
//             return "";
//         return s.substr(ansl, ansr - ansl);
//     }
// };

// class Solution
// {
// public:
//     double t_area;
//     bool pos(vector<vector<int>> &squares, double y)
//     {

//         double temp = 0;
//         int n = squares.size();
//         for (int i = 0; i < n; ++i)
//         {
//             double nx = squares[i][0];
//             int ny = squares[i][1];
//             double l = squares[i][2];

//             if (ny >= y)
//                 continue;

//             temp += l * min((double)l, y - ny);
//             if (temp == t_area)
//                 return true;
//         }
//         return false;
//     }
//     double separateSquares(vector<vector<int>> &squares)
//     {
//         int n = squares.size();

//         for (int i = 0; i < n; ++i)
//             t_area += squares[i][2] * squares[i][2];

//         t_area /= (double)2;

//         double l = 0, r = 1e9;
//         double div = 2;
//         double ans = 0;
//         while (abs(r - l) > 0.00001)
//         {

//             double mid = l / div + (r - l) / div;
//             if (pos(squares, mid))
//             {
//                 ans = mid;
//                 r = mid - 1;
//             }
//             else
//                 l = mid + 1;
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int maximizeSquareHoleArea(int n, int m, vector<int> &hBars, vector<int> &vBars)
//     {
//         sort(hBars.begin(), hBars.end());
//         sort(vBars.begin(), vBars.end());
//         int temp = 1;
//         int h = 1, v = 1;
//         int sz1 = hBars.size();
//         int sz2 = vBars.size();
//         for (int i = 1; i < sz1; ++i)
//         {
//             if (hBars[i] - hBars[i - 1] == 1)
//             {
//                 temp++;
//                 h = max(temp, h);
//             }
//             else
//                 temp = 1;
//         }
//         temp = 1;
//         for (int i = 1; i < sz2; ++i)
//         {
//             if (vBars[i] - vBars[i - 1] == 1)
//             {
//                 temp++;
//                 v = max(temp, v);
//             }
//             else
//                 temp = 1;
//         }

//         int ans = min(h, v);
//         ans += 2;
//         return ans * ans;
//     }
// };

// class Solution
// {
// public:
//     int maximizeSquareArea(int m, int n, vector<int> &hFences, vector<int> &vFences)
//     {
//         hFences.push_back(1);
//         hFences.push_back(m);
//         vFences.push_back(1);
//         vFences.push_back(n);
//         int sz1 = hFences.size();
//         int sz2 = vFences.size();
//         unordered_map<int, int> hash1;
//         for (int i = 0; i < sz1; ++i)
//         {
//             for (int j = i + 1; j < sz1; ++j)
//             {
//                 int a = hFences[i];
//                 int b = hFences[j];
//                 if (hash1.find(abs(a - b)) == hash1.end())
//                     hash1[abs(a - b)]++;
//             }
//         }
//         int ans = -1;
//         for (int i = 0; i < sz2; ++i)
//         {
//             for (int j = i + 1; j < sz2; ++j)
//             {
//                 int a = vFences[i];
//                 int b = hFences[j];
//                 if (hash1.find(abs(a - b)) != hash1.end())
//                 {
//                     hash1[abs(a - b)]++;
//                     ans = max(ans, abs(a - b));
//                 }
//             }
//         }
//         return ans * ans;
//     }
// };

// class Solution
// {
// public:
//     long long largestSquareArea(vector<vector<int>> &bottomLeft,
//                                 vector<vector<int>> &topRight)
//     {
//         long long ans = 0;
//         int n = bottomLeft.size();

//         for (int i = 0; i < n; ++i)
//         {
//             int fx1 = bottomLeft[i][0];
//             int fy1 = bottomLeft[i][1];
//             int fx2 = topRight[i][0];
//             int fy2 = topRight[i][1];

//             for (int j = i + 1; j < n; ++j)
//             {

//                 int sx1 = bottomLeft[j][0];
//                 int sy1 = bottomLeft[j][1];
//                 int sx2 = topRight[j][0];
//                 int sy2 = topRight[j][1];
//                 int a = min(fx2, sx2) - max(fx1, sx1);
//                 int b = min(fy2, sy2) - max(fy1, sy1);
//                 if (a <= 0 || b <= 0)
//                     continue;

//                 long long temp = min(a, b);
//                 ans = max(ans, temp * temp);
//             }
//         }

//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int n, m;

//     bool pos(vector<vector<int>> temp, int threshold, int mid)
//     {

//         for (int i = 0; i <= n - mid; ++i)
//         {
//             for (int j = mid; j < m; ++j)
//             {
//                 int t = 0;
//                 for (int k = 0; k < mid; ++k)
//                 {
//                     t += temp[i + k][j];
//                     int tt = j - mid + 1;
//                     if (tt >= 0)
//                     {
//                         t -= temp[i + k][tt];
//                     }
//                 }
//                 if (t <= threshold)
//                     return true;
//             }
//         }
//         return false;
//     }

//     int maxSideLength(vector<vector<int>> &mat, int threshold)
//     {
//         n = mat.size();
//         m = mat[0].size();
//         vector<vector<int>> temp(n, vector<int>(m, 0));
//         for (int i = 0; i < n; ++i)
//         {
//             int t = 0;
//             for (int j = 0; j < m; ++j)
//             {
//                 t += mat[i][j];
//                 temp[i][j] = t;
//             }
//         }

//         int l = 0;
//         int r = min(n, m);
//         int ans = 0;
//         while (l < r)
//         {
//             int mid = l + (r - l) / 2;
//             if (pos(temp, threshold, mid))
//             {
//                 ans = mid;
//                 r = mid - 1;
//             }
//             else
//                 l = mid + 1;
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     vector<int> minBitwiseArray(vector<int> &nums)
//     {
//         int n = nums.size();
//         vector<int> ans(n, -1);

//         for (int i = 0; i < n; ++i)
//         {
//             int a = nums[i];
//             for (int i = 1; i < a; ++i)
//             {
//                 if (i | (i + 1) == a)
//                 {
//                     ans[i] = i;
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int anss(int a)
//     {
//         int count = 0;
//         int temp = a;
//         while (temp > 0)
//         {
//             if (temp % 2 == 0)
//                 return a - pow(2, count);
//             count++;
//             temp /= 2;
//         }
//         return a - pow(2, count - 1);
//     }
//     vector<int> minBitwiseArray(vector<int> &nums)
//     {
//         int n = nums.size();
//         vector<int> ans(n, -1);
//         for (int i = 0; i < n; ++i)
//         {
//             if (nums[i] & 1)
//                 ans[i] = anss(nums[i]);
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     bool check(vector<int> &nums)
//     {
//         int n = nums.size();
//         for (int i = 1; i < n; ++i)
//         {
//             if (nums[i] < nums[i - 1])
//                 return false;
//         }
//         return true;
//     }
//     int minimumPairRemoval(vector<int> &nums)
//     {

//         int count = 0;
//         int n = nums.size();
//         for (int i = 0; i < n; ++i)
//         {
//             if (!check(nums))
//             {
//                 int sum = INT_MAX;
//                 int idx = 0;
//                 int temp = nums[0];
//                 for (int i = 1; i < n; ++i)
//                 {
//                     temp += nums[i];
//                     if (temp < sum)
//                     {
//                         sum = temp;
//                         idx = i - 1;
//                     }
//                 }

//                 nums.erase(nums.begin() + idx);
//                 nums.erase(nums.begin() + idx);
//                 nums.insert(nums.begin() + idx, sum);
//             }
//             else
//                 return count;
//         }
//         return -1;
//     }
// };

// class Solution
// {
// public:
//     int minimumDifference(vector<int> &nums, int k)
//     {
//         sort(nums.begin(), nums.end());
//         int n = nums.size();
//         int ans = INT_MAX;
//         int mini = INT_MAX, maxi = INT_MIN;
//         for (int i = 0; i < n - k; ++i)
//         {
//             for (int j = i; j < i + k; ++j)
//             {
//                 mini = min(mini, nums[j]);
//                 maxi = max(maxi, nums[j]);
//             }
//             ans = min(ans, maxi - mini);
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int minCost(int n, vector<vector<int>> &edges)
//     {
//         vector<int> dist(n, INT_MAX);

//         int sz = edges.size();
//         priority_queue<pair<int, int>, vector<pair<int, int>>,
//                        greater<pair<int, int>>>
//             pq;
//         vector<vector<pair<int, int>>> adj(n);
//         for (int i = 0; i < sz; ++i)
//         {
//             int one = edges[i][0];
//             int second = edges[i][1];
//             int wt = edges[i][2];
//             adj[one].push_back({wt, second});
//             adj[second].push_back({2 * wt, one});
//         }
//         pq.push({0, 0});
//         while (!pq.empty())
//         {
//             auto [weight, cur] = pq.top();
//             pq.pop();
//             if (cur == n - 1)
//                 return weight;
//             int siz = adj[cur].size();
//             for (int i = 0; i < siz; ++i)
//             {
//                 auto [weight1, next] = adj[cur][i];
//                 if (weight1 + weight > dist[next])
//                     continue;
//                 dist[next] = weight1 + weight;
//                 pq.push({dist[next], next});
//             }
//         }
//         return -1;
//     }
// };

// class Solution
// {
// public:
//     int minimumCost(vector<int> &nums)
//     {
//         int first = nums[0];
//         int mn1 = INT_MAX, mn2 = INT_MAX;

//         for (int i = 1; i < nums.size(); i++)
//         {
//             if (nums[i] < mn1)
//             {
//                 mn2 = mn1;
//                 mn1 = nums[i];
//             }
//             else if (nums[i] < mn2)
//             {
//                 mn2 = nums[i];
//             }
//         }

//         return first + mn1 + mn2;
//     }
// };

// class Solution
// {
// public:
//     long long minimumCost(vector<int> &nums, int k, int dist)
//     {
//         long long ans = LLONG_MAX;
//         int n = nums.size();
//         int l = 1, r = 2 + dist;
//         long long sum = nums[0];

//         multiset<int> asc;
//         multiset<int, greater<int>> desc;
//         for (int i = 1; i < min(2 + dist, n); ++i)
//         {
//             int rr = nums[i];
//             asc.insert(rr);
//             while (!desc.empty() && !asc.empty() && *desc.begin() > *asc.begin())
//             {
//                 auto it1 = desc.begin();
//                 auto it2 = asc.begin();
//                 int swap1 = *it1;
//                 int swap2 = *it2;
//                 desc.erase(it1);
//                 asc.erase(it2);
//                 sum -= swap1;
//                 sum += swap2;

//                 asc.insert(swap1);
//                 desc.insert(swap2);
//             }
//             if (desc.size() < k - 1)
//             {
//                 desc.insert(*asc.begin());
//                 sum += *asc.begin();
//                 asc.erase(asc.begin());
//             }
//         }
//         ans = min(ans, sum);
//         while (l < n && r < n)
//         {

//             int ll = nums[l];
//             int rr = nums[r];
//             auto it3 = desc.find(ll);
//             if (it3 != desc.end())
//             {
//                 desc.erase(it3);
//                 sum -= ll;
//             }
//             else
//             {
//                 auto it = asc.find(ll);
//                 if (it != asc.end())
//                 {
//                     asc.erase(it);
//                 }
//             }

//             asc.insert(rr);
//             while (!desc.empty() && !asc.empty() && *desc.begin() > *asc.begin())
//             {
//                 auto it1 = desc.begin();
//                 auto it2 = asc.begin();
//                 int swap1 = *it1;
//                 int swap2 = *it2;
//                 desc.erase(it1);
//                 asc.erase(it2);
//                 sum -= swap1;
//                 sum += (long long)swap2;

//                 asc.insert(swap1);
//                 desc.insert(swap2);
//             }
//             while (desc.size() < k - 1 && !asc.empty())
//             {
//                 desc.insert(*asc.begin());
//                 sum += (long long)*asc.begin();
//                 asc.erase(asc.begin());
//             }

//             ans = min(ans, sum);
//             l++;
//             r++;
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     bool isTrionic(vector<int> &nums)
//     {
//         bool fi = false, fd = false, si = false;

//         int n = nums.size();
//         for (int i = 1; i < n; ++i)
//         {
//             int prev = nums[i - 1];
//             int cur = nums[i];
//             if (cur <= prev)
//             {
//                 if (!fi || si)
//                     return false;
//                 else
//                     fd = true;
//             }
//             else
//             {
//                 if (fd)
//                     si = true;
//                 else
//                     fi = true;
//             }
//         }

//         if (si)
//             return true;

//         return false;
//     }
// };
// class Solution
// {
// public:
//     long long maxSumTrionic(vector<int> &nums)
//     {
//         int n = nums.size();
//         vector<long long> dp0(n, 0);
//         vector<long long> dp1(n, 0);
//         vector<long long> dp2(n, 0);
//         vector<long long> dp3(n, 0);
//         long long ans = 0;
//         for (int i = 1; i < n; ++i)
//         {
//             int prev = nums[i - 1];
//             int cur = nums[i];

//             if (cur > prev)
//             {
//                 dp1[i] = max(dp1[i - 1] + nums[i], dp0[i - 1] + nums[i]);
//                 dp3[i] = max(dp3[i - 1] + nums[i], dp2[i - 1] + nums[i]);
//             }
//             else
//             {
//                 if (cur < prev)
//                 {
//                     dp2[i] = max(dp2[i - 1] + nums[i], dp1[i - 1] + nums[i]);
//                 }
//             }
//             dp0[i] = dp0[i - 1] + nums[i];

//             ans = max(ans, dp3[i]);
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     int minimumDeletions(string s)
//     {
//         stack<char> st;
//         int n = s.size();
//         int ans = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             if (s[i] == 'b')
//                 st.push('b');
//             else
//             {
//                 if (!st.empty())
//                 {
//                     ans++;
//                     st.pop();
//                 }
//             }
//         }
//         return ans;
//     }
// };

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// bool pos;
// int dfs(TreeNode *root)
// {

//     if (root == NULL)
//         return 1;

//     int a = dfs(root->left);
//     int b = dfs(root->right);

//     if (abs(a - b) > 1)
//         pos = false;

//     return 1 + max(a, b);
// }

// class Solution
// {
// public:
//     bool isBalanced(TreeNode *root)
//     {
//         pos = true;
//         dfs(root);
//         return pos;
//     }
// };

// class Solution
// {
// public:
//     int n;
//     int ans(vector<vector<int>> &dp, vector<int> &nums, int idx, int last)
//     {

//         if (idx >= n)
//             return 0;

//         int take = 0, dtake = 0;
//         if (dp[idx][last] != -1)
//             return dp[idx][last];
//         if (idx == 0)
//         {
//             take = nums[0] + ans(dp, nums, idx + 2, 0);
//         }
//         else
//         {
//             if (idx == n - 1)
//             {
//                 if (last)
//                     take = nums[n - 1] + ans(dp, nums, idx + 2, 0);
//             }

//             else
//                 take = nums[idx] + ans(dp, nums, idx + 2, last);
//         }

//         dtake = ans(dp, nums, idx + 1, last);

//         return dp[idx][last] = max(take, dtake);
//     }
//     int rob(vector<int> &nums)
//     {
//         n = nums.size();
//         vector<vector<int>> dp(n, vector<int>(2, -1));
//         return ans(dp, nums, 0, 1);
//     }
// };

// int n;
// long long int ans(vector<vector<long long int>> &dp, vector<int> &nums, int idx, int last)
// {
//     if (idx >= n)
//         return 0;
//     if (dp[idx][last] != -1)
//         return dp[idx][last];
//     long long int take = 0, dtake = 0;

//     if (idx == 0)
//     {
//         take = nums[idx] + ans(dp, nums, idx + 2, 0);
//     }
//     else
//     {
//         if (idx == n - 1)
//         {
//             if (last)
//                 take = nums[n - 1];
//         }
//         else
//         {
//             take = nums[idx] + ans(dp, nums, idx + 2, last);
//         }
//     }
//     dtake = ans(dp, nums, idx + 1, last);
//     return dp[idx][last] = max(take, dtake);
// }
// long long int houseRobber(vector<int> &valueInHouse)
// {
//     n = valueInHouse.size();

//     vector<vector<long long int>> dp(n, vector<long long int>(2, -1));
//     return ans(dp, valueInHouse, 0, 1);
// }

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
// class Solution
// {
// public:
//     TreeNode *nn(int val)
//     {

//         TreeNode *temp = new TreeNode(val);

//         return temp;
//     }
//     int n;
//     TreeNode *build(vector<int> &vec, int left, int right)
//     {
//         if (left > right)
//             return;
//         int mid = left + (right - left) / 2;
//         TreeNode* node;
//         node = nn(vec[mid]);

//         node->left = build(vec, left, mid - 1);
//         node->right = build(vec, mid + 1, right);
//         return node;
//     }

//     void inorder(vector<int> &vec, TreeNode *root)
//     {
//         if (root == NULL)
//             return;
//         inorder(vec, root->left);
//         vec.push_back(root->val);
//         inorder(vec, root->right);
//     }

//     TreeNode *balanceBST(TreeNode *root)
//     {

//         vector<int> vec;

//         inorder(vec, root);
//         n = vec.size();
//         return build(vec, 0, n - 1);
//     }
// };

class Solution
{
public:
    int longestBalanced(vector<int> &nums)
    {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            unordered_map<int, int> od, ev;
            for (int j = i; j < n; ++j)
            {
                if (nums[i] & 1)
                    od[nums[i]]++;
                else
                    ev[nums[i]]++;
                if (od.size() == ev.size())
                    ans = max(ans, j - i + 1);
            }
        }
        return ans;
    }
};

class Solution
{
public:
    int n;
    const static int MAX = 1e5; // Max size of array
    int tree[4 * MAX];          // Segment tree
    int lazy[4 * MAX];          // Lazy array to propagate updates

    // Function to build the tree
    // void build(int node, int start, int end) {
    //     if (start == end) {
    //         // Leaf node will have a single element
    //         tree[node] = 0;
    //     } else {
    //         int mid = (start + end) / 2;
    //         // Recur for the 2 children
    //         build(2 * node, start, mid);
    //         build(2 * node + 1, mid + 1, end);
    //         // Internal node will have the minimum of both of its children
    //         tree[node] = min(tree[2 * node], tree[2 * node + 1]);
    //     }
    // }

    // Function to update a node
    void update(int node, int start, int end, int l, int r, int val)
    {
        if (lazy[node] != 0)
        {
            // This node needs to be updated
            tree[node] += lazy[node]; // Update it
            if (start != end)
            {
                lazy[node * 2] += lazy[node];     // Mark child as lazy
                lazy[node * 2 + 1] += lazy[node]; // Mark child as lazy
            }
            lazy[node] = 0; // Reset it
        }
        if (start > end or start > r or end < l)
            return; // Current segment is not within range [l, r]
        if (start >= l and end <= r)
        {
            // Segment is fully within range
            tree[node] += val;
            if (start != end)
            {
                // Not leaf node
                lazy[node * 2] += val;
                lazy[node * 2 + 1] += val;
            }
            return;
        }
        int mid = (start + end) / 2;
        update(node * 2, start, mid, l, r, val);       // Updating left child
        update(node * 2 + 1, mid + 1, end, l, r, val); // Updating right child
        tree[node] = min(tree[node * 2],
                         tree[node * 2 + 1]); // Updating root with min value
    }

    // Function to query the tree
    int query(int node, int start, int end, int l, int r)
    {
        if (start > end or start > r or end < l)
            return MAX; // Out of range
        if (lazy[node] != 0)
        {
            // This node needs to be updated
            tree[node] += lazy[node]; // Update it
            if (start != end)
            {
                lazy[node * 2] += lazy[node];     // Mark child as lazy
                lazy[node * 2 + 1] += lazy[node]; // Mark child as lazy
            }
            lazy[node] = 0; // Reset it
        }
        if (start >= l and end <= r)
        {
            if (tree[node] == 0)
                return r;
            return -1;
        } // Current segment is totally within range [l, r]

        int mid = (start + end) / 2;
        int p1 = query(node * 2, start, mid, l, r);       // Query left child
        int p2 = query(node * 2 + 1, mid + 1, end, l, r); // Query right child
        return max(p1, p2);
    }

    int longestBalanced(vector<int> &nums)
    {
        n = nums.size();
        vector<priority_queue<int, vector<int>, greater<int>>> pos(1e5 +
                                                                   1);
        for (int i = 0; i < n; ++i)
        {
            int cur = nums[i];
            pos[cur].push(i);
        }

        for (int i = 0; i < n; ++i)
        {
            int sign = 1;
            if (nums[i] & 1)
                sign *= (-1);
            int p = pos[nums[i]].top();
            update(0, 0, n - 1, p, n - 1, sign);
        }
        int ans = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            ans = max(ans, query(0, 0, n - 1, i, n - 1));
            int posi = n;
            pos[nums[i]].pop();
            if (!pos[nums[i]].empty())
            {
                posi = pos[nums[i]].top();
            }
            int sign = 1;
            if (nums[i] & 1)
                sign = -sign;
            update(0, 0, n - 1, posi - 1, n - 1, -sign);
        }
        return ans;
    }
};

class Solution
{
public:
    int longestBalanced(string s)
    {
        int n = s.size();
        int ans = 1;
        for (int i = 0; i < n; ++i)
        {
            set<pair<int, char>> st;
            vector<int> vec(26, false);
            for (int j = i; j < n; ++j)
            {
                int ch = s[j] - 'a';
                int freq = vec[ch];
                if (freq > 0)
                {
                    auto it = st.find({freq, s[j]});
                    st.erase(it);
                }
                vec[ch]++;
                st.insert({freq + 1, s[j]});
                auto [af, a] = *st.begin();
                auto [lf, b] = *prev(st.end());
                if (lf == af)
                    ans = max(ans, (int)st.size() * lf);
            }
        }
        return ans;
    }
};
