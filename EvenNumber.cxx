#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "Enter a number:";
    cin >> num;
    for (int k = 1; k <= num; k++)
    {
        cout << 2 * k << " ";
        sum += 2 * k;
    }
    cout << "\nYour enter is:" << num << "total is:" << sum;
    return 0;
}