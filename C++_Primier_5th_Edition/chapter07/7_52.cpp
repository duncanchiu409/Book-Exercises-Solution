#include <string>

struct Sales_items {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main() {
    Sales_items item = { "978-0590353403", 25, 15.99 };
    return 0;
}