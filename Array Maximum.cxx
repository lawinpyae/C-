#include <iostream>
using namespace std;
int main ( )  {
  int num[12]={11,2,5,7,8,61,17,28,9,10,11,1};
  cout<<"The Input Data:"<<endl;
  for (int i=0;i<12;i++) {
    cout<<num[i]<<" ";
    }
    int max=num[0];
    for (int i=0;i<12;i++) {
      if (max<num[i])
      max=num[i];
     
      }
      cout<<"\nMaximum is: "<<max;
  return 0;
  }