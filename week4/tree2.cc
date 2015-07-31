#include <string>
#include <iostream>

using namespace std;

struct TreeNode {
  TreeNode* left;
  TreeNode* right;
  int value;
};

TreeNode* createNode(int value, TreeNode* left, TreeNode* right) {
  TreeNode* node = new TreeNode();
  (*node).value = value;
  (*node).left = left;
  (*node).right = right;
  return node;
}

int sumTree(TreeNode* x) {
  int sum = x->value;
  if ((*x).left) {
    sum += sumTree((*x).left);
  }
  if ((*x).right) {
    sum += sumTree((*x).right);
  }
  return sum;
}

void deleteTree(TreeNode* tree) {
  if (tree == nullptr) {
    return;
  }
  deleteTree(tree->right);
  deleteTree(tree->left);
  delete tree;
}

int main() {
  TreeNode* tree =
    createNode(1,
      createNode(3, nullptr, nullptr),
      createNode(5,
        createNode(15, nullptr, nullptr),
        nullptr));

  cout << sumTree(tree);

  deleteTree(tree);
  //cout << sumTree(tree);
}
