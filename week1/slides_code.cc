#include <iostream>

float y(float m, float x, float b) {
  return m * x + b;
}

int main() {
  float result = y(2.5, 3, 4);
  std::cout << result << std::endl;
  return 0;
}

int main() {
  std::cout << "Hello World\n";
}

int x; // Variable declaration
x = 3; // Variable assignment
int y = 4; // Variable declaration and assignment
int z = 4 + x; // Assign z to value of expression

int a;
int b = 4;
a = b + 1;
a = a + b;

int a; // a = ?
int b = 4; // a = ?, b = 4
a = b + 1; // a = 5, b = 4
a = a + b; // a = 9, b = 4

int main() {
  return 42;
}

bool x = true && !(false || true);

if (expression) {
  statements;
}

if (true || false) {
  x = 3;
}

while (expression) {
  statements;
}

while (true) {
  x = x + 1;
}

int i = 0;
int x = 1;
while (true) {
  if (i >= 100)
    break;
  x = x * 2;
  i = i + 1;
}


const int x = 5; // You can't change the value of x.
#include <string> // Include some code someone else wrote. In this case, it's the "string" type.
using namespace std; // standard things can be referred to easily. std::string -> string
#include <iostream> // Include input/output functionality.
cout << "Test"; // Output "Test"

string foo;
cin >> foo; // Read from terminal into variable foo.
