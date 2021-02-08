#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Derived class
// Creating a programmer class derived from base class
class Programmer : Employee
{
public:
int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillf(10);
    cout << skillf.languageCode << endl;
    skillf.getData();
    return 0;
}

/*
classs {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    classmembers/methods/etc...
}
Note :
    1. Default visibility mode is private
    2. Public visibility Mode: Public members of the base class becomes Public members of the derived class
    3. Private visibility Mode: Public members of the base class becomes private members of the derived class
    4. Private members of base class are never inherited to the derived class
*/