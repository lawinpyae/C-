 #include <iostream>
 #include <iomanip>
 using namespace std;
 
 int main ( ) {
   int num;
   cout << "Enter a number :";
   cin >> num;
   for (int i = 1 ; i <= 50; i++) {
     cout << setw(6) << num * i;
     if ( i %5 == 0) {
       cout << endl;
     }
   }
   return 0;
 }