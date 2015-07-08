struct Test {
  int foo;
  int bar[3];
};

int main() {
  Test test;
  test.foo = 10;
  test.bar[0] = 1;
  test.bar[1] = 2;
  test.bar[2] = 3;
  return test.foo;
}
