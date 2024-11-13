#include <iostream>
using namespace std;
struct fraction {
  int numerator,denominator;};
  int main () {
  fraction f1,f2;
  char dummychar,op;
  cout<<"Enter first fraction,an operator,and a second fraction";
  cin>>f1.numerator>>dummychar>>f1.denominator>>op>>f2.numerator>>f2.denominator;
  switch (op) {
    case '+':
    cout<<"Addation :"<<(f1.numerator*f2.denominator + f1.denominator*f2.numerator)<<dummychar<<(f1.denominator*f2.denominator);
    break;
    case '-':
    cout<<"Subtraction :"<<(f1.numerator*f2.denominator - f1.denominator*f2.numerator)<<dummychar<<(f1.denominator*f2.denominator);
    break;
    case '*':
    cout<<"Multiplication :"<<(f1.numerator*f2.numerator)<<dummychar<<(f1.denominator*f2.denominator);
    break;
    case '/':
        cout<<" Division :"<<(f1.numerator*f2.denominator )<<dummychar<<(f1.denominator*f2.denominator);
    break;
    default :
    cout<<"Error";}
  return 0 ;}