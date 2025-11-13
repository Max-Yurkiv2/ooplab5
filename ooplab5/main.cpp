#include <iostream>
#include "LinearEquation.h"
#include "QuadraticEquation.h"
using namespace std;

int main() {
    cout << "=== Cheking equation classes ===" << endl;

    LinearEquation lin(2, -6);
    lin.findRoots();

    QuadraticEquation quad(1, -3, 2);
    quad.findRoots();

    QuadraticEquation complexCase(1, 2, 5);
    complexCase.findRoots();

    return 0;
}
