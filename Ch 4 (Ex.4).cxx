 
    
    
    #include <iostream>
    using namespace std;
    
    struct employee {
      int enumber;
      float ecom;
    };
    int main () {
      employee e[3];
      for (int i = 0 ; i<3;i++) {
        cout<<"Enter employee number for :";
        cin>>e[i].enumber;
        cout<<"Enter employee compensation :";
        cin>>e[i].ecom;}
        cout<<"The information for each employee:\n";
        for (int i = 0;i<3;i++) {
          cout<<"For employee "<<e[i].enumber<<": "<<e[i].ecom<<endl;
          
        }
      
      return 0;
    }