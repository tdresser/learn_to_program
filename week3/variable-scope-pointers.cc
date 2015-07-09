#include <iostream>

using namespace std;

void assignToFive(int* p) {
  int x = 5;
  p = &x;
}

int main() {
  int* y;
  assignToFive(y);
  cout << "y is " << y << "\n";
  cout << "*y is " << *y << "\n";
}
