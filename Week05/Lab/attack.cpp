/*
Write a program that stores a whole number value in a variable called attack,
and a variable called critical that is set to false.

For any attack there is a 20% chance of a critical hit.

Declare a variable that holds a random number between 1 and 100.
If the random number is between 1 and 20 inclusively, set the critical hit variable to true.

If the critical hit variable is true, multiply the attack power by 2.
Display the attack power and whether or not the attack was a critical hit.
*/


#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    
    srand(time(nullptr));

    
    int attack = 50;

    
    bool critical = false;

   
    int randomNumber = rand() % 100 + 1;

   
    if (randomNumber <= 20) {
        critical = true;
    }

   
    if (critical) {
        attack *= 2;
    }

    
    cout << "Attack power: " << attack << "\n";
    cout << boolalpha << "Critical hit? " << critical << "\n";

    return 0;
}
