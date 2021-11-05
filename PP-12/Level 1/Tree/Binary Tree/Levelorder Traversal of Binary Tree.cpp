#include<iostream>
#include<string.h>
#include<vector>
#include<queue>

using namespace std;
class Node {
public:
  int data;
  Node* left = nullptr;
  Node* right = nullptr;
  Node(int data) {
    this->data = data;
  }
};

class Pair {
public:
  Node* node = nullptr;
  int state = 0;
  Pair(Node* node, int state) {
    this->node = node;
    this->state = state;
  }
};

int idx = 0;
Node* constructTree(vector<int>& arr) {
  if (idx == arr.size() || arr[idx] == -1) {
    idx++;
    return nullptr;
  }
  Node* node = new Node(arr[idx++]);
  node->left = constructTree(arr);
  node->right = constructTree(arr);
  return node;
}

void display(Node* node) {
  if (node == nullptr)
    return;
  string str = "";
  str += node->left != nullptr ? to_string(node->left->data) : ".";
  str += " <- " + to_string(node->data) + " -> ";
  str += node->right != nullptr ? to_string(node->right->data) : ".";
  cout << str << endl;
  display(node->left);
  display(node->right);
}


void levelOrder(Node* node) {
 queue<Node*> q;
 q.push(node); // push root node in queue
 while(!q.empty()){
     int size = q.size(); // to traverse in a level
     for(int i=0;i<size;i++){
        node = q.front(); // take out a node and add it's left and right (if exist) to our Node* type of queue;
        q.pop();
        if(node->left!=NULL) q.push(node->left); // push left node of current node in queue;
        if(node->right!=NULL) q.push(node->right); // push right
        cout<<node->data<<" "; // print current node value;
     }
     cout<<endl; // it comes out after one level is done which is size==0;
 }
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n, 0);
  for (int i = 0; i < n; i++) {
    string temp;
    cin >> temp;
    if (temp == "n") {
      arr[i] = -1;
    } else {
      arr[i] = stoi(temp);
    }
  }
  Node* root = constructTree(arr);
  levelOrder(root);
}