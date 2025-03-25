#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    
    char operation;
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;
    while (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
        cout << "Invalid input. Please choose from +, -, *, or /: ";
        cin >> operation;
    }

    
    int maxValue;
    cout << "What is the maximum value for the input values of the exercise? ";
    while (!(cin >> maxValue) || maxValue <= 0) {
        cout << "Invalid input. Please enter a positive integer: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

   
    char choice;
    bool allowNegative;
    cout << "Are negative values allowed in the exercise? (Y/N): ";
    cin >> choice;
    while (choice != 'Y' && choice != 'N' && choice != 'y' && choice != 'n') {
        cout << "Invalid input. Please enter 'Y' or 'N': ";
        cin >> choice;
    }
    allowNegative = (choice == 'Y' || choice == 'y');

    
    int num1, num2;
    if (allowNegative) {
        num1 = rand() % (2 * maxValue + 1) - maxValue;
        num2 = rand() % (2 * maxValue + 1) - maxValue;
    } else {
        num1 = rand() % (maxValue + 1);
        num2 = rand() % (maxValue + 1);

        if (operation == '-' && num2 > num1) {
            swap(num1, num2); // Ensure num1 >= num2 for subtraction
        } else if (operation == '/' && num2 == 0) {
            num2 = rand() % maxValue + 1; // Ensure non-zero divisor
        }
    }

   
    double correctAnswer;
    if (operation == '+')
        correctAnswer = num1 + num2;
    else if (operation == '-')
        correctAnswer = num1 - num2;
    else if (operation == '*')
        correctAnswer = num1 * num2;
    else
        correctAnswer = static_cast<double>(num1) / num2;

    // Ask user to solve
    cout << "Solve: " << num1 << " " << operation << " " << num2 << " = ";
    double userAnswer;
    cin >> userAnswer;

  
    if (abs(userAnswer - correctAnswer) < 0.01)
        cout << "Correct! Well done!" << endl;
    else
        cout << "Incorrect. The correct answer is " << correctAnswer << "." << endl;

    return 0;
}
