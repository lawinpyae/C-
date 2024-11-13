# include <iostream>
using namespace std;
int main () {
  int num;
  cout << "Enter a number"<<endl;
  cin >> num;
  switch (num%2) {
    case 0:
    cout << "Even";
    break;
    default :
    cout << "Odd";
  }
  return 0;
}