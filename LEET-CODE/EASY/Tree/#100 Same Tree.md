### Question Link : https://leetcode.com/problems/same-tree/

### Video Solution : https://youtu.be/3BOHefM2708


### Solution :

```
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) {
            return true;
        }else if(!p || !q) {
            return false;
        }else if(p->val != q->val){
            return false;
        }else {
            return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        }
    }
};
```