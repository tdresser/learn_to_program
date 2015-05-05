struct Test {
  int a;
  bool b;
  bool c;
  int breaker;
  bool d;
};

union Union {
  int a;
  char b;
};

int main() {
  const char* test = "yo";
  Test foo;
  foo.a = 65;
  foo.b = false;
  foo.c = true;
  foo.d = false;
  foo.breaker = 0x10;

  Union un;
  un.a = 0x41;
  return foo.a;
}
