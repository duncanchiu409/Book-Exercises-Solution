#include <cassert>
#include <iostream>

int i = 42;
int main() {
  int i = 100;
  int j = i;
  assert(j == 100);
}
