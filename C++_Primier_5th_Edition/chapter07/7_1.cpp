#include <iostream>

class Sales_data
{
public:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    double price;
    Sales_data total;

    if (std::cin >> total.bookNo >> total.units_sold >> price)
    {
        total.revenue = total.units_sold * price;

        Sales_data trans;
        while (std::cin >> trans.bookNo >> trans.units_sold >> price)
        {
            trans.revenue = trans.units_sold * price;
            if (total.bookNo == trans.bookNo)
            {
                total.revenue += trans.revenue;
            }
            else
            {
                std::cout << "Book No: " << total.bookNo << " Revenue: " << total.revenue << std::endl;
                total = trans;
            }
        }
        std::cout << "Book No: " << total.bookNo << " Revenue: " << total.revenue << std::endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
