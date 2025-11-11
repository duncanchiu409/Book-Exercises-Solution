#include <iostream>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    std::string isbn() const;
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

std::string Sales_data::isbn() const {
    return bookNo;
}

Sales_data& Sales_data::combine(const Sales_data& rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

double Sales_data::avg_price() const {
    if(units_sold)
        return revenue / units_sold;
    else
        return 0;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream &read(std::istream& is, Sales_data& item){
    double price;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

std::ostream &print(std::ostream& os, Sales_data& item){
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price() << std::endl;
    return os;
}