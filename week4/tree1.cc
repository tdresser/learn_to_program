#include <string>
#include <iostream>

using namespace std;

struct TreeNode {
  TreeNode* left;
  TreeNode* right;
  int value;
};

void initNode(TreeNode* node, int value, TreeNode* left, TreeNode* right) {
  (*node).value = value;
  (*node).left = left;
  (*node).right = right;
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

int main() {
  TreeNode a;
  TreeNode b;
  TreeNode c;
  TreeNode d;

  initNode(&a, 1, &b, &c);
  initNode(&b, 3, nullptr, nullptr);
  initNode(&c, 5, &d, nullptr);
  initNode(&d, 15, nullptr, nullptr);

  cout << sumTree(&a);
}
