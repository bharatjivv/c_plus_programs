#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "Operators in c++" << endl;
    cout << "Following are the operators in C++" << endl;

    // Arithmetic Operator

    cout << "The value of a + b is" << a + b << endl;
    cout << "The value of a - b is" << a - b << endl;
    cout << "The value of a * b is" << a * b << endl;
    cout << "The value of a / b is" << a / b << endl;
    cout << "The value of a % b is" << a % b << endl;
    cout << "The value of a++ b is" << a++ << endl;
    cout << "The value of a-- b is" << a-- << endl;
    cout << "The value of ++a is" << ++a << endl;
    cout << "The value of --a  is" << --a << endl;

    // Comparison operator

    cout << "Following are the comparison operator in C++" << endl;
    cout << "The value of a == b is" << (a == b) << endl;
    cout << "The value of a != b is" << (a != b) << endl;
    cout << "The value of a >= b is" << (a >= b) << endl;
    cout << "The value of a <= b is" << (a <= b) << endl;
    cout << "The value of a > b is" << (a > b) << endl;
    cout << "The value of a < b is" << (a < b) << endl;

    // Logical Operator

    cout << "Following are the logical operators in C++" << endl;
    cout << "The value of logical AND operator ((a==b) && (a<b)) is :" << ((a == b) && (a < b)) << endl;
    cout << "The value of logical OR operator ((a == b) || (a < b))is :" << ((a == b) || (a < b)) << endl;
    cout << "The value of logical NOT operator (!(a == b)) is :" << (!(a == b)) << endl;

    return 0;
}