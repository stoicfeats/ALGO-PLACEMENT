class Solution {
public:
    bool solve(TreeNode* root, int sum, int targetSum){
        if(!root) return false;
        if(!root->left && !root->right && sum+root->val==targetSum) return true;
        return solve(root->left,sum+root->val,targetSum) || solve(root->right,sum+root->val,targetSum);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        return solve(root,0,targetSum);
    }
};