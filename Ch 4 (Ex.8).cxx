#include <iostream>
using namespace std;
struct fraction {
  int numerator,denominator;};
  int main () {
  fraction f1,f2;
  char dummychar;
  cout<<"Enter first fraction :";
  cin>>f1.numerator>>dummychar>>f1.denominator;
  cout<<"Enter second fraction :";
  cin>>f2.numerator>>dummychar>>f2.denominator;
  float sum=(f1.numerator*f2.denominator+  f1.denominator*     f2   .numerator)/(f1.denominator*f2.denominator);
  cout<<"Sum ="<<sum;
  return 0 ;}