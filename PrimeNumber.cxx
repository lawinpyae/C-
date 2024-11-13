#include <iostream>
using namespace std;
int main()
{
    int num, count;
    char ch = 'y';
    while (ch == 'y')
    {
        cout << "Enter a number:";
        cin >> num;
        for (int i = 0; i <= num; i++)
        {
            if (num % i == 0)
                count++;
        }
        if (count == 2)
            cout << "Your enter is prime number:" << endl;
        else
            cout << "Not Prime!" << endl;
        cout << "Do you wish another (y/n)?\n";
        cin >> ch;
        cout << endl;
    }
    return 0;
}