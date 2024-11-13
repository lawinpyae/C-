#include <iostream>
#include <stdio.h>
using namespace std;
int main ( ) {
  char name[20];char ch;int m;
  do {
    cout<<"Enter student name :";cin>>name;
    cout<<"Enter student's mark :";cin>>m;
    FILE *fp;
    fopen ("student.txt","w+");
    fprintf (fp,"%s\t%d", name,m);
 
    cout<<"Do another (y/n)?";cin>>ch;
          fclose (fp);
    } while (ch != 'n');
 
    return 0;
  }