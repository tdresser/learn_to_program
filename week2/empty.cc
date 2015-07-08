#include <iostream>
#include <string>

using namespace std;

enum XsOs {
  X,
  O,
  EMPTY
};

int main() {
  XsOs foo[3][3];
  for (int i = 0; i < 3; i = i + 1) {
    for (int j = 0; j < 3; j = j + 1) {
      foo[i][j] = EMPTY;
    }
  }
  foo[1][2] = O;
  return 0;
}
