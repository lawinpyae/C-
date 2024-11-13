 #include <iostream>
 using namespace std;
 
 int main () {
   int mark1,mark2,mark3;
   cout << "Please enter your 3 sub mark"<<endl;
   cin >> mark1 >> mark2 >> mark3;
   (mark1 >= 40 && mark2 >=40 && mark3 >=40)? cout << "pass":cout<<"Fail";
   return 0;
 }