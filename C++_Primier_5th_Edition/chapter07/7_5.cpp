#include <iostream>
#include <cstdlib>

struct Person
{
    std::string name;
    std::string address;

    std::string getName() const
    {
        return name;
    }

    std::string getAddress() const
    {
        return address;
    }

    std::istream &read(std::istream &is, const Person &person){
        is >> person.name >> person.address;
        return is;
    }

    std::ostream &print(std::ostream &os, const Person &person){
        os << "Name: " << person.name << " Address: " << person.address << std::endl;
        return os;
    }
};

int main() {
    return EXIT_SUCCESS;
}