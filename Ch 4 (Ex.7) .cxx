#include <iostream>
using namespace std;
enum etype
{
    laborer,
    secretary,
    manager,
    accountant,
    executive,
    researcher
};
struct employee
{
    int num, month, day, year;
    float comp;
    etype t;
};
int main()
{
    employee e[3];
    char ch, dummychar;
    do
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter employee's number:";
            cin >> e[i].num;
            cout << "Enter employee's compensation :";
            cin >> e[i].comp;
            cout << "Enter employee's type (l/s/m/a/e/r):";
            cin >> ch;
            switch (ch)
            {
            case 'l':
                e[i].t = laborer;
                break;
            case 's':
                e[i].t = secretary;
                break;
            case 'm':
                e[i].t = manager;
                break;
            case 'a':
                e[i].t = accountant;
                break;
            case 'e':
                e[i].t = executive;
                break;
            case 'r':
                e[i].t = researcher;
                break;
            default:
                cout << "error";
                exit(0);
            }
            cout << "Enter date:";
            cin >> e[i].month >> dummychar >> e[i].day >> dummychar >> e[i].year;
        }
        for (int i = 0; i < 3; i++)
        {
            cout << "\nEnter employee's number:" << e[i].num << endl;
            cout << "Enter employee's compensation :" << e[i].comp << endl;
            switch (e[i].t)
            {
            case 0:
                cout << "laborer";
                break;
            case 1:
                cout << "secretary";
                break;
            case 2:
                cout << "manager";
                break;
            case 3:
                cout << "accountant";
                break;
            case 4:
                cout << "executive";
                break;
            case 5:
                cout << "researcher";
                break;
            }
            cout << "\nThe date:" << e[i].month << dummychar << e[i].day << dummychar << e[i].year << endl;
        }
        cout << "\n Do another ?(y/n):";
        cin >> ch;
        cout << endl;
    } while (ch == 'y');
    return 0;
}