/*
Write cout statements with stream manipulators that perform the following:
A) Display the number 34.789 in a field of nine spaces with two decimal places
of precision.
B) Display the number 7.0 in a field of five spaces with three decimal places of
precision.
The decimal point and any trailing zeros should be displayed.
C) Display the number 5.789e+12 in fixed-point notation.
D) Display the number 67 left-justified in a field of seven spaces.
*/

#include <iostream>
#include <iomanip>  // For setw, setprecision, fixed, showpoint, left, etc.
using namespace std;

int main()
{
    // A) Display the number 34.789 in a field of nine spaces with two decimal places of precision
    cout << setw(9)          
         << fixed            
         << showpoint        
         << setprecision(2)  
         << 34.789 
         << endl;

    // B) Display the number 7.0 in a field of five spaces with three decimal places of precision
    //    The decimal point and trailing zeros should be displayed .
    cout << setw(5)
         << fixed
         << showpoint
         << setprecision(3)
         << 7.0
         << endl;

    // C) Display the number 5.789e+12 in fixed-point notation
    cout << fixed
         << 5.789e+12 
         << endl;

    // D) Display the number 67 left-justified in a field of seven spaces
    cout << left    
         << setw(7) 
         << 67
         << endl;

    return 0;
}
