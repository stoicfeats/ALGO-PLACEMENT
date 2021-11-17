### Question Link : https://practice.geeksforgeeks.org/problems/minimum-depth-of-a-binary-tree/1#

### Video Solution : 

SOLUTION : (Accepted)

```
class Solution{
  public:
    /*You are required to complete this method*/
    int minDepth(Node *root) {
        // if(!root) return 0;
        // if (root->left == NULL && root->right == NULL) return 1;
        // int left = minDepth(root->left);
        // int right = minDepth(root->right);
        // return min(left,right)+1;
            // Corner case. Should never be hit unless the code is 
    // called on root = NULL
    if(root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
    return 1;
  
    int l = INT_MAX, r = INT_MAX;
  
    if (root->left)
    l = minDepth(root->left);

    if (root->right)
    r =  minDepth(root->right);

    return min(l , r) + 1;
    }
};
```