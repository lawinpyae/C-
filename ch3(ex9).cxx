#include <iostream>
using namespace std;

int main()
{
    float num1, num2, ans;
    char ch, op;
    do
    {
        cout << "Enter a number,an operator and another number\n";
        cin >> num1 >> op >> num2;
        switch (op)
        {
        case '+':
            ans = num1 + num2;
            break;
        case '-':
            ans = num1 - num2;
            break;
        case '*':
            ans = num1 * num2;
            break;
        case '/':
            ans = num1 / num2;
            break;
        default:
            ans = 0;
        }
        cout << "Result is :" << ans << endl;
        cout << "Do another (y/n)?";
        cin >> ch;
    } while (ch == 'y');
    return 0;
}