#include <iostream>
using namespace std;

int main ( ) {
  int num [10]={1,2,3,4,5,6,7,8,9,10};
  cout<<"They include Data:\n";
  for (int i=0;i<10;i++) {
    cout<<num [i]<<" ";
    }
    cout<<"\nThe exchange Data:\n";
    for (int i =0;i<10;i++) {
      int temp = num[i];
      num[i]=num[i+1];
      num[i+1]=temp;
      i++;
      }
      for (int i=0;i<10;i++) {
        cout<<num[i]<<" ";
        }
  return 0;
  }