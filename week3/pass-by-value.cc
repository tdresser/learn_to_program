#include <iostream>

using namespace std;

void setToFortyTwo(int y) {
  y = 2;
}

int main() {
  int x = 5;
  std::cout << "x is " << x << "\n";
  setToFortyTwo(x);
  std::cout << "x is " << x << "\n";
}
