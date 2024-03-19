#include <QObject>
#include <QtTest>
#include "../../QTest/Calculator/calculator.h"
// add necessary includes here

class tst_caculator : public QObject
{
    Q_OBJECT

private slots:
    // Test method for the add function
    void testAddition()
    {
        // Arrange
        Calculator calculator;

        // Act
        int result = calculator.add(5, 3);

        // Assert
        QCOMPARE(result, 8);
    }

    // Test method for the multiplication function
    void testMultiplication()
    {
        // Arrange
        Calculator calculator;

        // Act
        double result = calculator.multiplication(5, 3);

        // Assert
        QCOMPARE(result, 15.0);
    }

    // Test method for the subtraction function
    void testSubtraction()
    {
        // Arrange
        Calculator calculator;

        // Act
        double result = calculator.subtraction(5, 3);

        // Assert
        QCOMPARE(result, 2.0);
    }

    // Test method for the division function
    void testDivision()
    {
        // Arrange
        Calculator calculator;

        // Act
        double result = calculator.division(6, 3);

        // Assert
        QCOMPARE(result, 2.0);
    }
};

QTEST_MAIN(tst_caculator)

#include "tst_caculator.moc"
