#include <iostream>
#include <cassert>
#include "_functions.h"

using namespace std;
using namespace Presentations;
void isPrimeTest();

bool isPrime(int num); // <<<<<<<<<<<<<< HERE <<<<<<<<<<<<<<

int main()
{
    isPrimeTest();
    return 0;
}

void isPrimeTest()
{
    // isPrime
    assert(isPrime(2) == true);
    assert(isPrime(3) == true);
    assert(isPrime(5) == true);
    assert(isPrime(7) == true);
    assert(isPrime(11) == true);
    assert(isPrime(13) == true);
    assert(isPrime(15) == false);
    assert(isPrime(16) == false);
    assert(isPrime(30) == false);
}