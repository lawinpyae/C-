#include <iostream>
using namespace std;
int main ( )  {
  int arr1[12]={1,2,3,4,5,6,7,8,9,10,11,12};
  int arr2[12]={1,2,3,4,5,6,7,8,9,10,11,12};
  int arr3[12];
  for (int i =0;i<12;i++) {
    arr3[i]=arr1[i]+arr2[i];
    
    cout<<arr3[i]<<" ";}
  return 0;
  }