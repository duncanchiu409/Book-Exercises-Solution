// ~ is a shift operator which has a mid-level presence
// << is a shift operator which has a mid-level presence
// Shift operators are left associative
#include <iostream>
#include <bitset>

int main(){
    std::cout << std::bitset<8>(~'q' << 6) << std::endl;
    // Answer: 10000000
}