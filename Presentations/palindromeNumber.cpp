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