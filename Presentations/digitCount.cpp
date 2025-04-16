/*
    Define a function that takes an unsigned long long argument and counts the frequency of each digit (0-9) in the number.
    The function should take a single parameter: the integer to check.
    The function should use an array of size 10, where each index corresponds to a digit.
    The function should return an integer respresenting the array of digit counts.
    For example, if the input integer is 1234567890, the function should create an array with the following values:
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
    Then the function should return the integer 1111111111.
    If the input integer is 1122334455, the function should create an array with the following values:
    [0, 2, 2, 2, 2, 2, 0, 0, 0, 0]
    Then the function should return the integer 222220000.
    If the input integer is 0, the function should create an array with the following values:
    [1, 0, 0, 0, 0, 0, 0, 0, 0, 0]
    Then the function should return the integer 1000000000.
    If the input integer is 9, the function should create an array with the following values:
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 1]
    Then the function should return the integer 1.
    If the input integer is 889999999999, the function should create an array with the following values:
    [0, 0, 0, 0, 0, 0, 0, 0, 2, 10]
    Then the function should return the integer 210.
*/

#include <iostream>
#include <cassert>
#include <cmath>
#include "_functions.h"

using namespace std;
using namespace Presentations;
using ulong = unsigned long long;

void digitCountTest();

ulong digitCount(ulong num); // <<<<<<<<<<<<<< HERE <<<<<<<<<<<<<<

int main()
{
    digitCountTest();
    
    return 0;
}

void digitCountTest()
{
    // digitCount
    assert(digitCount(1234567890) == 1111111111);
    assert(digitCount(1122334455) == 2000000002);
    assert(digitCount(0) == 1000000000);
    assert(digitCount(9) == 1);
    assert(digitCount(8) == 10);
}