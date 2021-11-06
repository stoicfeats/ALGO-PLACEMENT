### Question Link : https://practice.geeksforgeeks.org/problems/k-distance-from-root/1#

### Video Solution : https://www.youtube.com/watch?v=KvcfuGcdDMg&t=0s   

SOLUTION : (ACCEPTED)

```
void find(Node* root, int k,vector<int> &ans){
    if(!root || k<0){
      return;
    }
    
  if(k==0){
      ans.push_back(root->data);
  }
  
  find(root->left,k-1,ans);
  find(root->right,k-1,ans);
}

vector<int> Kdistance(struct Node *root, int k)
{
    vector<int> ans;
    find(root,k,ans);
    return ans;
}
```