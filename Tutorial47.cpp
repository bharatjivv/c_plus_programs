#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator{
    int a, b;
    public:
        void getDataSimple(){
            cout << "Enter the number of a " << endl;
            cin >> a;
            cout << "Enter the number of b " << endl;
            cin >> b;
        }
    void performOperation(){
        cout << " The value of a + b is: " << a + b << endl;
        cout << " The value of a - b is: " << a - b << endl;
        cout << " The value of a * b is: " << a * b << endl;
        cout << " The value of a / b is: " << a / b << endl;
    }
};

class ScientificCalculator{
    int a, b;
    public:
        void getDataScientific(){
            cout << "Enter the number of a " << endl;
            cin >> a;
            cout << "Enter the number of b " << endl;
            cin >> b;
        }
        void performOperation(){
            cout << " The value of cos(a) is:" << cos(a) << endl;
            cout << " The value of sin(a) is:" << sin(a) << endl;
            cout << " The value of exp(a) is:" << exp(a) << endl;
            cout << " The value of tan(a) is:" << tan(a) << endl;

            cout << " The value of cos(b) is:" << cos(b) << endl;
            cout << " The value of sin(b) is:" << sin(b) << endl;
            cout << " The value of exp(b) is:" << exp(b) << endl;
            cout << " The value of tan(b) is:" << tan(b) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
    
};

int main(){

    SimpleCalculator calc;
    calc.getDataSimple();
    calc.performOperation();

    ScientificCalculator scalc;
    scalc.getDataScientific();
    scalc.performOperation();

    return 0;
}