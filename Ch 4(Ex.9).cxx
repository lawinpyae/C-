#include <iostream>
using namespace std;
     
struct time {
  int hours,minutes,seconds; 
};
int  main () {

     time t1;
     char op;
  cout<<"Enter a first  time value in hours,minutes and seconds\n ";
  cin>>t1.hours>>op>>t1.minutes>>op>>t1.seconds;
  long totalsecs1 = t1.hours*3600 + t1.minutes*60 + t1.seconds;
      cout<<"The total number of seconds is:"<<totalsecs1;
  return 0;}
  