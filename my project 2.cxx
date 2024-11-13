#include <iostream>
using namespace std;
int main () {
  int tot1,tot2;
  cout<<"Enter array1 :";
  cin>>tot1;
  cout<<"Enter elements into the array1 :"<<endl;
  int arr1[tot1];
  for ( int i =0 ;i<tot1;i++)
  cin>>arr1[i];
  cout<<"Enter array2:";
  cin>>tot2;
  int arr2[tot2];
  cout<<"Enter element into the array2"<<endl;
  for(int j= 0 ; j<tot2;j++)
  cin>>arr2[j];
  int arr3[tot1+tot2];
  for(int i = 0; i<tot1+tot2;i++){
  arr3[i]= arr1[i];
  arr3[i]=arr2[i];
  cout<<arr3[i];}
  cout<<endl;
  return 0;
}
