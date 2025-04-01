#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
   
    srand(static_cast<unsigned int>(time(0)));


    int secretNumber = 1 + rand() % 100;
    int guess;

    cout << "Guess the number (between 1 and 100): ";

    
    do {
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high, try again: ";
        } else if (guess < secretNumber) {
            cout << "Too low, try again: ";
        }
    } while (guess != secretNumber);

   
    cout << "Congratulations! You guessed the number!" << endl;

    return 0;
}
