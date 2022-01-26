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
    
    int solve(TreeNode* node,int cmax, int omax){
        if(!node) return 0;
        
        if(node->left!=NULL && node->val+1 == node->left->val){
            cmax++;
        }
        omax = solve(node->left,cmax,omax);
        if(cmax>omax){
            omax = cmax;
        }
        if(node->right!=NULL && node->val+1 == node->right->val){
            cmax++;
        }
        omax = solve(node->right,cmax,omax);
        if(cmax>omax){
            omax = cmax;
        }
        return omax;
    }
    
    
    int longestConsecutive(TreeNode* root) {
        if(!root) return 0;
        return solve(root,0,0)+1;
    }
};
