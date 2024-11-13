#include <iostream>
using namespace std;
double power (double n,int p=2);
int main (  ) {
  double num,ans;
  char ch;
  int pow;
  cout<<"Enter a number:";
  cin>>num;
  cout<<"Want to another (y/n)?";
  cin>>ch;
  if (ch =='y') {
    cout<<"Enter a power:";cin>>pow;
    ans=power (num,pow);
    }
    else {
      ans=power (num);
      }
      cout<<"Result is:"<<ans;
  return 0;
  }
  double power (double n,int p) {
    int fact = 1;
    for (int i =0;i<p;i++) {
      fact*=n;
      }
      return fact;
    }