  #include <iostream>
    using namespace std;
    
    struct date {
      int day,month,year;
    };
    
    int main () {
      date d;
      char dummychar;
      cout<<"Enter a date :";
      cin>>d.day>>dummychar>>d.month>>dummychar>>d.year;
      d={d.day,d.month,d.year};
      
      cout<<"Your enter the date is :"<<d.day<<dummychar<<d.month<<dummychar<<d.year;
      return 0;
    }