#include <iostream>
#include <string.h>
#include <vector>
 
#include <bits/stdc++.h>

using namespace std;

class Node{
public:
  int data;
  Node* left = nullptr;
  Node* right = nullptr;
  Node(int data)
  {
    this->data = data;
  }
};

class Pair{
public:
  Node* node = nullptr;
  int state = 0;

  Pair(Node* node, int state)
  {
    this->node = node;
    this->state = state;
  }
};

int idx = 0;
Node* constructTree(vector<int>& arr){

  if (idx == arr.size() || arr[idx] == -1){
    idx++;
    return nullptr;
  }
  Node* node = new Node(arr[idx++]);
  node->left = constructTree(arr);
  node->right = constructTree(arr);
  return node;
}

void display(Node* node){
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

bool find(Node* node, vector<int> &arr,int data) {
  if (!node) return false;

  if (node->data == data){
    arr.push_back(node->data);
    return true;
  } 

  bool res = find(node->left,arr,data) || find(node->right,arr,data);
  if(res){
    arr.push_back(node->data);
    return true;  
  } 

  return false;
}


vector<int> nodeToRootPath(Node* node, int data){
  vector<int> arr;
  if(node == NULL) return arr;

  bool res = find(node,arr,data);
  return arr;
}

int main(){
  int n;
  cin >> n;
  vector<int> arr(n, 0);
  for (int i = 0; i < n; i++){
    string temp;
    cin >> temp;
    if (temp == "n"){
      arr[i] = -1;
    }else{
      arr[i] = stoi(temp);
    }
  }

  Node* root = constructTree(arr);
  int data;
  cin >> data;
  vector<int> test;
  bool found = find(root,test,data);
  found == 1 ? cout << "true" << endl : cout << "false" << endl;
  vector<int> path = nodeToRootPath(root, data);
//   reverse(path.begin(), path.end());
  cout << "[";
  for (int i = 0; i < path.size(); i++) {
    cout << path[i];
    if (i != path.size() - 1) {
      cout << ", ";
    }
  }
  cout << "]" << endl;
}