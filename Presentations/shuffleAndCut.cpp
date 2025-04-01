/*
    Define a function that shuffles and cuts a deck of cards.
    The function should take two parameters: the array to shuffle and the size of the array.
    The function should iterate through the array and randomly swap each element with another element in the array.
    The function should then cut the deck by splitting it in half and swapping the two halves.
    The function should not return anything.
    The function should modify the input array in place.
    The function should not use any additional data structures.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include "_functions.h"

using namespace std;
using namespace Presentations;
void shuffleAndCutTest();

void shuffleAndCut(int arr[], int size); // <<<<<<<<<<<<<< HERE <<<<<<<<<<<<<<

int main()
{
    srand(time(0));
    shuffleAndCutTest();
    int deck[52];

    FillDeck(deck, 52);
    Print(deck, 52);

    shuffleAndCut(deck, 52);
    Print(deck, 52);
    
    return 0;
}

void shuffleAndCutTest()
{
    // shuffleAndCut
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    shuffleAndCut(arr, 10);
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == i + 1)
        {
            count++;
        }
    }
    assert(count < 10);
}