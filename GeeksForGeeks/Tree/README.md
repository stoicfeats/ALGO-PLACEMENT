# Syntax and Notes of Trees

Types of binary tree : https://www.geeksforgeeks.org/binary-tree-set-3-types-of-binary-tree/

## Binary Tree Representation in C++ :

A tree whose elements have at most 2 children is called a binary tree. Since each element in a binary tree can have only 2 children, we typically name them the left and right child.

Code : https://www.geeksforgeeks.org/binary-tree-set-1-introduction/
```
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    
    Node (int val){
        data = val;
        left = right = Null;
    }
}

main(){
    struct Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->right=new Node(4);
}

## Binary Search Tree Syntax to be added soon
