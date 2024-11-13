#include <iostream>
using namespace std;
int copys (char *);
int main ( ) {
  char str1[6]={'H','e','l','l','o'};
  char str2[5];
  char *sptr1;char *sptr2;
 sptr1=str1;
sptr2=str2;
 char cs=copys (sptr1);
 cout<<"Copy :"<< cs;
  return 0;
  }
  int copys (char *s) {
    int i=0;char sptr2;
    while (s[i] != '\0') {
        sptr2=s[i];
        i++;}
    return sptr2;
    }