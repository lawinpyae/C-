#include <iostream>
using namespace std;
struct node {
 int data;
 node *next; 
  } ;
  void createList (int);
  int main ( ) {
    node *first,*last,*current;
    int num;
    first=NULL;
    last=NULL;
    current=NULL;
    cout<<"Enter a number :";cin>>num;
    while (num!=0) {
      createList (num);
      cout<<"Enter a number :";cin>>num;
      }
     
    return 0;
    }
    void createList (int num) {
      node *current;
      current=new node;
      current ->data=num;
      current ->next=NULL;
      if (first ==NULL)
      first=current;
      else
      last -> next=current;
      last=current;
      }