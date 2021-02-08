#include <iostream>
using namespace std;

    int glo = 6;

    void sum(int a)
    {
        cout << glo;
    }
int main()
{
    int a = 3, b = 4;
    float pi = 3.14;
    char c = 'u';
    bool is_true = true;

    cout << "The value of a is " << a << ".\n The value of b is " << b << ".\n The value of pi is " << pi;
    cout << "\n The value of character c is "<< c;
    cout << "\n The bool is \n" << is_true;
    sum(a);
    
    
    return 0;
}