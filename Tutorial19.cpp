#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout<< "Using function with 2 arguements " << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "Using function with 3 arguements " << endl;
    return a + b + c;

}
int main()
{
    cout << "The sum of 3 and 8 is "<< sum(3, 8) << endl;
    cout << "The sum of 3 , 8 , 9 is " << sum(3, 8, 9) << endl;
    
    return 0;
}