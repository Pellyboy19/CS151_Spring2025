/*
    Define a function that sorts an array of integers using the selection sort algorithm.
    The function should take two parameters: the array to sort and the size of the array.
    The function should sort the array in ascending order.
    The selection sort algorithm works by repeatedly selecting the smallest element from the unsorted portion of the array
    and swapping it with the first unsorted element.
    For example, if the input array is {5, 3, 8, 4, 2, 7, 1, 6},
    the function should sort the array to {1, 2, 3, 4, 5, 6, 7, 8}.
    The function should not return anything.
    The function should modify the input array in place.
    The function should not use any additional data structures.
    The function should not use any built-in sorting functions.
*/

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