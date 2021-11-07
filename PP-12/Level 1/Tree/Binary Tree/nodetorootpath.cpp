#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class Node {
public:
  int data;
  Node* left = nullptr;
  Node* right = nullptr;
  Node(int data)
  {
    this->data = data;
  }
};

class Pair {
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
bool find(Node* node, int data) {
  if (node == nullptr)
    return false;
  if (node->data == data)
    return true;
  return find(node->left, data) || find(node->right, data);
}

bool rootToNodePath(Node* node, int data, vector<Node*>& path)
{
  if (node == nullptr)
    return false;
  if (node->data == data)
  {
    path.push_back(node);
    return true;
  }

  bool res = rootToNodePath(node->left, data, path) || rootToNodePath(node->right, data, path);
  if (res)
    path.push_back(node);
  return res;
}

vector<int> nodeToRootPath(Node* node, int data)
{
  if (node == nullptr) {
    vector<int> arr;
    return arr;
  }

  if (node->data == data) {
    vector<int> list;
    list.push_back(node->data);
    return list;
  }

  vector<int> llist = nodeToRootPath(node->left, data);
  if (llist.size() > 0) {
    llist.push_back(node->data);
    return llist;
  }

  vector<int> rlist = nodeToRootPath(node->right, data);
  if (rlist.size() > 0) {
    rlist.push_back(node->data);
    return rlist;
  }
  vector<int> arr;
  return arr;
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
  int data;
  cin >> data;
  bool found = find(root, data);
  found == 1 ? cout << "true" << endl : cout << "false" << endl;
  vector<int> path = nodeToRootPath(root, data);
  cout << "[";
  for (int i = 0; i < path.size(); i++) {
    cout << path[i];
    if (i != path.size() - 1) {
      cout << ", ";
    }
  }
  cout << "]" << endl;
}