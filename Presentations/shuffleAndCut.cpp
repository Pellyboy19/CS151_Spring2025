#include <iostream>
#include "_functions.h"

using namespace std;
using namespace Presentations;

void shuffleAndCut(int arr[], int size); // <<<<<<<<<<<<<< HERE <<<<<<<<<<<<<<

int main()
{
    int deck[52];

    FillDeck(deck, 52);
    Print(deck, 52);

    shuffleAndCut(deck, 52);
    Print(deck, 52);
    
    return 0;
}