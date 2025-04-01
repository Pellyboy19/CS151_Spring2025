/*
Write a for loop that displays every fifth number, 0 through 100.
*/
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i <= 100; i += 5) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
