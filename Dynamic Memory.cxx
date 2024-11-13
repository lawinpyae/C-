#include <iostream>
using namespace std;
int main()
{
    int *ptr1;
    int *ptr2;
    float *ptr3 = new float(8.93);
    ptr1 = new int;
    ptr2 = new int[3];
    *ptr1 = 28;
    ptr2[0] = 10;
    ptr2[1] = 20;
    ptr2[2] = 30;
    cout << "ptr1=" << ptr1 << endl;
    cout << "ptr1=" << *ptr1 << endl;
    cout << "ptr3=" << ptr3 << endl;
    cout << "ptr3=" << *ptr3 << endl;
    cout << "ptr2=" << ptr2 << endl;
    cout << "Point Value of ptr2=" << endl;
    for (int i = 0; i < 3; i++)
        cout << ptr2[i] << "\t";
    delete ptr1;
    delete[] ptr2;
    delete ptr3;
    cout << "\n After Delet" << endl;
    cout << "ptr1=" << ptr1 << endl;
    cout << " *ptr1=" << *ptr1 << endl;
    return 0;
}