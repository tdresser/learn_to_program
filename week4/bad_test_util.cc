#include <iostream>
#include <string>

using namespace std;

void shouldBeTrue(bool v, string message) {
  if (!v) {
    cout << "FAILED " << message << "\n";
  }
}
