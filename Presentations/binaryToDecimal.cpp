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