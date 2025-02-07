// This program will output the circumference and area
// of the circle with a given radius.

#include <iostream>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main()
{
	double area;								// definition of area of circle 
    double circumference;				// definition of circumference 

    circumference = 2 * PI * RADIUS;	// computes circumference
	area = PI * RADIUS * RADIUS;		// computes area


	// Fill in the code for the cout statement that will output (with description)
	// the area of the circle
     cout << "The circumference of the circle is: " << circumference << " units." << endl;
    cout << "The area of the circle is: " << area << " square units." << endl;

	return 0;
}