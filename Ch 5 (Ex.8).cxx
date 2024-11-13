#include <iostream>
using namespace std;

void swap(int &, int &);

int main()
{
    int a, b;
    cout << "Enter num1";
    cin >> a;
    cout << "Enter num2";
    cin >> b;
    swap(a, b);
    cout << "After swapping";
    cout << "num 1=" << a << endl;
    cout << "num 2 =" << b;

    return 0;
}
void swap(int &c, int &d)
{
    int temp = c;
    c = d;
    d = temp;
}