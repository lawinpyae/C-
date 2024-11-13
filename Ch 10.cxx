#include<iostream>
 using namespace std;
int main(){
char str1[6]="HELLO";
char str2[5];
char *sptr1,*sptr2;
sptr1=str1;
sptr2=str2;
int i=0;
while (sptr1[i]!='\0') {
 sptr2[i] =sptr1[i];
i++;
}
cout << "Copy :"<<sptr2;
 return 0;
 }
 