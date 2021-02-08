#include <iostream>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b;
    public:
        int c;
};

/*
For a protected member :
Private 
Protected 
Public
*/

class Derived: protected Base{
    
};

int main()
{
    Base b;
    Derived d;
    cout << b.c;
    return 0;
}