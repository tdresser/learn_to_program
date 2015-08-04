#include <string>
#include <iostream>

using namespace std;

struct Test {
  int x;
};

int main() {
  Test a;
  Test b;
  Test c;

  cout << &a << "\n";
  cout << &b << "\n";
  cout << &c << "\n";

  Test* x = new Test();
  Test* y = new Test();
  Test* z = new Test();

  cout << x << "\n";
  cout << y << "\n";
  cout << z << "\n";
}
