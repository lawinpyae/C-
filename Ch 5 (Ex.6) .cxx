#include <iostream>
using namespace std;

struct Time {
  int hours,minutes,seconds;
  };
  
  long time_to_secs (int h,int m,int s);
  
  Time secs_to_time (long seconds);
  
  int main ( ) {
    Time t1,t2,t3;
    char dummychar;
    cout<<"First:";
    cin>>t1.hours>>dummychar>>t1.minutes>>dummychar>>t1.seconds;
    cout<<"Second:";
    cin>>t2.hours>>dummychar>>t2.minutes>>dummychar>>t2.seconds;
    t3.hours=t1.hours+t2.hours;
    t3.minutes=t1.minutes+t2.minutes;
    t3.seconds=t1.seconds+t2.seconds;
  
  long tots=  time_to_secs (t3.hours,t3.minutes,t3.seconds);
    cout<<"Total seconds is:"<<tots<<"s";
    Time hms=   secs_to_time (tots);
  
    cout<<"\nResult back "<<hms.hours<<dummychar<<hms.minutes<<dummychar<<hms.seconds;
   
  
    return 0;
    }
    
  long time_to_secs (int h,int m,int s) {
    long ts=h*3600+m*60+s;
    return ts;
    }
    
      Time secs_to_time (long seconds) {
        Time z;
        z.hours=seconds/3600;
        seconds=seconds%3600;
        z.minutes=seconds/60;
        z.seconds=seconds/60;
        return z;
        }