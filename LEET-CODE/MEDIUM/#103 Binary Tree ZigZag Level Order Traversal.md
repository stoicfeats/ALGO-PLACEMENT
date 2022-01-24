### Question Link : https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/


### Solution Video : 


SOLUTION : (ACCEPTED)

```
/**
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> kit_kat;
        if(!root) return kit_kat;
        queue<TreeNode*> q;
        q.push(root);
        int height=0;
        while(!q.empty()){
            vector<int> levels;
            int size=q.size();
            for(int i=0;i<size;i++){
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left!=NULL)  q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
            levels.push_back(temp->val);
        }
                if(height==0){
                // reverse(levels.begin(),levels.end());
                kit_kat.push_back(levels);
                height++;
                }else if(height%2==0){
                kit_kat.push_back(levels);
                height++;
                }else{
                reverse(levels.begin(),levels.end());
                kit_kat.push_back(levels);
                height++;
            }
    }
        return kit_kat;
    }
};
```

> Runtime: 4 ms, faster than 75.79% of C++ online submissions for Binary Tree Level Order Traversal.<br>
> Memory Usage: 12.6 MB, less than 61.82% of C++ online submissions for Binary Tree Level Order Traversal.