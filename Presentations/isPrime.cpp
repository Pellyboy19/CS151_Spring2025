/*
    Define a function that checks if a number is prime.
    The function should take a single parameter: the number to check.
    The function should return true if the number is prime, and false otherwise.
    A prime number is a natural number greater than 1 that cannot be formed by multiplying two smaller natural numbers.
    In other words, a prime number is a number that has no positive divisors other than 1 and itself.
    For example, 2, 3, 5, 7, 11, and 13 are prime numbers.
    4, 6, 8, 9, 10, and 12 are not prime numbers.
*/

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