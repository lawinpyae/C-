
#include <iostream>
using namespace std;
int main (  ) {
  int number;
  cout << "Enter Number(between 1 to 5)"<<endl;
  cin >> number;
  switch (number) {
    case 1:
    /*code ;
    */
  //  break ;
  case 5 :
  cout << "This number is bounary"<<endl;
  break ;
  case 2:
  case 3:
  case 4 :
  cout <<"This number is inside"<<endl;
  break;
  default :
  cout << "This number is outside";
  }
  return 0;
}