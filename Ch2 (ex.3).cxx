#include<iostream> 
#include<conio.h>
using namespace std;
  int main()
{
char ch;
long total=0;
 cout<<"\n Enter a number:";
  while((ch=getche()) != '\r') {
   total*=10+ch-'0';}
    cout<<"number is:"<<total;
     return 0;

}