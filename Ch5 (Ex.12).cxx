#include <iostream>
using namespace std;

struct fraction
{
    int numerator, denominator;
};

fraction fadd(fraction, fraction);
fraction fsub(fraction, fraction);
fraction fmul(fraction, fraction);
fraction fdiv(fraction, fraction);

int main()
{
    fraction f1, f2, f3;
    char dummychar, op;
    cout << "Enter first fraction:";
    cin >> f1.numerator >> dummychar >> f1.denominator;
    cout << "Enter second fraction:";
    cin >> f2.numerator >> dummychar >> f2.denominator;
    cout << "Enter operator";
    cin >> op;
    switch (op)
    {
    case '+':
        f3 = fadd(f1, f2);
        cout << "Additional :" << f3.numerator << dummychar << f3.denominator;

        break;
    case '-':
        f3 = fsub(f1, f2);
        cout << "Subtraction :" << f3.numerator << dummychar << f3.denominator;
        break;
    case '*':
        f3 = fmul(f1, f2);
        cout << "Multiplication :" << f3.numerator << dummychar << f3.denominator;
        break;
    case '/':
        f3 = fdiv(f1, f2);
        cout << "Division :" << f3.numerator << dummychar << f3.denominator;
        break;
    default:
        cout << "Error !";
        exit(0);
    }
    return 0;
}

fraction fadd(fraction f1, fraction f2)
{
    fraction f;

    f.numerator = (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator);
    f.denominator = (f1.denominator * f2.denominator);

    return f;
}

fraction fsub(fraction f1, fraction f2)
{
    fraction f;

    f.numerator = (f1.numerator * f2.denominator) - (f2.numerator * f1.denominator);
    f.denominator = (f1.denominator * f2.denominator);

    return f;
}

fraction fmul(fraction f1, fraction f2)
{
    fraction f;

    f.numerator = (f1.numerator * f2.numerator);
    f.denominator = (f1.denominator * f2.denominator);

    return f;
}

fraction fdiv(fraction f1, fraction f2)
{
    fraction f;

    f.numerator = (f1.numerator * f2.denominator);
    f.denominator = (f1.denominator * f2.numerator);

    return f;
}