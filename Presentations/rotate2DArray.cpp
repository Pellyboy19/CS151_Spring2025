#include <iostream>
#include "_functions.h"

using namespace std;
using namespace Presentations;

const int N = 5;

void FillMatrix(int matrix[][N]);
void PrintMatrix(int matrix[][N]);

void rotate2DArray(int matrix[][N]); // <<<<<<<<<<<<<< HERE <<<<<<<<<<<<<<


int main()
{
    srand(time(0));

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