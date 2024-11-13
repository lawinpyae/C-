#include <iostream>
using namespace std;
int main ( ) {
  int r,c,max,min;
  cout<<"Enter array size of 2D Array:";
  cin>>r>>c;
  int a[r] [c];
  cout<<"Enter integer into the array:\n";
  for (int i=0;i<r;i++) {
    for (int j=0;j<c;j++)
    cin>>a[i][j];
    }
    max=a[0][0];
    min=a[0][0];
    for (int i=0;i<r;i++) {
      for (int j=0;j<c;j++) {
        if (max<a[i][j])
        max=a[i][j];
        if (min>a[i][j])
        min=a[i][j];
        }
      }
      cout<<"Largest is:"<<max<<endl;
      cout<<"Smallest is:"<<min;
  return 0;}