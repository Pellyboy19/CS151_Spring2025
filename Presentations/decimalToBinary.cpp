/*
    Define a function that converts an unsigned integer to its binary equivalent.
    The function should take a single parameter: the unsigned integer to convert.
    The function should return the binary equivalent of the unsigned integer as a string.
    For example, if the input unsigned integer is 10, the function should return "1010".
    If the input unsigned integer is 255, the function should return "11111111".
    If the input unsigned integer is 0, the function should return "0".
    If the input unsigned integer is 1, the function should return "1".
*/

#include <iostream>
#include <string>
#include <cassert>
#include "_functions.h"

using namespace std;
using namespace Presentations;

void decimalToBinaryTest();

string decimalToBinary(unsigned int num); // <<<<<<<<<<<<<< HERE <<<<<<<<<<<<<<

int main()
{
    decimalToBinaryTest();
        
    return 0;
}

void decimalToBinaryTest()
{
    // decimalToBinary
    assert(decimalToBinary(0) == "0");
    assert(decimalToBinary(1) == "1");
    assert(decimalToBinary(2) == "10");
    assert(decimalToBinary(3) == "11");
    assert(decimalToBinary(4) == "100");
    assert(decimalToBinary(5) == "101");
    assert(decimalToBinary(6) == "110");
    assert(decimalToBinary(7) == "111");
    assert(decimalToBinary(8) == "1000");
    assert(decimalToBinary(9) == "1001");
    assert(decimalToBinary(10) == "1010");
}