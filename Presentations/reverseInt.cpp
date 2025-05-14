/*
    Define a function that reverses an integer.
    The function should take a single parameter: the integer to reverse.
    The function should return the reversed integer.
    For example, if the input integer is 1234, the function should return 4321.
    If the input integer is -1234, the function should return -4321.
    If the input integer is 0, the function should return 0.
    If the input integer is 1000, the function should return 1.
*/

// Pelumi

#include <iostream>
#include <cassert>
#include <cmath>
#include "_functions.h"

using namespace std;
using namespace Presentations;

void reverseIntTest();

int reverseInt(int num); // <<<<<<<<<<<<<< HERE <<<<<<<<<<<<<<

int main()
{
    reverseIntTest();
    
    return 0;
}

void reverseIntTest()
{
    // reverseInt
    assert(reverseInt(1234) == 4321);
    assert(reverseInt(-1234) == -4321);
    assert(reverseInt(0) == 0);
    assert(reverseInt(1000) == 1);
    assert(reverseInt(-1000) == -1);
}


// Pelumi

#include <iostream>
#include <cassert>
#include <cmath>
#include "_functions.h"

using namespace std;
using namespace Presentations;

void reverseIntTest();

// Function to reverse an integer
int reverseInt(int num)
{
    int reversed = 0;
    int sign = (num < 0) ? -1 : 1; // Store the sign of the number
    num = abs(num); // Make the number positive for processing

    while (num > 0)
    {
        int digit = num % 10;          // Get the last digit
        reversed = reversed * 10 + digit; // Add digit to reversed number
        num /= 10;                    // Remove the last digit
    }

    return reversed * sign; // Return with original sign
}

int main()
{
    reverseIntTest();
    return 0;
}

void reverseIntTest()
{
    // reverseInt
    assert(reverseInt(1234) == 4321);
    assert(reverseInt(-1234) == -4321);
    assert(reverseInt(0) == 0);
    assert(reverseInt(1000) == 1);
    assert(reverseInt(-1000) == -1);

    cout << "All reverseInt tests passed!" << endl;
}
