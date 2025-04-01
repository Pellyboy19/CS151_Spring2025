/*
Write a for loop that repeats seven times, asking the user to enter a number. The
loop should also calculate the sum of the numbers entered.
*/
#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    for (int i = 1; i <= 7; i++) {
        cout << "Enter number " << i << ": ";
        cin >> number;
        sum += number;
    }

    cout << "The total sum is: " << sum << endl;
    return 0;
}
