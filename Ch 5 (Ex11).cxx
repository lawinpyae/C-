#include <iostream>
using namespace std;
struct sterling {
int pounds,shillings,pences;
};
sterling getData ();

sterling add (sterling,sterling);

void display (sterling);

int main () {
    sterling s1,s2,s3;
    s1=getData ();
    s2=getData ();
    s3=add (s1,s2);
    display (s3);
return 0;
}
sterling getData () {
sterling s;char dummychar;
cout << "Enter pounds,shilling and pence\n";
cin >> s.pounds>>dummychar>>s.shillings>>dummychar>>s.pences;
return s;
}
sterling add (sterling a,sterling b) {
sterling c;
c.pounds=a.pounds+b.pounds;
c.shillings=a.shillings+b.shillings;
c.pences=a.pences+b.pences;
   if (c.shillings>19) {
    c.pounds+=c.shillings/20;
    c.shillings%=20;
   if (c.pences>11){

    c.shillings+=c.pences/12;
    c.pences%=12;
    return c;}

   }
   return c;
}
void display (sterling s) {
cout << "Total is \x9c"<<s.pounds<<":"<<s.shillings<<":"<<s.pences;
}
