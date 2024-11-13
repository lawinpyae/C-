#include <iostream>
using namespace std;

int main ( )
{
    int arr1[10], arr2[10];
    cout << "Enter 10 integers into the array:";
    for (int i = 0; i < 10; i++)
        cin >> arr1[i];
    cout << "Include into the array\n";
    for (int i = 0; i < 10; i++)
        cout << arr1[i] << " ";
    cout << "\nReverse\n";
    for (int j = sizeof(arr1)/sizeof(int)-1; j >= 0; j--)
    {
        arr2[j] = arr1[j];
        cout << arr2[j] << " ";
    }
    return 0;
}