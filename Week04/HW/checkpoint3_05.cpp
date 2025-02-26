/*The following program will run, but the user will have difficulty understanding
what to do. How would you improve the program?*/

// This program multiplies two numbers and displays the result.
#include <iostream>
using namespace std;

int main()
{
    double first, second, product;
    
    cin >> first >> second;
    product = first * second;
    cout << product;
    return 0;
}