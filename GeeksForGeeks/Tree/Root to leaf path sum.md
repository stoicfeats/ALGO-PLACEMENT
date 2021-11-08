### Question Link : https://practice.geeksforgeeks.org/problems/root-to-leaf-path-sum/1#


### Solution Video : https://youtu.be/EGS9n6Vtp5c

SOLUTION : (ACCEPTED)

```
class Solution
{
    public:
    bool hasPathSum(Node *root, int S) {
    if(!root) return S==0;
    
    return hasPathSum(root->left,S-(root->data)) |8| hasPathSum(root->right,S-(root->data));
    
}
};
```