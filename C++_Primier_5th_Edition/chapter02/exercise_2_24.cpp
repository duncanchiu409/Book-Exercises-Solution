#include <iostream>

int main() {
  int i = 100, sum = 0;
  for (int i = 0; i != 10; ++i) {
    sum += i;
  }
  std::cout << i << " " << sum << std::endl;
  // 100 45
  // i is 100 because local i is accessed inside of i inside for loop
}
