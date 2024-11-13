  #include <iostream>
      using namespace std;
      float circarea (float) ;
      int main ( ) {
        float radius,area;
        cout<<"Enter circle radius :";
        cin>>radius;
        area=circarea(radius);
        cout<<"Circle area is:"<<area;
        return 0;
      }
      float circarea (float r) {
        
       r= 3.14*r*r;
       return r;
      }