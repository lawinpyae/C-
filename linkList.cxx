    #include <iostream>
          using namespace std;
     struct node {int num;node*next;};
     void createList (int);
     node *first,*last,*current;
     int main () {
       int num;
       cout<<"Enter a number:";cin>>num;
       while (num!=0) {
         createList(num);
         cout<<"Enter a number:";cin>>num;
       }
       traverseList();
       
       return 0;
     }
     void createList (int num) {
       current = new node;
       current -->data=num;
       current -->next=NULL;
       if (first==NULL)
       first=current;
       else
       last-->next=current;
       last=current;
     }