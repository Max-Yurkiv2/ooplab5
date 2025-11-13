#include "QuadraticEquation.h"
#include <iostream>
#include <cmath>
using namespace std;

QuadraticEquation::QuadraticEquation(double a, double b, double c)
    : a(a), b(b), c(c) {}

void QuadraticEquation::findRoots() {
    cout << "\n=== Quadratic equation: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
    if (a == 0) {
        cout << "This is not a quadratic equation. Switching to linear." << endl;
        if (b != 0)
            cout << "x = " << -c / b << endl;
        else
            cout << (c == 0 ? "Infinite solutions" : "No solution") << endl;
        return;
    }

    double D = b * b - 4 * a * c;
    if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Two real roots: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (D == 0) {
        double x = -b / (2 * a);
        cout << "One real root: x = " << x << endl;
    }
    else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-D) / (2 * a);
        cout << "Complex roots: x1 = " << realPart << " + " << imagPart << "i, "
            << "x2 = " << realPart << " - " << imagPart << "i" << endl;
    }
}
