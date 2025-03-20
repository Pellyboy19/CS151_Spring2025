#include <iostream>
#include <cmath>
#include "_functions.h"

using namespace std;
using namespace Presentations;

bool palindromeNumber(int num); // <<<<<<<<<<<<<< HERE <<<<<<<<<<<<<<

int main()
{
    cout << palindromeNumber(121) << endl;
    cout << palindromeNumber(1221) << endl;
    cout << palindromeNumber(12321) << endl;
    cout << palindromeNumber(-12321) << endl;
    cout << palindromeNumber(9) << endl;
    cout << palindromeNumber(123) << endl;
    cout << palindromeNumber(-123) << endl;
    cout << palindromeNumber(0) << endl;
    return 0;
}