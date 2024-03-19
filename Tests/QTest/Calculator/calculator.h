#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QObject>

class Calculator
{
public:
    Calculator();
    int add(int a, int b);
    double multiplication(int a, int b);
    double subtraction(int a, int b);
    double division(int a, int b);
};

#endif // CALCULATOR_H
