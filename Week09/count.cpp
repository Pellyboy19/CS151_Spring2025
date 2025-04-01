#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask the user for a valid number between 10 and 20
    do {
        cout << "Enter a positive integer between 10 and 20: ";
        cin >> n;
        if (n < 10 || n > 20) {
            cout << "Invalid input. Please try again." << endl;
        }
    } while (n < 10 || n > 20);

    int number, positiveCount = 0, negativeCount = 0;

    
    for (int i = 1; i <= n; ++i) {
        cout << "Enter number " << i << ": ";
        cin >> number;

        if (number > 0) {
            positiveCount++;
        } else if (number < 0) {
            negativeCount++;
        }
        
    }

   
    cout << "Total positive numbers: " << positiveCount << endl;
    cout << "Total negative numbers: " << negativeCount << endl;

    return 0;
}
