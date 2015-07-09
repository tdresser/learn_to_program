#include <iostream>
#include <cmath>
#include <assert.h>

using namespace std;

void shouldBeTrue(bool v, string message) {
  if (!v) {
    cout << "FAILED " << message << "\n";
  }
}

// Computes the square root of an integer, rounded down.
// Input must be non-negative.
int squareRoot(int x) {
  return floor(sqrt(x));
}

void divideNumbers(float x[3], float y) {
  // Take the reciprocal of y, and then multiply each element of x by it.
  float r = 1/y;
  for (int i = 0; i < 3; ++i) {
    x[i] = x[i] * r;
  }
}

int main() {
  shouldBeTrue(squareRoot(10) == 3, "sqrt(10) == 3");

  float x[3];
  x[0] = 5.2;
  x[1] = 6.8;
  x[2] = 7.4;
  divideNumbers(x, 1.7);
  cout << x[0] << "\n";
  shouldBeTrue(x[0] == 5.2f*(1/1.7f), "Testing divideNumbers");
  shouldBeTrue(x[1] == 6.8f*(1/1.7f), "Testing divideNumbers");
  shouldBeTrue(x[2] == 7.4f*(1/1.7f), "Testing divideNumbers");
}
