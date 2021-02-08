#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void swapbyreference(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapbyvalue
int main()
{
    int a = 4, b = 5;
    // cout << "The sum of 4 and 5 is :" << sum(4, 5) << endl;
    cout << "The value of a is :" << a << " and the value of b is :" << b << endl;

    swapbyreference(&a, &b);
    cout << "The value of a now is :" << a << " and the value of b now is : " << b << endl;

    return 0;
}