/*
Write an input validation loop that asks the user to enter a number in the range
of 10 through 25.
*/

#include <iostream>
using namespace std;

int main() {
    int number;

    // Input validation loop
    do {
        cout << "Enter a number between 10 and 25: ";
        cin >> number;

        if (number < 10 || number > 25) {
            cout << "Invalid input. Try again." << endl;
        }
    } while (number < 10 || number > 25);

    cout << "You entered a valid number: " << number << endl;

    return 0;
}
