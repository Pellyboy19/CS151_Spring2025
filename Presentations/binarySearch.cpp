#include <iostream>
#include "_functions.h"

using namespace std;
using namespace Presentations;

int binarySearch(int arr[], int size, int target); // <<<<<<<<<<<<<< HERE <<<<<<<<<<<<<<

int main()
{
    int arr[] = {-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    cout << binarySearch(arr, 16, 0) << endl;
    cout << binarySearch(arr, 16, -10) << endl;
    cout << binarySearch(arr, 16, 5) << endl;
    cout << binarySearch(arr, 16, -5) << endl;
    cout << binarySearch(arr, 16, 6) << endl;
    cout << binarySearch(arr, 16, -11) << endl;
    return 0;
}