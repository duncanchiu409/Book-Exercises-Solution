#include "iostream"

int main() {
  int double = 3.14; // Invalid
  // Cannot combine with previous int declaration specifier

  int _; // Valid

  int catch - 22; // Invalid
  // Expected unqualified-id

  int 1_or_2 = 1; // Invalid
  // Expected unqualified-id

  double Double = 3.14; // Valid
  // c++ is case sensitive. Therefore, it does not contradict with double
  // identifier

  return 0;
}
