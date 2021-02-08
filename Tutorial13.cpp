#include <iostream>
using namespace std;

struct employee
{
    //data
    int eId;
    char favchar;
    float salary;
};
int main()
{
    struct employee harry;
    harry.eId = 1;
    harry.favchar = 'c';
    harry.salary = 1200000;

    cout << "The value is " << harry.eId << endl;
    cout << "The value is " << harry.favchar << endl;
    cout << "The value is " << harry.salary << endl;

    return 0;
}