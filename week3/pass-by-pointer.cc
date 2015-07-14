#include <iostream>

using namespace std;

void setToFortyTwo(int* y) {
  *y = 42; // *y is a "pointer dereference"
}

int main() {
  int x = 5;
  int* px; // type* is the type "pointer to type".
  px = &x; // &x is "address of" or "reference of x".
  std::cout << "x is " << x << "\n";
  setToFortyTwo(px);
  std::cout << "x is " << x << "\n";
}
