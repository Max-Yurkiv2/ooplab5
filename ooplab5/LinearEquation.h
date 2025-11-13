#pragma once
#ifndef LINEAREQUATION_H
#define LINEAREQUATION_H

#include "Equation.h"

class LinearEquation : public Equation {
private:
    double a, b;
public:
    LinearEquation(double a, double b);
    void findRoots() override;
};

#endif
