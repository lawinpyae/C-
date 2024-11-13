#include <iostream>
      using namespace std;
      long hms_to_secs (int hours,int minutes,int seconds);
      int main () {
        int hours,minutes,seconds;
        char ch,dummychar;
        do {
          cout<<"Enter hours,minutes and seconds:\n";
          cin>>hours>>dummychar>>minutes>>dummychar>>seconds;
          long totsec=hms_to_secs (hours,minutes,seconds);
          cout<<"Total seconds is:"<<totsec<<"s";
          cout<<"\nWant to another (y/n)?\n";
          cin>>ch;
          cout<<endl;
        }while(ch=='y');
        return 0;
      }
      long hms_to_secs ( int h,int m,int s) {
        long tot=h*3600+m*60+s;
        return tot;
      }