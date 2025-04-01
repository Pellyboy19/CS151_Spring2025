/*
    Define a function that checks if a number is a palindrome.
    The function should take a single parameter: the number to check.
    The function should return true if the number is a palindrome, and false otherwise.
    A palindrome is a number that remains the same when its digits are reversed.
    For example, 121, 1221, and 12321 are palindromes.
    123, 1234, and 12345 are not palindromes.
    A negative number is not a palindrome.
    A single digit number is a palindrome.
*/

#include <iostream>
#include <cmath>
#include <cassert>
#include "_functions.h"

using namespace std;
using namespace Presentations;
void palindromeNumberTest();

bool palindromeNumber(int num); // <<<<<<<<<<<<<< HERE <<<<<<<<<<<<<<

int main()
{
    palindromeNumberTest();
    return 0;
}

void palindromeNumberTest()
{
    // palindromeNumber
    assert(palindromeNumber(121) == true);
    assert(palindromeNumber(1221) == true);
    assert(palindromeNumber(12321) == true);
    assert(palindromeNumber(-12321) == false);
    assert(palindromeNumber(9) == true);
    assert(palindromeNumber(123) == false);
    assert(palindromeNumber(-123) == false);
    assert(palindromeNumber(0) == true);
}