/*
The following program skeleton, when completed, will ask the user to enter 10
integers, which are stored in an array. The function avgArray, which you must
write, is to calculate and return the average of the numbers entered.
*/

#include <iostream>
using namespace std;

// Write your function prototype here

int main()
{
    const int SIZE = 10;
    int userNums[SIZE];
    
    cout << "Enter 10 numbers: ";
    for (int count = 0; count < SIZE; count++)
    {
        cout << "#" << (count + 1) << " ";
        cin >> userNums[count];
    }
    cout << "The average of those numbers is ";
    cout << avgArray(userNums, SIZE) << endl;
    return 0;
}
//
// Write the function avgArray here.
//