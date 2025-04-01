/*
Write a for loop that displays all of the odd numbers, 1 through 49.
*/
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 49; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
