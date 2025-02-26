/*
Complete the following program skeleton so it asks for the user's weight
(in pounds) and displays the equivalent weight in kilograms.
*/

#include <iostream>
using namespace std;

int main()
{
    double pounds, kilograms;

    
    cout << "Enter your weight in pounds: ";
    cin >> pounds;

  
    kilograms = pounds / 2.2;

    
    cout << "Your weight in kilograms is: " << kilograms << endl;

    return 0;
}
