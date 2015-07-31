#include <string>
#include <iostream>

using namespace std;

struct ListNode {
  ListNode* next;
  int value;
};

ListNode* createNode(int value, ListNode* next) {
  ListNode* node = new ListNode();
  (*node).value = value;
  (*node).next = next;
  return node;
}

void drawList(ListNode* x) {
  while (x != nullptr) {
    cout << (*x).value << "\n";
    x = (*x).next;
  }
}

int main() {
  ListNode* list =
    createNode(1,
      createNode(4,
        createNode(7,
          createNode(10, nullptr))));

  drawList(list);
}
