#include <iostream>
#include "_functions.h"

using namespace std;
using namespace Presentations;

void selectionSort(int arr[], int size); // <<<<<<<<<<<<<< HERE <<<<<<<<<<<<<<

int main()
{
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 6};
    selectionSort(arr, 8);
    Print(arr, 8);
    return 0;
}   