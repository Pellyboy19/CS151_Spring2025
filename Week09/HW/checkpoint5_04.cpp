/*
Write an input validation loop that asks the user to enter “Yes” or “No”.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string response;

    
    do {
        cout << "Enter Yes or No: ";
        cin >> response;

        if (response != "Yes" && response != "No") {
            cout << "Invalid input. Try again." << endl;
        }
    } while (response != "Yes" && response != "No");

    cout << "You entered: " << response << endl;

    return 0;
}
