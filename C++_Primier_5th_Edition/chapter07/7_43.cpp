#include <iostream>
#include <vector>

class NoDefault {
private:
    int a;
public:
    NoDefault(int i): a(i) {}
};

class C {
private:
    NoDefault b;
public:
    C(): b(0) {}
};

int main() {
    std::vector<NoDefault> vec(10);
    return 0;
}