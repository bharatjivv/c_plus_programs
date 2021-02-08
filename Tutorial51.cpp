#include <iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout << " The real part is " << real << endl;
            cout << " The imaginary part is " << imaginary << endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};

int main(){
    Complex c1;
    Complex *ptr = &c1;   
      // We can also use new operator -->  Complex *ptr = new Complex;
    (*ptr).setData(1, 54);  // Earlier we used to write c1.setData(1, 54);
    (*ptr).getData();       // Earlier we used to write c1.getData;


//  (*ptr).setData(1, 54);    is exactly same as 
     ptr->setData(1, 54);
//  (*ptr).getData();      is exactly same as
     ptr->getData();


// ARRAY OF OBJECTS
    Complex *ptr1 = new Complex[4];
    ptr1 -> setData(1, 4);
    ptr1 -> getData();












    return 0;
}