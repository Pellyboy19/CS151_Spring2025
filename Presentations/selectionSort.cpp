#include <iostream>
#include <cassert>
#include "_functions.h"

using namespace std;
using namespace Presentations;
void selectionSortTest();

void selectionSort(int arr[], int size); // <<<<<<<<<<<<<< HERE <<<<<<<<<<<<<<

int main()
{
    selectionSortTest();
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 6};
    selectionSort(arr, 8);
    Print(arr, 8);
    return 0;
}   

void selectionSortTest()
{
    // selectionSort
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 6};
    selectionSort(arr, 8);
    int arr_sorted[] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < 8; i++)
    {
        assert(arr[i] == arr_sorted[i]);
    }
}