#include <iostream>
    using namespace std;
    
    enum etype {
      laborer, secretary, manager, accountant, executive, researcher
    };
    
    int main () {
      etype t;
      char ch;
      do{
      cout<<"Enter employee type (first letter only) labor, secret, manager, account, executive, research :";
  cin>>ch;
      switch (ch) {
        case 'l':
         t=laborer;
        break;
        case 's':
        t=secretary;
        break;
        case 'm':
        t=manager;
        break;
        case 'a':
         t=accountant;
        break;
        case 'e':
        t=executive;
        break;
        case 'r':
        t=researcher;
        break;
        default :
        cout<<"Error";
       return 0;
      }
      switch (t) {
        case 0:
        cout<<"Employee type is laborer";
        break;
        case 1:
        cout<<"Employee type is secretary";
        break;
        case 2:
        cout<<"Employee type is manager";
        break;
        case 3:
        cout<<"Employee type is accountant";
        break;
        case 4:
        cout<<"Employee type is executive";
        break;
        case 5:
        cout<<"Employee type is research";
        break;
        
      }
      cout<<"\nDo you another (y/n)?";
      cin>>ch;}while(ch=='y');
      cout<<endl;
      return 0;
    }