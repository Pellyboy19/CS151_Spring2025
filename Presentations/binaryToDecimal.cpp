/*
    Define a function that converts a binary number (represented as a string) to its decimal equivalent.
    The function should take a single parameter: the binary number as a string.
    The function should return the decimal equivalent of the binary number as an integer.
    For example, if the input binary number is "1010", the function should return 10.
    If the input binary number is "1111", the function should return 15.
    If the input binary number is "10000000", the function should return 128.
    If the input binary number is "0", the function should return 0.
    If the input binary number is "00000000", the function should return 0.
    If the input binary number is "00000001", the function should return 1.
    If the input binary number is "00000010", the function should return 2.

    You can assume that the input binary number will only contain 0s and 1s.
    You can assume that the input binary number will not be larger than 32 bits.
    You can assume that the input binary number will not be negative.
*/

#include <iostream>
#include <cmath>
#include <cassert>
#include <ctime>
#include "_functions.h"

using namespace std;
using namespace Presentations;
void binaryToDecimalTest();

int binaryToDecimal(const string& binary); // <<<<<<<<<<<<<< HERE <<<<<<<<<<<<<<

int main()
{
    srand(time(0));
    binaryToDecimalTest();
    
    string binary = BinaryNumber();
    cout << "Binary: " << binary << endl;
    cout << "Decimal: " << binaryToDecimal(binary) << endl;
    return 0;
}

void binaryToDecimalTest()
{
    // binaryToDecimal
    assert(binaryToDecimal("0") == 0);
    assert(binaryToDecimal("01") == 1);
    assert(binaryToDecimal("0010") == 2);
    assert(binaryToDecimal("00011") == 3);
    assert(binaryToDecimal("0000100") == 4);
    assert(binaryToDecimal("00000101") == 5);
    assert(binaryToDecimal("110") == 6);
    assert(binaryToDecimal("111") == 7);
    assert(binaryToDecimal("1000") == 8);
    assert(binaryToDecimal("1001") == 9);
    assert(binaryToDecimal("1010") == 10);
    assert(binaryToDecimal("10101010") == 170);
    assert(binaryToDecimal("11111111") == 255);
}