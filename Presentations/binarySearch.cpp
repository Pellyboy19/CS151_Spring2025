#include <iostream>
#include <cassert>
#include "_functions.h"

using namespace std;
using namespace Presentations;
void binarySearchTest();

unsigned int binarySearch(int arr[], unsigned int size, int target); // <<<<<<<<<<<<<< HERE <<<<<<<<<<<<<<

int main()
{
    binarySearchTest();
    return 0;
}

void binarySearchTest()
{
    // binarySearch
    int arr[] = {-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    assert(binarySearch(arr, 16, 0) == 10);
    assert(binarySearch(arr, 16, -10) == 0);
    assert(binarySearch(arr, 16, 5) == 15);
    assert(binarySearch(arr, 16, -5) == 5);
    assert(binarySearch(arr, 16, 6) == -1);
    assert(binarySearch(arr, 16, -11) == -1);
}