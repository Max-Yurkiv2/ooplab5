#ifndef EQUATION_H
#define EQUATION_H

#include <iostream>
using namespace std;

// Абстрактний базовий клас
class Equation {
public:
    virtual void findRoots() = 0; // чисто віртуальна функція
    virtual ~Equation() {}
};

#endif
