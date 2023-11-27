#include "lib_b.h"
#include "lib_a.h"

void bar() {
  foo();
  std::cout << "Hello from lib B\n";
}
