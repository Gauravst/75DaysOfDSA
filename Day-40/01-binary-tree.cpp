#include <iostream>
#include <queue>
using namespace std;
int data;

class node {
 public:
  int data;
  node* left;
  node* right;

  node(int data) {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

node* buildTree(node* root) {
  cout << "Enter the data :- " << endl;
  int data;
  cin >> data;
  root = new node(data);

  if (data == -1) {
    return NULL;
  }

  cout << "Enter data for left of " << data << endl;
  root->left = buildTree(root->left);

  cout << "Enter data for right of " << data << endl;
  root->right = buildTree(root->right);

  return root;
}

void levelOrderTraversal(node* root) {
  queue<node*> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty()) {
    node* temp = q.front();
    q.pop();

    if (temp == NULL) {
      cout << endl;
      if (!q.empty()) {
        q.push(NULL);
      }
    } else {
      cout << temp->data << " ";
      if (temp->left) {
        q.push(temp->left);
      }

      if (temp->right) {
        q.push(temp->right);
      }
    }
  }
}

void inOrder(node* root) {
  if (root == NULL) {
    return;
  }

  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
}

void preOrder(node* root) {
  if (root == NULL) {
    return;
  }

  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

void postOrder(node* root) {
  if (root == NULL) {
    return;
  }

  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}

// void buildFromLevelOrder(node*& root) { queue<node*> }

int main() {
  node* root = NULL;

  root = buildTree(root);
  levelOrderTraversal(root);

  inOrder(root);
  cout << endl;

  preOrder(root);
  cout << endl;

  postOrder(root);
  cout << endl;
  return 0;
}
