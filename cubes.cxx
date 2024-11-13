#include <iostream>
#include <iomanip>
using namespace std;
  int cubes = num * num *num;
int main ( ) {

 for (num= 1 ; num <11 ; num++) {
 
  cout << num
  << setw(6) << cubes<<endl;
  }
 return 0;
 }