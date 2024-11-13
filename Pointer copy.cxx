


#include <iostream>
#include <stdio.h>
using namespace std;
int main () {
	FILE *fp1,*fp2;
	 int rn,s1,s2,s3,s4;
    char name[20];
	fp1=fopen ("studentrecoard.txt","r");
	fp2=fopen ("copy.txt","w");


	while (!feof(fp1)) {
		fscanf (fp1,"%s\t%d\t%d\t%d\t%d\t%d\t",&name,&rn,&s1,&s2,&s3,&s4);
		fprintf (fp2,"%s\t%d\t%d\t%d\t%d\t%d\t",name,rn,s1,s2,s3,s4);
	}
//	fcloseall;
fclose(fp1);
fclose(fp2);
	return 0;
}
