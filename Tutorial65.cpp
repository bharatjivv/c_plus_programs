#include <iostream>
using namespace std;
/* 
CLASS TEMPLATES WITH MULTIPLE PARAMETERS
template<class T1, class T2.....> (coma separated)
class nameOfClass{
    // body
}
*/

template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;

    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl
             << this->data2 << endl;
    }
};

int main()
{
    myClass<char, float> obj('C', 9.4);
    obj.display();

    return 0;
}