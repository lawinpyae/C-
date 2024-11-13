#include <iostream>
using namespace std;
int main ( ) {
  int num[15],pcount=0,ncount=0,ocount=0,ecount=0,zcount=0;
  cout<<"Enter 15 elements into the array :\n";
  for (int i =0;i<15;i++) {
    cin>>num[i];
  }
  for (int i= 0;i<15;i++) {
    if (num[i]>0) {
      pcount++;
    }
    else {
      ncount++;
    }
    if (num[i]%2 != 0) {
      ocount++;
    }
    else {
      ecount++;
    }
    if (num[i]== 0)
    zcount++;
  }
  cout<<"number of positive numbers is:"<<pcount<<endl;
      
  cout<<"number of negative numbers is:"<<ncount<<endl;
cout<<"number of odd numbers is:"<<ocount<<endl;
  cout<<"number of even numbers is:"<<ecount<<endl;
  cout<<"number of zero numbers is :"<<zcount;
  return 0;
}
