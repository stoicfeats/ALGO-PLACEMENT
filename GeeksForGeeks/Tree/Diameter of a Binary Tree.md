### Question Link : https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1


### Video Solution : https://www.youtube.com/watch?v=Rezetez59Nk&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=17


SOLUTION : (ACCEPTED)

```

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        int max_len = 0;
        height(root,max_len);
        return max_len+1;
    }
    private:
    int height(Node* root,int& max_len){
        if(!root) return 0;
        
        int lefth = height(root->left,max_len);
        int rigth = height(root->right,max_len);
        
        max_len = max(max_len,lefth+rigth);
        return 1 + max(lefth,rigth);
    }
};
```
