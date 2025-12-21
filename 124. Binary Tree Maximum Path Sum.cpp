#include <bits/stdc++.h>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
            int ans=0;
        int dfs(map<TreeNode*, int>& hash,  TreeNode* n){

                        if(n==NULL) return 0;

                        if(hash.find(n)!=hash.end()) return hash[n];
                            int a=0,b=0;
                            a=max(a,dfs(hash,n->left));
                            b=max(a,dfs(hash,n->right));
                            int value=n->val;
                            ans=max(ans,value+a+b);
                            return hash[n]=max(value,value+max(a,b));

        }       

    int maxPathSum(TreeNode* root) {
         map<TreeNode*,int> hash;
         ans=max(ans,dfs(hash,root));
         return ans;
    }
};