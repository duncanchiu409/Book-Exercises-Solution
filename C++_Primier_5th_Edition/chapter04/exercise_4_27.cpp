#include <iostream>
#include <bitset>

int main(){
    unsigned long ul1 = 3, ul2 = 7;
    // a)
    std::cout << "a) " << std::bitset<64>(ul1 & ul2) << std::endl;

    // b)
    std::cout << "b) " << std::bitset<64>(ul1 | ul2) << std::endl;

    // c)
    std::cout << "c) " << (ul1 && ul2) << std::endl;

    // d)
    std::cout << "d) " << (ul1 || ul2) << std::endl;
    return 0;
}