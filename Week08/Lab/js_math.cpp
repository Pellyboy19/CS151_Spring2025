#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    srand(time(0));
    cout << "This program will perform a math operation on two numbers." << endl;
    cout << "Enter an operator (+, -, *, /): ";
    char oprtr;
    cin >> oprtr;

    cout << "What is the maximum value for the input values of the exercise? ";
    int maximumValue;
    cin >> maximumValue;

    maximumValue += 1;

    cout << "Are negative values allowed? (Y/N): ";
    char neg_flag;
    cin >> neg_flag;

    bool negative = neg_flag == 'Y' || neg_flag == 'y';

    int num1 , num2;

    if (negative)
    {
        num1 = rand() % (maximumValue * 2 + 1) - maximumValue;
        num2 = rand() % (maximumValue * 2 + 1) - maximumValue;
    }
    else
    {
        num1 = rand() % maximumValue;
        num2 = rand() % maximumValue;
        if (oprtr == '-' && num1 < num2)
        {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
    }

    if (oprtr == '/' && num2 == 0)
    {
        num2 = rand() % maximumValue + 1;
        num2 *= (rand() % 2 && negative) ? -1 : 1;
    }

    int result;
    switch (oprtr)
    {
        case '+': result = num1 + num2;
                break;
        case '-': result = num1 - num2;
                break;
        case '*': result = num1 * num2;
                break;
        case '/': result = num1 / num2;
                break;
        default: cout << "Invalid operator." << endl;
                return 1;
    }

    string expr = to_string(num1) + " " + oprtr + " " + to_string(num2);

    cout << "What is the answer: " << expr << " = ";
    double answer;
    cin >> answer;
    if (answer == result)
    {
        cout << "Correct!" << endl;
    }
    else
    {
        cout << "Incorrect. The correct answer is " << result << endl;
    }
}