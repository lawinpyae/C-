#include <iostream>
using namespace std;
int main () {
  int x,snum;
  cout<<"Enter a number :";
  cin>>x;
  int arr[x];
  cout<<"Enter elements"<<endl;
  for (int i = 0 ; i< x; i++){
    cin>>arr[i];
  }
  cout<< "To find";
  cin>>snum;
  for (int i = 0; i<x ;i++) {
      if (snum==arr[i]) {
        cout<<"Found";
        break;
        }
        if (snum != arr[i]){
        cout<<"Not";
        break;}
        }
  return 0;
}