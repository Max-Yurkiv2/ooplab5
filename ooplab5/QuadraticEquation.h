#ifndef QUADRATICEQUATION_H
#define QUADRATICEQUATION_H

#include "Equation.h"

class QuadraticEquation : public Equation {
private:
    double a, b, c;
public:
    QuadraticEquation(double a, double b, double c);
    void findRoots() override;
};

#endif
