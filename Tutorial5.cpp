#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the value of num1: ";
    cin >> num1;
    // '<<' This is called insertion operator
    // '>>' This is called extraction operator

    cout << "Enter the value of num2: ";
    cin >> num2;

    cout << "The sum is : " << num1 + num2;
    return 0;
}
// This is the C Code with same functionality as above 
// #include <stdio.h>
// int main()
// {
//     int num1, num2;
//     printf("Enter the value of number 1 :");
//     scanf("%d", &num1);

//     printf("Enter the value of number 2 :");
//     scanf("%d", &num2);
//     printf("The sum of first and second number is : %d ", num1 + num2);
//     return 0;
// }