#include <iostream>
using namespace std;


int main(){
    // Basic Example
    int a = 4;
    int* ptr = &a;
    // OR can be written as *ptr = 999;
    cout << " The value of a is " << *(ptr)<< endl;

    // int* p = new int(40);
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20; // OR can be written as  *(arr + 1) = 20;
    arr[2] = 30;
    // delete[] arr;   // Deleting dynamically allocated memory
    cout << "The value at arr[0] is " << arr[0] << endl;
    cout << "The value at arr[1] is " << arr[1] << endl;
    cout << "The value at arr[2] is " << arr[2] << endl;

    // Delete operator

    return 0;
}