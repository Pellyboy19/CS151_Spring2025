/*
    Write a program that stores the word for each digit in an array.
    The program should ask the user to enter a number between 0 and 9 and
    should display the corresponding word. For example, if the user enters 4,
    the program should display "four." Use a switch statement to determine which
    word from the array to display. There should 10 cases [0,9]. 
    If the number is not between 0 and 9, the program should 
    display "Not a valid digit."

    Optimization: Can you get the same result without using
                  a switch statement and without so many cases?
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string digits[10] = {
        "zero", 
        "one", 
        "two",
        "three", 
        "four", 
        "five", 
        "six", 
        "seven", 
        "eight", 
        "nine"
    };
    int choice;
    cout << "Please enter a digit: ";
    cin >> choice;

    if (choice >= 0 && choice <= 9)
    {
        cout << digits[choice] << endl;
    }
    else
    {
        cout << "Not a valid digit\n";
    }

    // switch (choice)
    // {
    //     case 0: cout << digits[0] << endl;
    //             break;
    //     case 1: cout << digits[1] << endl;
    //             break;
    //     case 2: cout << digits[2] << endl;
    //             break;
    //     case 3: cout << digits[3] << endl;
    //             break;
    //     case 4: cout << digits[4] << endl;
    //             break;
    //     case 5: cout << digits[5] << endl;
    //             break;
    //     case 6: cout << digits[6] << endl;
    //             break;
    //     case 7: cout << digits[7] << endl;
    //             break;
    //     case 8: cout << digits[8] << endl;
    //             break;
    //     case 9: cout << digits[9] << endl;
    //             break;
    //     default: cout << "Not a valid digit\n";
    // }
    return 0;
}