#include <QCoreApplication>
#include "calculator.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Calculator calculator;
    qDebug()<<"Add: " << calculator.add(50, 40);
    qDebug()<<"division: " << calculator.division(40, 8);
    qDebug()<<"multiplication: " << calculator.multiplication(80, 40);
    qDebug()<<"subtraction: " << calculator.subtraction(60, 40);
    return a.exec();
}
