#include <iostream>
using namespace std;
const int MAX = 5;
void centimize(double *p);
int main()
{
    double varray[MAX] = {10.0, 43.1, 95.9, 59.7, 87.3};
    cout << "Before Conversation\n";
    cout << "Inches are:\n";
    for (int j = 0; j < MAX; j++)
        cout << varray[j] << " ,";
    centimize(varray);
    cout << "\nAfter Conversion\n";
    cout << "Centimeter are:\n";
    for (int j = 0; j < MAX; j++)
        cout << varray[j] << ",";
    return 0;
}
void centimize(double A[])
{
    for (int j = 0; j < MAX; j++)
        A[j] *= 2.54;
}