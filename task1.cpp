#include <iostream>

using namespace std;

/* 1.1 Character with a Given Code
   Enter an integer number (from 33 to 255) and display the character corresponding to that code.
   Example: 
   Input: 65
   Output: A 65
*/

int main() {
    int code = 0;

    cout << "Enter an integer number from 33 to 255: ";
    cin >> code;

    (!cin.fail() && code >= 33 && code <= 255)
        ? cout << "Character: " << (char)code << " " << code << endl
        : cout << "Invalid input. Enter an integer from 33 to 255." << endl;

    return 0;
}