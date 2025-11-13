#include "LinearEquation.h"
#include <iostream>
using namespace std;

LinearEquation::LinearEquation(double a, double b) : a(a), b(b) {}

void LinearEquation::findRoots() {
    cout << "\n=== Linear equation: " << a << "x + " << b << " = 0" << endl;
    if (a == 0 && b == 0)
        cout << "Infinite solutions (0 = 0)" << endl;
    else if (a == 0)
        cout << "No solution (0x = " << -b << ")" << endl;
    else
        cout << "x = " << -b / a << endl;
}