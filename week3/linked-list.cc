#include <string>
#include <iostream>

using namespace std;

void shouldBeTrue(bool v, string message) {
  if (!v) {
    cout << "FAILED " << message << "\n";
  }
}

struct ListNode {
  ListNode* next;
  int value;
};

void initNode(ListNode* current, int value, ListNode* next) {
  (*current).value = value;
  (*current).next = next;
}

void drawList(ListNode* x) {
  while (x != NULL) {
    cout << (*x).value << "\n";
    x = (*x).next;
  }
}

void drawList2(ListNode* x) {
  if (x == nullptr) {
    return;
  }
  cout << (*x).value << "\n";
  drawList2((*x).next);
}

int main() {
  ListNode a;
  ListNode b;
  ListNode c;
  ListNode d;

  initNode(&a, 1, &b);
  initNode(&b, 4, &c);
  initNode(&c, 7, &d);
  initNode(&d, 10, nullptr);

  drawList(&a);
  drawList2(&a);
}
