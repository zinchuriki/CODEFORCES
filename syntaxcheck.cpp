#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;




  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
 
           void traverse(vector<int>& vec, TreeNode* root){
               
                            if(root==NULL) return;
                            
                            traverse(vec,root->left);
                            traverse(vec,root->right);
                            vec.push_back(root->val);
                            
               
           }
 
vector<int> Solution::postorderTraversal(TreeNode* A) {
    
                vector<int> ans;
                traverse(vec,A);
                return vec;
            
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {

        int n;
        cin >> n;
        int mod = 998244353;

        int miss = 0, swaps = 0;

        vector<int> vec(n + 1);
        unordered_map<int, int> hash;
        int count = 0;
        for (int i = 1; i <= n; ++i)
        {
            cin >> vec[i];
            if (vec[i] != i)
            {
                hash[abs(vec[i] - i)]++;
                count++;
            }
        }

        for (auto it = hash.begin(); it != hash.end(); ++it)
        {
            miss += (int)ceil((double)it->second / 2.0);
            swaps += it->second / 2;
        }

        int ans = 0;

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {

                ans = (ans + min(count * i, min(miss * j, (count - 2 * swaps) * i + swaps * j))) % mod;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}