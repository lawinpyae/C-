#include <iostream>
using namespace std;
int main ( ) {
  int guests,chairs,fact=1;
  cout<<"Enter a Guests:";
  cin>>guests;
  cout<<"Enter a Chairs:";
  cin>>chairs;
  for (int i=0;i<chairs;i++) {
    fact *= guests;
    guests--;
    }
    cout<<"Factorial is:"<<fact;
  return 0;
  }