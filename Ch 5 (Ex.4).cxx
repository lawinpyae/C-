#include <iostream>
      using namespace std;
      struct Distance {
        int feet;
        float inches;
      };
      Distance compare (Distance,Distance);
      void display (Distance);
      int main () {
        Distance d1,d2,d3;
        cout<<"Enter feet and inches for Distance1:\n";
        cin>>d1.feet>>d1.inches;
        cout<<"Enter feet and inches for Distance2:\n";
        cin>>d2.feet>>d2.inches;
       d3= compare (d1,d2);
        cout<<"\nThe Largest Distance is:";display (d3);
        return 0;
      }
      Distance compare (Distance dd1,Distance dd2) {
        if (dd1.feet>dd2.feet) {
          return dd1;
        }
        else {
          return dd2;
        }
      }
      void display (Distance dd3) {
        cout<<dd3.feet<<"\'"<<dd3.inches<<"\"";
      }