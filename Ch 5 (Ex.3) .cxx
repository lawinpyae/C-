#include <iostream>
using namespace std;

void zeroSmaller (int & ,int &);

int main ( ) {
  int num1,num2;
  cout<<"Enter first number:";
  cin>>num1;
  cout<<"Enter second number:";
  cin>>num2;

  zeroSmaller (num1,num2);
  cout<<"num1 is"<<num1<<endl;
  cout<<"num2 is"<<num2;
  return 0;
  }
  
  void zeroSmaller (int &n1,int &n2) {
    if (n1>n2)
    n2=0;
    else
    n1=0;
    }