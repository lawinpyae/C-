
#include <iostream>
using namespace std;
int main () {
  int arr1[50],arr2[50],marr[100],arr1size,arr2size;
  cout<<"Enter array 1 size :";
  cin>>arr1size;
  cout<<"Enter array 2 size :";
  cin>>arr2size;
  cout<<"Enter element into the array1\n";
  for (int i =0 ; i<arr1size;i++) {
    cin>>arr1[i];
    marr[i]=arr1[i];
  }
  cout<<"\nEnter element into the array2\n";
  for (int i= 0;i<arr2size;i++) {
    cin>>arr2[i];
    marr[i+arr1size]=arr2[i];
  }
  cout<<"The marge two array :\n";
  for (int i=0;i<arr1size+arr2size;i++) {
    cout<<marr[i]<<" ";}
  return 0;
}