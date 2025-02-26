/*
Complete the following program skeleton so it asks the user to enter a character.
Store the character in the variable letter. Use a type cast expression with the
variable in a cout statement to display the character’s ASCII code on the screen.
*/
#include <iostream>
using namespace std;

int main()
{
    char letter;

    
    cout << "Enter a character: ";
    cin >> letter;

    
    cout << "The ASCII code of '" << letter << "' is: " << static_cast<int>(letter) << endl;

    return 0;
}
