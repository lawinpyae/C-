#include <iostream>
using namespace std;
int main () {
 int a,b,c,d;
 char dummychar;
 cout << "Enter first fraction"<<endl;
 cin>>a>>dummychar>>b;
 cout << "Enter second fraction"<<endl;
 cin >> c >> dummychar>>d;
 cout <<"Result is :"<<(a*d)+(b*c)<<dummychar<<b*d;
 return 0 ;
 }
 