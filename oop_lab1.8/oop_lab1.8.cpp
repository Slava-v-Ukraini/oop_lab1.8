#include <iostream>
#include "Fracton.h"
using namespace std;

int main() {
    Fraction f1("12", 75), f2("3", 50);
    Fraction sum = f1 + f2;
    Fraction diff = f1 - f2;
    Fraction prod = f1 * f2;

    cout << "First fraction: ";
    f1.Display();
    cout << endl;

    cout << "Second fraction: ";
    f2.Display();
    cout << endl;

    cout << "Sum: ";
    sum.Display();
    cout << endl;

    cout << "Difference: ";
    diff.Display();
    cout << endl;

    cout << "Product: ";
    prod.Display();
    cout << endl;

    return 0;
}