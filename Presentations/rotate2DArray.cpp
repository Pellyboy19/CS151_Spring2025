/*
    Define a function that rotates a 2D array (matrix) by 90 degrees clockwise.
    The function should take a single parameter: the 2D array to rotate.
    The function should modify the input array in place.
    The function should not return anything.
    The function should not use any additional data structures.
    The function should not use any built-in functions.
*/

#include <iostream>
#include <cassert>
#include <cstdlib>
#include <ctime>
#include "_functions.h"

using namespace std;
using namespace Presentations;

const int N = 5;

void rotate2DArrayTest();
void FillMatrix(int matrix[][N]);
void PrintMatrix(int matrix[][N]);

void rotate2DArray(int matrix[][N]); // <<<<<<<<<<<<<< HERE <<<<<<<<<<<<<<

int main()
{
    srand(time(0));
    rotate2DArrayTest();

    int arr[N][N];

    FillMatrix(arr);
    PrintMatrix(arr);
    
    rotate2DArray(arr);
    PrintMatrix(arr);

    return 0;
}

void PrintMatrix(int matrix[][N])
{
    cout << "{";
    for (int i = 0; i < N; i++)
    {
        cout << "{";
        for (int j = 0; j < N; j++)
        {
            cout << matrix[i][j];
            if (j < N - 1)
            {
                cout << ", ";
            }
        }
        cout << "}";
        if (i < N - 1)
        {
            cout << ", ";
        }
    }
    cout << "}" << endl;
}

void FillMatrix(int matrix[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matrix[i][j] = rand() % 100;
        }
    }
}

void rotate2DArrayTest()
{
    // rotate2DArray
    int arr2D[5][5] = {{1, 2, 3, 4, 5},
                        {6, 7, 8, 9, 10},
                        {11, 12, 13, 14, 15},
                        {16, 17, 18, 19, 20},
                        {21, 22, 23, 24, 25}};
    rotate2DArray(arr2D);
    int arr2D_rotated[5][5] = {{21, 16, 11, 6, 1},
                                {22, 17, 12, 7, 2},
                                {23, 18, 13, 8, 3},
                                {24, 19, 14, 9, 4},
                                {25, 20, 15, 10, 5}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            assert(arr2D[i][j] == arr2D_rotated[i][j]);
        }
    }
}