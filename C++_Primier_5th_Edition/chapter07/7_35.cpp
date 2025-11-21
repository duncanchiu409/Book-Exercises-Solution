#include <iostream>

typedef std::string Type;
Type initVal();

class Exercise {
public:
    typedef double Type;
    Type setVal(Type);
    Type initVal();
private:
    int val;
};

Exercise::Type Exercise::setVal(Type param){
    this->val = param + initVal();
    return this->val;
}