### Question Link : https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1


### Video Solution : https://www.youtube.com/watch?v=eD3tmO66aBA&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=15


SOLUTION : (ACCEPTED)

```
/*
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
    //Function to find the height of a binary tree.
    int height(struct Node* node){
         if(node==NULL) return 0;
         
         int lh = height(node->left);
         int rh = height(node->right);
         
         return 1+max(lh,rh);
    }
};
```