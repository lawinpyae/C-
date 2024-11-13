#include <iostream>
using namespace std;
int main () {
 int num;
 float temp;
 cout <<"Type 1 to convert Fahrenheit to Celsius"<<endl;
 cout <<"Type 2 to convert Celsius to Fahrenheit"<<endl;
 cin >> num;
 if (num == 1) {
  cout <<"Enter Fahrenheit"<<endl;
  cin >> temp;
  cout << "Celsius is:"<<(temp-32)*5/9;
  }
  else if (num == 2)
   {
    cout << "Enter Celsisus:";
    cin>>temp;
    cout<<"Fahrenhrit is"<<(temp*9/5)+32; 
   }
   else {
    cout << "Error";
    }
 return 0;
 }