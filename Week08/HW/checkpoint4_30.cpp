/*
    Complete the following program skeleton by writing a switch statement that
    displays “one” if the user has entered 1, “two” if the user has entered 2, and
    “three” if the user has entered 3. If a number other than 1, 2, or 3 is entered, the
    program should display an error message.
*/

#include <iostream>
using namespace std;

int main()
{
    int userNum;
    cout << "Enter one of the numbers 1, 2, or 3: ";
    cin >> userNum;

    switch (userNum)
    {
        case 1:
            cout << "one\n";
            break;
        case 2:
            cout << "two\n";
            break;
        case 3:
            cout << "three\n";
            break;
        default:
            cout << "Error: Invalid number entered.\n";
    }

    return 0;
}
