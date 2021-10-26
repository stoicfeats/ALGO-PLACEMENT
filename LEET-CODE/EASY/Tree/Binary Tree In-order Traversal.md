### Question Link : https://leetcode.com/problems/binary-tree-inorder-traversal/

### Solution Video : https://www.youtube.com/watch?v=Z_NEgBgbRVI&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=7

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
        ans.push_back(root->val);
        fill(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        fill(root);
        return ans;
    }
};
```

>Runtime: 4 ms, faster than 43.43% of C++ online submissions for Binary Tree Inorder Traversal. <br>
>Memory Usage: 8.4 MB, less than 25.21% of C++ online submissions for Binary Tree Inorder Traversal.
