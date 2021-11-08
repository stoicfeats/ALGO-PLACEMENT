### Question Link : https://practice.geeksforgeeks.org/problems/root-to-leaf-paths/1#

### Solution Video : https://youtu.be/EGS9n6Vtp5c

SOLUTION : (ACCEPTED)

```
void find(Node* root,vector<vector<int>> &kit_kat,vector<int> levels){
    if(!root)return ;
    levels.push_back(root->data);
    find(root->left,kit_kat,levels);
    find(root->right,kit_kat,levels);
    if(!root->right && !root->left){ // for leaf
        kit_kat.push_back(levels);
    }
    levels.pop_back();
    
}

vector<vector<int>> Paths(Node* root)
{
    vector<vector<int>> kit_kat;
    vector<int> levels;
    find(root,kit_kat,levels);
    return kit_kat;
    
}
```