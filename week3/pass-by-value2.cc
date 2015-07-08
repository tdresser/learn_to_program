#include <iostream>

using namespace std;

struct Container {
  int x;
};

void setToFortyTwo(Container container) {
  container.x = 2;
}

int main() {
  Container container;
  container.x = 5;
  std::cout << "x is " << container.x << "\n";
  setToFortyTwo(container);
  std::cout << "x is " << container.x << "\n";
}
