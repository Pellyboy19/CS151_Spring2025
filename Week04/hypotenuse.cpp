#include <iostream>
#include <cmath> // Include cmath for sqrt() function

using namespace std;

int main() {
    // Declare variables
    double side_a, side_b, side_c;

    // Ask the user for the lengths of the two sides
    cout << "Enter the length of side A: ";
    cin >> side_a;
    cout << "Enter the length of side B: ";
    cin >> side_b;

    // Calculate the hypotenuse using the Pythagorean theorem
    side_c = sqrt((side_a * side_a) + (side_b * side_b));

    // Display the result
    cout << "side_c = " << side_c << endl;

    return 0;
}