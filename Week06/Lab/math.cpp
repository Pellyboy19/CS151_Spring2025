#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char getOperation() {
    char operation;
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;
    while (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
        cout << "Invalid input. Please choose from +, -, *, or /." << endl;
        cin >> operation;
    }
    return operation;
}

int getMaximumValue() {
    int maxValue;
    cout << "What is the maximum value for the input values of the exercise? ";
    while (!(cin >> maxValue) || maxValue <= 0) {
        cout << "Invalid input. Please enter a positive integer: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    return maxValue;
}

bool allowNegatives() {
    char choice;
    cout << "Are negative values allowed in the exercise? (Y/N): ";
    cin >> choice;
    while (choice != 'Y' && choice != 'N' && choice != 'y' && choice != 'n') {
        cout << "Invalid input. Please enter 'Y' or 'N': ";
        cin >> choice;
    }
    return (choice == 'Y' || choice == 'y');
}

void generateNumbers(int maxValue, bool allowNegative, char operation, int &num1, int &num2) {
    if (allowNegative) {
        num1 = rand() % (2 * maxValue + 1) - maxValue;
        num2 = rand() % (2 * maxValue + 1) - maxValue;
    } else {
        num1 = rand() % (maxValue + 1);
        num2 = rand() % (maxValue + 1);
        
        if (operation == '-' && num2 > num1) {
            swap(num1, num2);  // Ensure num1 is greater for subtraction
        } else if (operation == '/' && num2 == 0) {
            num2 = rand() % maxValue + 1;  // Ensure non-zero divisor
        }
    }
}

int main() {
    srand(time(0));
    char operation = getOperation();
    int maxValue = getMaximumValue();
    bool allowNegative = allowNegatives();
    int num1, num2;
    generateNumbers(maxValue, allowNegative, operation, num1, num2);

    double correctAnswer;
    if (operation == '+')
        correctAnswer = num1 + num2;
    else if (operation == '-')
        correctAnswer = num1 - num2;
    else if (operation == '*')
        correctAnswer = num1 * num2;
    else
        correctAnswer = static_cast<double>(num1) / num2;
    
    cout << "Solve: " << num1 << " " << operation << " " << num2 << " = ";
    double userAnswer;
    cin >> userAnswer;
    
    if (abs(userAnswer - correctAnswer) < 0.01)
        cout << "Correct! Well done!" << endl;
    else
        cout << "Incorrect. The correct answer is " << correctAnswer << "." << endl;
    
    return 0;
}
