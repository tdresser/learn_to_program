#include <iostream>

using namespace std;

int main() {
  int x = 3;
  {
    cout << "x is " << x << "\n";
    int x = 4;
    cout << "x is " << x << "\n";
  }
  cout << "x is " << x << "\n";

  for (int i = 0; i < 1; ++i) {
    cout << "i is " << i << "\n";
  }
}
