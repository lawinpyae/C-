#include <iostream>
using namespace std;
struct sterling {
  int pounds,shillings,pence;};
  
  int main () {
    sterling s1;
    double decimalPound,decimalFrac;
    cout<<"Enter decimal pounds";
    cin>>decimalPound;
    s1.pounds=decimalPound;
    decimalFrac=decimalPound-s1.pounds;
    s1.shillings=decimalFrac*20;
    decimalFrac=( decimalFrac*20)-s1.shillings;
    s1.pence = decimalFrac*12;
    cout<<"Old notation = \x9c"<<s1.pounds<<"."<<s1.shillings<<"."<<s1.pence;
    return 0;}