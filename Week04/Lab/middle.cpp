#include <iostream>

using namespace std;

int main() {
    // Declare variables
    int num1, num2, middle;

    // Ask the user for two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate the middle number
    middle = (num1 + num2) / 2;

    // Display the result
    cout << "middle = " << middle << endl;

    // Assign new values to num1 and num2
    num1 = 2147483640;
    num2 = 2147483646;

    // Calculate the new middle number
    middle = (num1 + num2) / 2;

    // Display the new result
    cout << "middle = " << middle << endl;

    return 0;
}