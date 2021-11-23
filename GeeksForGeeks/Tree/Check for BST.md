### Question Link : https://practice.geeksforgeeks.org/problems/check-for-bst/1#


### Video Solution : https://www.youtube.com/watch?v=Zh38jz-y7P0


SOLUTION : (ACCEPTED)

```
class Solution
{
    public:
    void solve(Node* root, Node* &prev, int &f)
    {
        if(!root) return;
        
        solve(root->left,prev,f);
        if(prev != NULL and root->data <= prev->data){
            f = 0;
            return;
        }
        prev = root;
        solve(root->right,prev,f);
    }
    
    bool isBST(Node* root) 
    {
        int f = 1;
        Node* prev = NULL;
        solve(root,prev,f);
        return f;
    }
};
```