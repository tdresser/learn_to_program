#include <iostream>

using namespace std;

struct Foo {
  int x;
};

int main() {
  Foo y;
  y.x = 11;
  Foo* py = &y;
  cout << (*py).x << "\n";
  cout << py->x << "\n";

  int x = 5;
  int* px = &x;
  int** ppx = &px;
  int*** pppx = &ppx;
  cout << x << "\n";
  cout << px << "\n";
  cout << ppx << "\n";
  cout << (*ppx == px) << "\n";
  //cout << (pppx == &(&(&x))) << "\n";
}
