#include <iostream>
using namespace std;

// --> Function prototype
// --> type function - name(arguements);
// --> int sum(int a, int b)  --> Acceptable
// --> int sum(int, int)  --> Acceptable
// --> int sum(int a, b)  --> Not acceptable

int sum(int a, int b)
{
    return a + b; 
}
int main()
{
    int num1, num2;

    cout << "Enter your first number : ";
    cin >> num1;

    cout << "Enter your second number : ";
    cin >> num2;

    cout << "The sum is : " << sum(num1, num2);
    return 0;
}