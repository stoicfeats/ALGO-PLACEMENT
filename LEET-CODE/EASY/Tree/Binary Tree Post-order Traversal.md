### Question Link : https://leetcode.com/problems/binary-tree-postorder-traversal/


### Solution Video : https://www.youtube.com/watch?v=COQOU6klsBg&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=8

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
        
        fill(root->left);
        fill(root->right);
        ans.push_back(root->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        fill(root);
        return ans;
    }
};
```

> Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Postorder Traversal.<br>
> Memory Usage: 8.6 MB, less than 15.84% of C++ online submissions for Binary Tree Postorder Traversal.
