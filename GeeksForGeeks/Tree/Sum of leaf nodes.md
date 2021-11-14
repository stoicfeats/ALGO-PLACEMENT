### Question Link : https://practice.geeksforgeeks.org/problems/sum-of-leaf-nodes/1#


### Solution Video : 


SOLUTION : (ACCEPTED)

```
void sum(Node* root, int &total){
    if(!root){
        return;
    }
    
    if(root->right==NULL && root->left==NULL){
        total+=root->data;
    }
    sum(root->left,total);
    sum(root->right,total);
    
}

int sumLeaf(Node* root)
{
    int total = 0;
    sum(root,total);
    return total;
}
```