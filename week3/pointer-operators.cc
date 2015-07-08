#include <iostream>
#include <string>

using namespace std;

void shouldBeTrue(bool v, string message) {
  if (!v) {
    cout << "FAILED " << message << "\n";
  }
}

int main() {
  int x = 3;
  cout << "&x is " << &x << "\n";

  shouldBeTrue(*(&x) == x, "*(&x) == x");

  int* y = &x;
  *y = 3;
  shouldBeTrue(x == 3, "Can set value through pointer.");

  int ar[2];
  ar[0] = 10;
  ar[1] = 12;
  int* i = ar;
  shouldBeTrue(*i == 10, "Pointer to front of array points to first element.");
  shouldBeTrue(*(i + 1) == 12, "Pointer + 1 goes to next array element.");
}
