#include <iostream>
using namespace std;
#include<conio.h>
int main() {
    char ch;
    long total = 0;
    int digitCount = 0;

    cout << "Enter a number: ";
    
    while (digitCount < 6) {
        ch = getche(); // Read a character from the user

        if (ch == '\r') {
            break; // Exit the loop if Enter key is pressed
        }

        if (ch >= '0' && ch <= '9') {
            // Check if the character is a digit
            total = total * 10 + (ch - '0'); // Convert char to int and add to total
            digitCount++;
        }
    }

    cout << "\nNumber is: " << total << endl;

    return 0;
}