#include <iostream>
using namespace std;

int main (  ) {
 for (int i = 1; i <= 5 ; i++) {
    for (int k = 5 - i ; k > 0 ; k--) {
         cout << " ";
         }
         for (int j = 0 ; j <i ; j ++) {
           cout << "*";
           }
       cout << endl;
  }
 return 0 ;
 }