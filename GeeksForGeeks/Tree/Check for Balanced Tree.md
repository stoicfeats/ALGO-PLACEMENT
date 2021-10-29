### Question Link : https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1#


### Video Solution : https://www.youtube.com/watch?v=Yt50Jfbd8Po&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=16


SOLUTION : (ACCEPTED)

```
/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    
    int height(Node* root){
        if(!root) return 0;
        
        int lefth = height(root->left);
        if(lefth==-1) return -1;
        int righth = height(root->right);
        if(righth==-1) return -1;
        
        if(abs(righth-lefth)>1) return -1;
        return 1+max(lefth,righth);
    }
    
    bool isBalanced(Node *root)
    {
        return height(root) != -1;
    }
};
```