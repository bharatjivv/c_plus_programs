#include <iostream>
using namespace std;
class Baseclass
{
public:
    int var_base;
    void display()
    {
        cout << " Displaying base class variable var_base " << var_base << endl;
    }
};

class Derivedclass : public Baseclass
{
public:
    int var_derived;
    void display()
    {
        cout << " Displaying Base class variable var_derived  " << var_base << endl;
        cout << " Displaying Derived class variable var_derived  " << var_derived << endl;
    }
};

int main()
{
    Baseclass *base_class_pointer;
    Baseclass obj_base;
    Derivedclass obj_derived;
    base_class_pointer = &obj_derived;

    return 0;
}