### Question Link : https://practice.geeksforgeeks.org/problems/level-order-traversal/1#


### Solution Video : https://www.youtube.com/watch?v=EoAsWbO7sqg&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=9


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
};
 */


class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
     vector<int> levels;
     if(!node) return levels ;
     queue<Node*> q;
     q.push(node);
     
     while(!q.empty()){
         int size = q.size();
        //  vector<int> levels;
         for(int i=0;i<size;i++){
             Node* node = q.front();
             q.pop();
             if(node->left !=NULL) q.push(node->left);
             if(node->right !=NULL) q.push(node->right);
             levels.push_back(node->data);
         }
        //  kit_kat.push_back(levels);
     }
     return levels;
    }
};
```