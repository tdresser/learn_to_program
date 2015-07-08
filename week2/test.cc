#include <iostream>

using namespace std;

int addThree(int x) {
  return x + 3;
}

void shouldBeTrue(bool val) {
  if (!val) {
    cerr << "TEST FAILED";
  }
}

int main() {
  shouldBeTrue(addThree(5) == 8);
  shouldBeTrue(addThree(6) == 8);
}
