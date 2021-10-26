### Question Link : <https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/>

### Solution Video : <https://www.youtube.com/watch?v=RlUu72JrOCQ&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=6>

SOLUTION : (ACCEPTED)

```
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    
    void fill(TreeNode* root){
        if(!root) return;
        
        ans.push_back(root->val);
        fill(root->left);
        fill(root->right);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        fill(root);
        return ans;
    }
};
```
