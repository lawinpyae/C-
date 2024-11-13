#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
    FILE *fp;
    int rn,s1,s2,s3,s4;
    char name[20],ch='y';
    fp = fopen ("studentrecoard.txt","w");
    while (ch =='y') {
    cout <<"Enter student name:";cin >> name;
    cout<<"Enter student roll number:";cin>>rn;
    cout<<"Enter Sub1:";cin>>s1;
    cout<<"Enter Sub2:";cin>>s2;
    cout<<"Enter Sub3:";cin>>s3;
    cout<<"Enter Sub4:";cin>>s4;
    fprintf (fp,"%s\t%d\t%d\t%d\t%d\t%d\t",name,rn,s1,s2,s3,s4);
    cout <<"Do you another (y/n)?";cin>>ch;}
    fclose (fp);
   if ((fopen ("studentrecoard.txt","r")) !=NULL)
        cout <<"Student information\n"<<endl
    <<"\tName\trn\tSub1\tSub2\tSub3\tSub4\t"<<endl;
   while (feof (fp)==0) {
 fscanf (fp,"%s\t%d\t%d\t%d\t%d\t%d\t",&name,&rn,&s1,&s2,&s3,&s4);
 cout<<"\t"<<name<<"\t"<<rn<<"\t"<<s1<<"\t"<<s2<<"\t"<<s3<<"\t"<<s4<<endl;
   }
   fclose (fp);
return 0;
}

