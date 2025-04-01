/*
Write an input validation loop that asks the user to enter ‘Y’, ‘y’, ‘N’, or ‘n’.
*/

#include <iostream>
using namespace std;

int main() {
    char choice;

   
    do {
        cout << "Enter Y, y, N, or n: ";
        cin >> choice;

        if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            cout << "Invalid input. Try again." << endl;
        }
    } while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n');

    cout << "You entered: " << choice << endl;

    return 0;
}
